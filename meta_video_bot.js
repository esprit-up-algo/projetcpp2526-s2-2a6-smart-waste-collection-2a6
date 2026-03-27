'use strict';

const { execSync } = require('child_process');
const path = require('path');
const fs = require('fs');

function log(msg) {
  const time = new Date().toLocaleTimeString('fr-FR', { hour12: false });
  console.log(`[${time}] ${msg}`);
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
  const featuresText = featuresList.length ? featuresList.join(', ') : 'GPS, UV sensor';
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

function runPS(scriptContent) {
  const tmpFile = path.join(__dirname, '_tmp_bot.ps1');
  try {
    fs.writeFileSync(tmpFile, scriptContent, 'utf-8');
    return execSync(
      `powershell -NoProfile -ExecutionPolicy Bypass -File "${tmpFile}"`,
      { encoding: 'utf-8', timeout: 60000 }
    ).trim();
  } catch (e) {
    log(`PS erreur: ${e.message}`);
    return 'ERROR';
  } finally {
    try { fs.unlinkSync(tmpFile); } catch {}
  }
}

function sleep(ms) { return new Promise(r => setTimeout(r, ms)); }

function clickAt(hwnd, clientW, clientH, pctX, pctY, label) {
  const x = Math.floor(clientW * pctX);
  const y = Math.floor(clientH * pctY);
  log(`  -> Click "${label}" at (${x}, ${y})`);
  runPS(`
Add-Type @"
using System;
using System.Runtime.InteropServices;
public class C {
  [DllImport("user32.dll")] public static extern bool PostMessage(IntPtr hWnd, int Msg, int wParam, int lParam);
}
"@
$hwnd = [IntPtr]::new(${hwnd})
$WM_LBUTTONDOWN = 0x0201
$WM_LBUTTONUP = 0x0202
$MK_LBUTTON = 0x0001
$lx = ${x}
$ly = ${y}
$lp = ($ly -shl 16) -bor ($lx -band 0xFFFF)
[C]::PostMessage($hwnd, $WM_LBUTTONDOWN, $MK_LBUTTON, $lp) | Out-Null
Start-Sleep -Milliseconds 80
[C]::PostMessage($hwnd, $WM_LBUTTONUP, 0, $lp) | Out-Null
`);
}

async function main() {
  const args = parseArgs();
  const imagePath = args.image_path ? path.resolve(args.image_path) : null;
  const prompt = buildPrompt(args);

  log(`Prompt: ${prompt.substring(0, 60)}...`);
  if (imagePath) log(`Image: ${imagePath}`);
  log('');

  // STEP 1: Open Meta AI app
  const shortcut = path.join(process.env.APPDATA,
    'Microsoft', 'Windows', 'Start Menu', 'Programs', 'Chrome Apps', 'Meta AI.lnk');
  if (!fs.existsSync(shortcut)) {
    log('ERREUR: Raccourci Meta AI introuvable.');
    process.exit(1);
  }

  log('1. Ouverture de Meta AI...');
  runPS(`Start-Process -FilePath '${shortcut}'`);
  await sleep(7000);

  // STEP 2: Focus window + get client size
  log('2. Focus fenetre...');
  const focusResult = runPS(`
Add-Type @"
using System;
using System.Runtime.InteropServices;
public class U {
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
  [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr h, int c);
  [DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
  [DllImport("user32.dll")] public static extern int GetWindowLong(IntPtr h, int n);
  [DllImport("user32.dll")] public static extern int SetWindowLong(IntPtr h, int n, int v);
  [DllImport("user32.dll")] public static extern bool SetLayeredWindowAttributes(IntPtr h, uint c, byte a, uint f);
}
public struct RECT { public int Left, Top, Right, Bottom; }
"@
$hwnd = $null
foreach ($p in Get-Process | Where-Object { $_.MainWindowHandle -ne 0 }) {
  if ($p.MainWindowTitle -match "Meta") { $hwnd = $p.MainWindowHandle; break }
}
if ($hwnd -eq $null) { Write-Host "NOT_FOUND"; exit }
[U]::ShowWindow($hwnd, 9)
Start-Sleep -Milliseconds 200
[U]::SetForegroundWindow($hwnd) | Out-Null
Start-Sleep -Milliseconds 200
# Make window transparent unless META_BOT_VISIBLE=1
if ($env:META_BOT_VISIBLE -ne "1") {
  $GWL_EXSTYLE = -20
  $WS_EX_LAYERED = 0x80000
  $LWA_ALPHA = 0x2
  $style = [U]::GetWindowLong($hwnd, $GWL_EXSTYLE)
  [U]::SetWindowLong($hwnd, $GWL_EXSTYLE, $style -bor $WS_EX_LAYERED) | Out-Null
  [U]::SetLayeredWindowAttributes($hwnd, 0, 1, $LWA_ALPHA) | Out-Null
}
$r = New-Object RECT
[U]::GetClientRect($hwnd, [ref]$r)
$w = $r.Right - $r.Left
$h = $r.Bottom - $r.Top
Write-Host "OK|$($hwnd)|$($w)|$($h)"
`);

  if (focusResult.includes('NOT_FOUND') || focusResult === 'ERROR') {
    log('ERREUR: Fenetre Meta AI non trouvee.');
    process.exit(1);
  }

  const parts = focusResult.split('|');
  const hwnd = parts[1];
  const clientW = parseInt(parts[2], 10);
  const clientH = parseInt(parts[3], 10);
  log(`   Client: ${clientW}x${clientH} hwnd=${hwnd}`);
  await sleep(500);

  // STEP 3: Click "Creer une video"
  log('3. Clic "Creer une video"...');
  clickAt(hwnd, clientW, clientH, 0.82, 0.50, 'Creer une video');
  await sleep(2000);

  // STEP 4: Upload image (if any)
  if (imagePath && fs.existsSync(imagePath)) {
    log('4. Clic sur le bouton "+"...');
    clickAt(hwnd, clientW, clientH, 0.37, 0.41, '+ Button');
    await sleep(1000);

    log('5. Clic "Ajouter du contenu multimedia"...');
    clickAt(hwnd, clientW, clientH, 0.50, 0.46, 'Menu Item');
    await sleep(2000);

    log('6. Selection de l\'image dans le dialogue Windows...');
    const pathFile = path.join(__dirname, '_tmp_path.txt');
    fs.writeFileSync(pathFile, imagePath, 'utf-8');

    runPS(`
Add-Type -AssemblyName System.Windows.Forms
Start-Sleep -Milliseconds 800
$imgPath = Get-Content -Path '${pathFile.replace(/'/g, "''")}' -Raw -Encoding UTF8
[System.Windows.Forms.Clipboard]::SetText($imgPath.Trim())
Start-Sleep -Milliseconds 200
[System.Windows.Forms.SendKeys]::SendWait("^v")
Start-Sleep -Milliseconds 300
[System.Windows.Forms.SendKeys]::SendWait("{ENTER}")
`);
    try { fs.unlinkSync(pathFile); } catch {}
    log('   Image selectionnee !');
    await sleep(4000);
  } else {
    log('4. Pas d\'image ? prompt texte uniquement.');
  }

  // STEP 5: Paste prompt
  log('7. Clic sur la zone de saisie...');
  clickAt(hwnd, clientW, clientH, 0.55, 0.37, 'Prompt area');
  await sleep(500);

  log('8. Collage du prompt...');
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

  // STEP 6: Send
  log('9. Envoi !');
  runPS(`
Add-Type -AssemblyName System.Windows.Forms
[System.Windows.Forms.SendKeys]::SendWait("{ENTER}")
`);

  log('');
  log('Generation lancee.');
  log('ATTENTION: Meta AI peut etre lent.');
}

main();
