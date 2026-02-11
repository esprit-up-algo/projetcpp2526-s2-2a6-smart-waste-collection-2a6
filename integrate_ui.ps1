
$sourcePath = "c:\Users\Rudy\Downloads\projettcpp\projettcpp\mainwindow.ui"
$destPath = "c:\Users\Rudy\Music\integration\mainwindow.ui"
$backupPath = "$destPath.backup_integration"

# Backup
if (-not (Test-Path $backupPath)) {
    Copy-Item $destPath $backupPath
    Write-Host "Backed up to $backupPath"
}

# Load XMLs
$source = [xml](Get-Content $sourcePath -Encoding UTF8)
$dest = [xml](Get-Content $destPath -Encoding UTF8)

# 1. Find sidebar and add button
# Namespace manager might be needed if there are xmlns, but usually not for Qt Designer output
$ns = New-Object System.Xml.XmlNamespaceManager($dest.NameTable)
$ns.AddNamespace("ui", "http://qt-project.org/ui") # Just in case

$sidebar = $dest.SelectSingleNode("//widget[@name='sidebar']")
if ($null -eq $sidebar) {
    Write-Error "Could not find sidebar"
    exit
}

$sidebarLayout = $sidebar.SelectSingleNode("layout")
if ($null -eq $sidebarLayout) {
    Write-Error "Sidebar has no layout"
    exit
}

# Check for existing button
if ($sidebarLayout.SelectSingleNode(".//widget[@name='btnCommandes']") -ne $null) {
    Write-Host "btnCommandes already exists"
} else {
    # Create Item -> Widget -> Property -> String
    $newItem = $dest.CreateElement("item")
    $newBtn = $dest.CreateElement("widget")
    $newBtn.SetAttribute("class", "QPushButton")
    $newBtn.SetAttribute("name", "btnCommandes")
    
    $newProp = $dest.CreateElement("property")
    $newProp.SetAttribute("name", "text")
    
    $newString = $dest.CreateElement("string")
    $newString.InnerText = "Commandes"
    
    $newProp.AppendChild($newString)
    $newBtn.AppendChild($newProp)
    $newItem.AppendChild($newBtn)
    
    # Insert before spacer (last item usually)
    $items = $sidebarLayout.SelectNodes("item")
    $lastItem = $items.Item($items.Count - 1)
    if ($lastItem.SelectSingleNode("spacer") -ne $null) {
        $sidebarLayout.InsertBefore($newItem, $lastItem)
    } else {
        $sidebarLayout.AppendChild($newItem)
    }
    Write-Host "Added btnCommandes"
}

# 2. Extract and Prepare Pages
$targets = @("dashboard", "ajout", "modifier")
$map = @{
    "dashboard" = "pageCmdDashboard"
    "ajout" = "pageCmdAjout"
    "modifier" = "pageCmdModifier"
}

$destStack = $dest.SelectSingleNode("//widget[@name='stackedWidget']")
if ($null -eq $destStack) {
    Write-Error "Could not find stackedWidget"
    exit
}

foreach ($target in $targets) {
    $node = $source.SelectSingleNode("//widget[@name='$target']")
    if ($node) {
        # Deep clone
        $importedNode = $dest.ImportNode($node, $true)
        $newName = $map[$target]
        $importedNode.SetAttribute("name", $newName)
        
        # Remove sidebar from page
        # Logic: Find layout -> first item -> check if it looks like sidebar
        $layout = $importedNode.SelectSingleNode("layout")
        if ($layout) {
            $firstItem = $layout.SelectSingleNode("item[1]") # XPath is 1-based
            if ($firstItem) {
                $hasSidebarButtons = $false
                foreach ($widget in $firstItem.SelectNodes(".//widget")) {
                    $wName = $widget.GetAttribute("name")
                    if ($wName -like "*btnhome*" -or $wName -like "*btnstock*") {
                        $hasSidebarButtons = $true
                        break
                    }
                }
                
                if ($hasSidebarButtons) {
                    $layout.RemoveChild($firstItem)
                    Write-Host "Removed sidebar from $newName"
                }
            }
        }
        
        # Check existence
        if ($destStack.SelectSingleNode("widget[@name='$newName']") -eq $null) {
            $destStack.AppendChild($importedNode)
            Write-Host "Added $newName"
        } else {
            Write-Host "$newName already exists"
        }
    }
}

# Save
$dest.Save($destPath)
Write-Host "Successfully processed mainwindow.ui"
