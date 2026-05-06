'use strict';

const { spawn, execSync } = require('child_process');
const path = require('path');
const fs = require('fs');

function log(msg) {
  const time = new Date().toLocaleTimeString('fr-FR', { hour12: false });
  console.log(`[${time}] ${msg}`);
}

function sleep(ms) { return new Promise(r => setTimeout(r, ms)); }

function runPS(scriptContent) {
  const tmpFile = path.join(__dirname, '_tmp_meta.ps1');
  try {
    fs.writeFileSync(tmpFile, scriptContent, 'utf-8');
    return execSync(
      `powershell -NoProfile -ExecutionPolicy Bypass -File "${tmpFile}"`,
      { encoding: 'utf-8', timeout: 60000, windowsHide: true }
    ).trim();
  } catch (e) {
    log(`PS erreur: ${e.message}`);
    return 'ERROR';
  } finally {
    try { fs.unlinkSync(tmpFile); } catch {}
  }
}

function parseArgs() {
  const args = {};
  const argv = process.argv.slice(2);
  for (let i = 0; i < argv.length; i += 2) {
    const key = argv[i].replace('--', '');
    const val = argv[i + 1] || '';
    args[key] = val;
  }
  return args;
}

function buildPrompt(args) {
    const name = args.product_name || 'Smart Waste Bin';
    const ref = args.reference || '';
    const capacity = args.capacity || '';
    const battery = args.battery || '';
    const features = args.features || '';
    const featuresList = features
        .split(',')
        .map(f => f.trim())
        .filter(Boolean);
    const featuresText = featuresList.length ? featuresList.join(', ') : 'GPS, capteur UV';
    const capText = capacity ? `${capacity}L` : '';
    const batText = battery ? `${battery}mAh` : '';
    const refText = ref ? ` (ref: ${ref})` : '';
    const specs = [
        capText ? `Capacity: ${capText}.` : '',
        batText ? `Battery: ${batText}.` : ''
    ].filter(Boolean).join(' ');

    return [
        '4-second cinematic 3D product animation from the image.',
        `Futuristic smart waste bin "${name}"${refText}.`,
        specs,
        `Features: ${featuresText}.`,
        'Exploded-view effect: key components separate outward smoothly, float, then reassemble cleanly.',
        'Focus components: GPS module, UV sensor, LED ring, battery block.',
        'Timeline: 0-1s hero orbit, 1-3s exploded view with components revealed, 3-4s reassemble and end on centered hero.',
        'Style: premium Apple-like reveal, dark studio background, soft volumetric light, smooth motion, no jitter.',
        'Materials: matte + brushed metal, subtle LED glow.',
        'No text, no logos, no UI overlays, no watermark.'
    ].filter(Boolean).join(' ');
}

function findChromeExe() {
    const candidates = [
        process.env.CHROME_PATH,
        process.env.LOCALAPPDATA ? path.join(process.env.LOCALAPPDATA, 'Google', 'Chrome', 'Application', 'chrome.exe') : '',
        'C:\\\\Program Files\\\\Google\\\\Chrome\\\\Application\\\\chrome.exe',
        'C:\\\\Program Files (x86)\\\\Google\\\\Chrome\\\\Application\\\\chrome.exe'
    ].filter(Boolean);
    return candidates.find(p => fs.existsSync(p)) || '';
}

function resolveProfileDir(userDataDir, profileName) {
    if (!profileName) return 'Default';
    if (profileName === 'Default' || /^Profile\\s+\\d+$/i.test(profileName)) return profileName;
    try {
        const localStatePath = path.join(userDataDir, 'Local State');
        const raw = fs.readFileSync(localStatePath, 'utf8');
        const data = JSON.parse(raw);
        const info = data && data.profile && data.profile.info_cache ? data.profile.info_cache : {};
        for (const [dir, meta] of Object.entries(info)) {
            if ((meta && meta.name || '').toLowerCase() === profileName.toLowerCase()) {
                return dir;
            }
        }
    } catch (e) {}
    return profileName;
}

function clickAt(wX, wY, wW, wH, pctX, pctY, label) {
    const x = wX + Math.floor(wW * pctX);
    const y = wY + Math.floor(wH * pctY);
    log(`  → Clic "${label}" à (${x}, ${y})`);
    runPS(`
Add-Type @"
using System;
using System.Runtime.InteropServices;
public class C {
    [DllImport("user32.dll")] public static extern bool SetCursorPos(int X, int Y);
    [DllImport("user32.dll")] public static extern void mouse_event(int f, int dx, int dy, int c, int e);
}
"@
[C]::SetCursorPos(${x}, ${y})
Start-Sleep -Milliseconds 150
[C]::mouse_event(0x0002, 0, 0, 0, 0)
[C]::mouse_event(0x0004, 0, 0, 0, 0)
`);
}

