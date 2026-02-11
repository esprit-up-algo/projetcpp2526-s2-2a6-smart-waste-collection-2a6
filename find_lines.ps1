
$path = "c:\Users\Rudy\Music\integration\mainwindow.ui"
$lines = Get-Content $path
for ($i = 0; $i -lt $lines.Count; $i++) {
    if ($lines[$i] -match "Modifier Une Commande") {
        Write-Host "Found 'Modifier Une Commande' on line $($i+1)"
    }
    if ($lines[$i] -match "name=`"pageCmdModifier`"") {
        Write-Host "Found pageCmdModifier on line $($i+1)"
    }
    if ($lines[$i] -match "name=`"pageCmdDashboard`"") {
        Write-Host "Found pageCmdDashboard on line $($i+1)"
    }
}
