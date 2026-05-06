# One-shot repair: finds the Meta AI Chrome PWA window and undoes the
# transparency left behind by a previous invisible-automation version of
# meta_video_bot.js. Run once and Meta AI will be visible again.
#
#   powershell -ExecutionPolicy Bypass -File fix_meta_visibility.ps1

Add-Type @"
using System;
using System.Text;
using System.Runtime.InteropServices;
using System.Collections.Generic;
public class F {
    public delegate bool EnumWindowsProc(IntPtr hWnd, IntPtr lParam);
    [DllImport("user32.dll")] public static extern bool EnumWindows(EnumWindowsProc lpEnumFunc, IntPtr lParam);
    [DllImport("user32.dll", CharSet=CharSet.Auto)] public static extern int GetWindowText(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
    [DllImport("user32.dll")] public static extern int GetWindowTextLength(IntPtr hWnd);
    [DllImport("user32.dll")] public static extern int GetClassName(IntPtr hWnd, StringBuilder lpClassName, int nMaxCount);
    [DllImport("user32.dll")] public static extern int GetWindowLong(IntPtr hWnd, int nIndex);
    [DllImport("user32.dll")] public static extern int SetWindowLong(IntPtr hWnd, int nIndex, int dwNewLong);
    [DllImport("user32.dll")] public static extern bool SetLayeredWindowAttributes(IntPtr hWnd, uint crKey, byte bAlpha, uint dwFlags);
    [DllImport("user32.dll")] public static extern bool RedrawWindow(IntPtr hWnd, IntPtr lprcUpdate, IntPtr hrgnUpdate, uint flags);
    [DllImport("user32.dll")] public static extern bool SetWindowPos(IntPtr hWnd, IntPtr hWndInsertAfter, int X, int Y, int cx, int cy, uint uFlags);
    [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr hWnd);
    [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr hWnd, int nCmdShow);

    public static List<IntPtr> FindMetaAI() {
        var results = new List<IntPtr>();
        EnumWindows((hWnd, lParam) => {
            int len = GetWindowTextLength(hWnd);
            if (len == 0) return true;
            var t = new StringBuilder(len + 4);
            GetWindowText(hWnd, t, t.Capacity);
            var c = new StringBuilder(256);
            GetClassName(hWnd, c, 256);
            // Only the Chrome PWA window, not the Qt dialog
            if (t.ToString().IndexOf("Meta AI", StringComparison.OrdinalIgnoreCase) >= 0
                && c.ToString().StartsWith("Chrome_WidgetWin", StringComparison.OrdinalIgnoreCase)) {
                results.Add(hWnd);
            }
            return true;
        }, IntPtr.Zero);
        return results;
    }
}
"@

$GWL_EXSTYLE    = -20
$WS_EX_LAYERED  = 0x00080000
$LWA_ALPHA      = 0x00000002
$SWP_FRAMECHANGED = 0x0020
$SWP_NOMOVE     = 0x0002
$SWP_NOSIZE     = 0x0001
$SWP_NOZORDER   = 0x0004
$SWP_SHOWWINDOW = 0x0040
$RDW_FLAGS      = 0x0485  # INVALIDATE | UPDATENOW | ALLCHILDREN | ERASE

$windows = [F]::FindMetaAI()
Write-Host "Meta AI windows found: $($windows.Count)"

if ($windows.Count -eq 0) {
    Write-Host "No Meta AI Chrome PWA window is open. Launch it first, then re-run this."
    exit 0
}

foreach ($h in $windows) {
    $t = New-Object Text.StringBuilder 256
    [F]::GetWindowText($h, $t, 256) | Out-Null
    Write-Host ""
    Write-Host "Fixing HWND=$h  Title='$($t.ToString())'"

    $ex = [F]::GetWindowLong($h, $GWL_EXSTYLE)
    $exHex = "0x" + $ex.ToString("X8")
    Write-Host "  Before: ExStyle=$exHex"

    # Step 1: set alpha fully opaque WHILE the layered flag is still on
    $r1 = [F]::SetLayeredWindowAttributes($h, 0, 255, $LWA_ALPHA)
    Write-Host "  SetLayeredWindowAttributes(alpha=255): $r1"

    # Step 2: strip the WS_EX_LAYERED flag so the window is a regular opaque window
    $newEx = $ex -band (-bnot $WS_EX_LAYERED)
    [F]::SetWindowLong($h, $GWL_EXSTYLE, $newEx) | Out-Null

    # Step 3: tell the window its frame changed so it recomputes its non-client area
    $flags = $SWP_NOMOVE -bor $SWP_NOSIZE -bor $SWP_NOZORDER -bor $SWP_FRAMECHANGED -bor $SWP_SHOWWINDOW
    [F]::SetWindowPos($h, [IntPtr]::Zero, 0, 0, 0, 0, $flags) | Out-Null

    # Step 4: make sure it's shown normally
    [F]::ShowWindow($h, 1) | Out-Null    # SW_SHOWNORMAL

    # Step 5: force repaint
    [F]::RedrawWindow($h, [IntPtr]::Zero, [IntPtr]::Zero, $RDW_FLAGS) | Out-Null

    $ex2 = [F]::GetWindowLong($h, $GWL_EXSTYLE)
    $ex2Hex = "0x" + $ex2.ToString("X8")
    $stillLayered = (($ex2 -band $WS_EX_LAYERED) -ne 0)
    Write-Host "  After:  ExStyle=$ex2Hex  StillLayered=$stillLayered"

    if ($stillLayered) {
        Write-Host "  WARNING: Window is still flagged as layered. Chrome may be re-applying it."
        Write-Host "  Try killing all chrome.exe processes and re-launching Meta AI."
    } else {
        Write-Host "  OK: window should now be fully visible."
    }
}