function findMetaWindow() {
    const out = runPS(`
Add-Type @"
using System;
using System.Text;
using System.Runtime.InteropServices;
using System.Collections.Generic;

public class U {
    public delegate bool EnumWindowsProc(IntPtr hWnd, IntPtr lParam);
    [DllImport("user32.dll")] public static extern bool EnumWindows(EnumWindowsProc lpEnumFunc, IntPtr lParam);
    [DllImport("user32.dll", CharSet=CharSet.Auto)] public static extern int GetWindowText(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
    [DllImport("user32.dll")] public static extern int GetWindowTextLength(IntPtr hWnd);
    [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr hWnd);
    [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
    [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr h, int c);
    [DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
    [DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
    [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);

    public static List<IntPtr> FindChromeBrowserWindows(string pattern) {
        var results = new List<IntPtr>();
        EnumWindows((hWnd, lParam) => {
            if (!IsWindowVisible(hWnd)) return true;
            int len = GetWindowTextLength(hWnd);
            if (len == 0) return true;
            var sb = new StringBuilder(len + 4);
            GetWindowText(hWnd, sb, sb.Capacity);
            string title = sb.ToString();
            // Match "Meta AI" + "Google Chrome" to ensure it's the browser, not the PWA
            if (title.IndexOf(pattern, StringComparison.OrdinalIgnoreCase) >= 0 &&
                title.IndexOf("Google Chrome", StringComparison.OrdinalIgnoreCase) >= 0) {
                results.Add(hWnd);
            }
            return true;
        }, IntPtr.Zero);
        return results;
    }
}
public struct RECT { public int Left, Top, Right, Bottom; }
public struct POINT { public int X; public int Y; }
"@

$hwnd = [IntPtr]::Zero
$list = [U]::FindChromeBrowserWindows("Meta AI")
if ($list.Count -eq 0) {
    $list = [U]::FindChromeBrowserWindows("meta.ai")
}
foreach ($h in $list) {
    $r = New-Object RECT
    [U]::GetClientRect($h, [ref]$r) | Out-Null
    $w = $r.Right - $r.Left
    $hh = $r.Bottom - $r.Top
    if ($w -gt 400 -and $hh -gt 300) {
        $hwnd = $h
        break
    }
}
if ($hwnd -eq [IntPtr]::Zero) { Write-Host "NOT_FOUND"; exit }

[U]::ShowWindow($hwnd, 9) | Out-Null
Start-Sleep -Milliseconds 150
[U]::SetForegroundWindow($hwnd) | Out-Null
Start-Sleep -Milliseconds 150

$r = New-Object RECT
[U]::GetClientRect($hwnd, [ref]$r) | Out-Null
$pt = New-Object POINT
$pt.X = $r.Left
$pt.Y = $r.Top
[U]::ClientToScreen($hwnd, [ref]$pt) | Out-Null
$w = $r.Right - $r.Left
$h = $r.Bottom - $r.Top
Write-Host "OK|$($pt.X)|$($pt.Y)|$w|$h|$([int64]$hwnd)"
`);
    if (!out || out.includes('NOT_FOUND') || out === 'ERROR') return null;
    const parts = out.split('|');
    return {
        x: parseInt(parts[1], 10),
        y: parseInt(parts[2], 10),
        w: parseInt(parts[3], 10),
        h: parseInt(parts[4], 10),
        hwnd: parts[5]
    };
}

function reassertFocus(hwnd) {
    if (!hwnd) return;
    runPS(`
Add-Type @"
using System;
using System.Runtime.InteropServices;
public class R {
    [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
}
"@
[R]::SetForegroundWindow([IntPtr]${hwnd}) | Out-Null
`);
}

