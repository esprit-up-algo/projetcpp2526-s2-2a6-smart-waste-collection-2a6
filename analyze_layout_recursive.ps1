
[xml]$xml = Get-Content -Path "c:\Users\Rudy\Music\integration\mainwindow.ui"

function Find-Widget ($node, $name) {
    if ($node.name -eq $name) { return $node }
    foreach ($child in $node.ChildNodes) {
        $found = Find-Widget $child $name
        if ($found) { return $found }
    }
    return $null
}

$page = Find-Widget $xml.ui.widget $name="pageCmdDashboard"

if ($page) {
    # Find the layout inside the page
    $layout = $page.layout
    if ($layout) {
        Write-Host "Layout found: $($layout.name) (Class: $($layout.class))"
        $items = $layout.item
        if ($items -is [System.Array]) {
             Write-Host "Item count: $($items.Count)"
             foreach ($item in $items) {
                 if ($item.widget) { Write-Host " - Widget: $($item.widget.name)" }
                 elseif ($item.layout) { Write-Host " - Layout: $($item.layout.name)" }
                 elseif ($item.spacer) { Write-Host " - Spacer" }
             }
        } elseif ($items) {
             Write-Host "Item count: 1"
             if ($items.widget) { Write-Host " - Widget: $($items.widget.name)" }
             elseif ($items.layout) { Write-Host " - Layout: $($items.layout.name)" }
             elseif ($items.spacer) { Write-Host " - Spacer" }
        } else {
             Write-Host "Item count: 0"
        }
    } else {
        Write-Host "No layout found inside pageCmdDashboard"
    }
} else {
    Write-Host "pageCmdDashboard NOT FOUND"
}
