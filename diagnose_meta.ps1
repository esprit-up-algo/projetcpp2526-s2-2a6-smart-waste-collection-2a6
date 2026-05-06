# Diagnostic: launch Meta AI PWA and dump the full window state.
# Run this in PowerShell: powershell -ExecutionPolicy Bypass -File diagnose_meta.ps1

Add-Type @"
using System;
using System.Text;
using System.Runtime.InteropServices;
using System.Collections.Generic;
public class D {
    public delegate bool EnumWindowsProc(IntPtr hWnd, IntPtr lParam);
    [DllImport("user32.dll")] public static extern bool EnumWindows(EnumWindowsProc lpEnumFunc, IntPtr lParam);
    [DllImport("user32.dll", CharSet=CharSet.Auto)] public static extern int GetWindowText(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
    [DllImport("user32.dll")] public static extern int GetWindowTextLength(IntPtr hWnd);
    [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr hWnd);
    [DllImport("user32.dll")] public static extern bool IsIconic(IntPtr hWnd);
    [DllImport("user32.dll")] public static extern bool IsZoomed(IntPtr hWnd);
    [DllImport("user32.dll")] public static extern int GetWindowLong(IntPtr hWnd, int nIndex);
    [DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr hWnd, out RECT r);
    [DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr hWnd, out RECT r);
    [DllImport("user32.dll")] public static extern bool GetLayeredWindowAttributes(IntPtr hWnd, out uint pcrKey, out byte pbAlpha, out uint pdwFlags);
    [DllImport("user32.dll")] public static extern uint GetWindowThreadProcessId(IntPtr hWnd, out uint pid);
    [DllImport("user32.dll")] public static extern int GetClassName(IntPtr hWnd, StringBuilder lpClassName, int nMaxCount);

    public static List<IntPtr> FindByTitle(string pattern) {
        var results = new List<IntPtr>();
        EnumWindows((hWnd, lParam) => {
            int len = GetWindowTextLength(hWnd);
            if (len == 0) return true;
            var sb = new StringBuilder(len + 4);
            GetWindowText(hWnd, sb, sb.Capacity);
            if (sb.ToString().IndexOf(pattern, StringComparison.OrdinalIgnoreCase) >= 0) results.Add(hWnd);
            return true;
        }, IntPtr.Zero);
        return results;
    }
}
public struct RECT { public int Left, Top, Right, Bottom; }
"@

$shortcut = Join-Path $env:APPDATA "Microsoft\Windows\Start Menu\Programs\Chrome Apps\Meta AI.lnk"
Write-Host "Shortcut path: $shortcut"
$exists = Test-Path $shortcut
Write-Host "Shortcut exists: $exists"
Write-Host ""

Write-Host "=== BEFORE LAUNCH ==="
$existing = [D]::FindByTitle("Meta")
$cnt = $existing.Count
Write-Host "Windows matching 'Meta': $cnt"
foreach ($h in $existing) {
    $sb = New-Object Text.StringBuilder 256
    [D]::GetWindowText($h, $sb, 256) | Out-Null
    $t = $sb.ToString()
    Write-Host "  HWND=$h  Title='$t'"
}
Write-Host ""

if ($existing.Count -eq 0) {
    Write-Host "Launching Meta AI..."
    Start-Process -FilePath $shortcut -WindowStyle Normal
    Start-Sleep -Seconds 8
} else {
    Write-Host "Using existing Meta AI window"
    Start-Sleep -Seconds 1
}

Write-Host ""
Write-Host "=== AFTER LAUNCH ==="
$windows = [D]::FindByTitle("Meta")
$wcnt = $windows.Count
Write-Host "Windows matching 'Meta': $wcnt"
Write-Host ""

$WS_EX_LAYERED     = 0x00080000
$WS_EX_TOOLWINDOW  = 0x00000080
$WS_EX_TRANSPARENT = 0x00000020
$WS_EX_NOACTIVATE  = 0x08000000
$WS_VISIBLE        = 0x10000000
$WS_MINIMIZE       = 0x20000000
$WS_MAXIMIZE       = 0x01000000

foreach ($h in $windows) {
    $title = New-Object Text.StringBuilder 256
    [D]::GetWindowText($h, $title, 256) | Out-Null
    $titleStr = $title.ToString()

    $cls = New-Object Text.StringBuilder 256
    [D]::GetClassName($h, $cls, 256) | Out-Null
    $clsStr = $cls.ToString()

    $rect = New-Object RECT
    [D]::GetWindowRect($h, [ref]$rect) | Out-Null
    $rectW = $rect.Right - $rect.Left
    $rectH = $rect.Bottom - $rect.Top

    $client = New-Object RECT
    [D]::GetClientRect($h, [ref]$client) | Out-Null
    $clientW = $client.Right - $client.Left
    $clientH = $client.Bottom - $client.Top

    $style = [D]::GetWindowLong($h, -16)
    $exStyle = [D]::GetWindowLong($h, -20)

    $isVisible = [D]::IsWindowVisible($h)
    $isIconic = [D]::IsIconic($h)
    $isZoomed = [D]::IsZoomed($h)

    $pid = [uint32]0
    [D]::GetWindowThreadProcessId($h, [ref]$pid) | Out-Null
    $proc = Get-Process -Id $pid -ErrorAction SilentlyContinue
    $procName = if ($proc) { $proc.ProcessName } else { "?" }

    $isLayered     = (($exStyle -band $WS_EX_LAYERED) -ne 0)
    $isToolWin     = (($exStyle -band $WS_EX_TOOLWINDOW) -ne 0)
    $isTransparent = (($exStyle -band $WS_EX_TRANSPARENT) -ne 0)
    $isNoActivate  = (($exStyle -band $WS_EX_NOACTIVATE) -ne 0)
    $hasVisible    = (($style -band $WS_VISIBLE) -ne 0)
    $hasMin        = (($style -band $WS_MINIMIZE) -ne 0)
    $hasMax        = (($style -band $WS_MAXIMIZE) -ne 0)

    $styleHex = "0x" + $style.ToString("X8")
    $exStyleHex = "0x" + $exStyle.ToString("X8")

    Write-Host "---"
    Write-Host "HWND:       $h"
    Write-Host "Title:      '$titleStr'"
    Write-Host "Class:      '$clsStr'"
    Write-Host "Process:    $procName (PID $pid)"
    Write-Host "Rect:       L=$($rect.Left) T=$($rect.Top) R=$($rect.Right) B=$($rect.Bottom)  W=$rectW H=$rectH"
    Write-Host "Client:     W=$clientW H=$clientH"
    Write-Host "Style:      $styleHex"
    Write-Host "  Visible bit:   $hasVisible"
    Write-Host "  Minimize bit:  $hasMin"
    Write-Host "  Maximize bit:  $hasMax"
    Write-Host "ExStyle:    $exStyleHex"
    Write-Host "  Layered:       $isLayered"
    Write-Host "  ToolWindow:    $isToolWin"
    Write-Host "  Transparent:   $isTransparent"
    Write-Host "  NoActivate:    $isNoActivate"
    Write-Host "IsVisible:  $isVisible"
    Write-Host "IsIconic:   $isIconic"
    Write-Host "IsZoomed:   $isZoomed"

    if ($isLayered) {
        $crKey = [uint32]0
        $alpha = [byte]0
        $flags = [uint32]0
        $ok = [D]::GetLayeredWindowAttributes($h, [ref]$crKey, [ref]$alpha, [ref]$flags)
        if ($ok) {
            Write-Host "Layered:    alpha=$alpha/255  colorKey=$crKey  flags=$flags"
        } else {
            Write-Host "Layered:    YES (per-pixel alpha - UpdateLayeredWindow used)"
        }
    }
}

Write-Host ""
Write-Host "=== MONITORS ==="
Add-Type -AssemblyName System.Windows.Forms
$primary = [System.Windows.Forms.Screen]::PrimaryScreen
Write-Host "Primary: $($primary.Bounds)"
$allScreens = [System.Windows.Forms.Screen]::AllScreens
Write-Host "Total screens: $($allScreens.Count)"
foreach ($s in $allScreens) {
    Write-Host "  $($s.DeviceName): $($s.Bounds)"
}