async function main() {
    const args = parseArgs();
    const imagePath = args.image_path ? path.resolve(args.image_path) : null;
    const prompt = buildPrompt(args) || '';

    log(`Prompt: ${prompt.substring(0, 60)}...`);
    if (imagePath) log(`Image: ${imagePath}`);
    log('');
    log('⚠️  NE TOUCHEZ PAS la souris/clavier !');

    const metaUrl = process.env.META_URL || 'https://www.meta.ai';
    const chromeUserDataDir = process.env.META_CHROME_USER_DATA_DIR ||
        (process.env.LOCALAPPDATA ? path.join(process.env.LOCALAPPDATA, 'Google', 'Chrome', 'User Data') : '');
    const chromeProfileName = process.env.META_CHROME_PROFILE || 'rayeng';

    const chromeExe = findChromeExe();
    if (!chromeExe) {
        log('ERREUR: chrome.exe introuvable.');
        process.exit(1);
    }

    const profileDir = resolveProfileDir(chromeUserDataDir, chromeProfileName);
    log(`1. Ouverture de Meta AI dans Chrome (profil: ${profileDir})...`);
    
    // Launch Chrome using child_process.spawn just like luma_video_bot.js
    spawn(chromeExe, [
        `--user-data-dir=${chromeUserDataDir}`,
        `--profile-directory=${profileDir}`,
        '--new-window',
        '--disable-features=WebAppLinkCapturing',
        metaUrl
    ], { detached: true, stdio: 'ignore' }).unref();
    
    await sleep(6500); // Give it plenty of time to launch and load

    log('2. Focus fenêtre Chrome...');
    
    let win = null;
    for (let i = 0; i < 15; i++) {
        win = findMetaWindow();
        if (win) break;
        await sleep(1000);
    }

    if (!win) {
        log('ERREUR: Fenêtre Chrome avec Meta AI introuvable.');
        process.exit(1);
    }

    log(`   Fenêtre: ${win.w}x${win.h} à (${win.x},${win.y})`);
    await sleep(1000);

    // ─── STEP 3: Click "Créer une vidéo" ───
    log('3. Clic "Créer une vidéo"...');
    reassertFocus(win.hwnd);
    clickAt(win.x, win.y, win.w, win.h, 0.82, 0.50, 'Créer une vidéo');
    await sleep(2000);

    function clickCandidates(label, candidates) {
        for (const [cx, cy] of candidates) {
            reassertFocus(win.hwnd);
            clickAt(win.x, win.y, win.w, win.h, cx, cy, label);
        }
    }

    // ─── STEP 4: Image upload via UI ───
    if (imagePath && fs.existsSync(imagePath)) {
        log('4. Clic sur le bouton "+"...');
        clickCandidates('+ Button', [
            [0.37, 0.41],
            [0.36, 0.43],
            [0.39, 0.40],
            [0.35, 0.41]
        ]);
        await sleep(1200);

        log('5. Clic "Ajouter du contenu multimédia"...');
        clickCandidates('Menu Item', [
            [0.50, 0.46],
            [0.52, 0.47],
            [0.48, 0.45],
            [0.50, 0.50]
        ]);
        await sleep(2200);

        log('6. Sélection de l\'image dans le dialogue Windows...');
        const pathFile = path.join(__dirname, '_tmp_path.txt');
        fs.writeFileSync(pathFile, imagePath, 'utf-8');

        runPS(`
Add-Type -AssemblyName System.Windows.Forms
Start-Sleep -Milliseconds 1000
$imgPath = Get-Content -Path '${pathFile.replace(/'/g, "''")}' -Raw -Encoding UTF8
[System.Windows.Forms.Clipboard]::SetText($imgPath.Trim())
Start-Sleep -Milliseconds 300
[System.Windows.Forms.SendKeys]::SendWait("^v")
Start-Sleep -Milliseconds 500
[System.Windows.Forms.SendKeys]::SendWait("{ENTER}")
`);
        try { fs.unlinkSync(pathFile); } catch {}
        log('   Image sélectionnée !');
        await sleep(4000);
    } else {
        log('4. Pas d\'image — prompt texte uniquement.');
    }

    // ─── STEP 5: Saisie du prompt ───
    log('7. Clic sur la zone de saisie...');
    reassertFocus(win.hwnd);
    clickAt(win.x, win.y, win.w, win.h, 0.55, 0.37, 'Zone de saisie');
    await sleep(500);

    log('8. Collage du prompt...');
    reassertFocus(win.hwnd);
    const promptFile = path.join(__dirname, '_tmp_prompt.txt');
    fs.writeFileSync(promptFile, prompt, 'utf-8');
    runPS(`
Add-Type -AssemblyName System.Windows.Forms
$text = Get-Content -Path '${promptFile.replace(/\\/g, '\\\\')}' -Raw -Encoding UTF8
[System.Windows.Forms.Clipboard]::SetText($text)
Start-Sleep -Milliseconds 200
[System.Windows.Forms.SendKeys]::SendWait("^v")
`);
    try { fs.unlinkSync(promptFile); } catch {}
    await sleep(1000);

    log('9. Envoi !');
    reassertFocus(win.hwnd);
    runPS(`
Add-Type -AssemblyName System.Windows.Forms
[System.Windows.Forms.SendKeys]::SendWait("{ENTER}")
`);

    await sleep(800);

    log('');
    log('════════════════════════════════════════════');
    log('SUCCESS: Prompt + image envoyés à Meta AI (Chrome) !');
    log('La vidéo est en cours de génération.');
    log('════════════════════════════════════════════');
}

main().catch(err => {
    log(`Erreur: ${err.message}`);
    process.exit(1);
});
