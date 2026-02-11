
[xml]$xml = Get-Content -Path "c:\Users\Rudy\Music\integration\mainwindow.ui"
$ns = @{ui="http://qt-project.org/ui/4.0"}

$page = $xml.ui.widget.widget | Where-Object { $_.name -eq "pageCmdDashboard" }

if ($page) {
    $layout = $page.layout
    if ($layout) {
        Write-Host "Layout name: $($layout.name)"
        $items = $layout.item
        Write-Host "Item count: $($items.Count)"
        
        if ($items.Count -gt 0) {
            foreach ($item in $items) {
                # item can contain widget, layout, spacer
                if ($item.widget) { Write-Host "Item: Widget name=$($item.widget.name)" }
                elseif ($item.layout) { Write-Host "Item: Layout name=$($item.layout.name)" }
                elseif ($item.spacer) { Write-Host "Item: Spacer name=$($item.spacer.name)" }
                else { Write-Host "Item: Unknown type" }
            }
        } elseif ($items) {
             # single item case
             $item = $items
             if ($item.widget) { Write-Host "Item: Widget name=$($item.widget.name)" }
             elseif ($item.layout) { Write-Host "Item: Layout name=$($item.layout.name)" }
             elseif ($item.spacer) { Write-Host "Item: Spacer name=$($item.spacer.name)" }
        }
    } else {
        Write-Host "No layout found inside pageCmdDashboard"
    }
} else {
    Write-Host "Page pageCmdDashboard not found"
}
