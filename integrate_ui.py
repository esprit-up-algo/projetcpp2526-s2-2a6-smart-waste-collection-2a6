import xml.etree.ElementTree as ET
import os
import copy

def integrate_ui():
    source_path = r"c:\Users\Rudy\Downloads\projettcpp\projettcpp\mainwindow.ui"
    dest_path = r"c:\Users\Rudy\Music\integration\mainwindow.ui"
    backup_path = dest_path + ".backup_integration"

    # Backup
    if not os.path.exists(backup_path):
        with open(dest_path, 'r', encoding='utf-8') as f:
            content = f.read()
        with open(backup_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Backed up to {backup_path}")

    # Parse XMLs
    ET.register_namespace('', "http://qt-project.org/ui") # Try to preserve default namespace if any, though Qt usually doesnt use one explicitly in root
    # Qt designer files usually don't have a default namespace URI in the tag
    
    source_tree = ET.parse(source_path)
    dest_tree = ET.parse(dest_path)
    
    source_root = source_tree.getroot()
    dest_root = dest_tree.getroot()

    # 1. Find the sidebar in destination to add the button
    # Look for widget name="sidebar" -> layout -> add button before spacer
    sidebar = None
    for widget in dest_root.findall(".//widget"):
        if widget.get("name") == "sidebar":
            sidebar = widget
            break
            
    if sidebar is None:
        print("Error: Could not find sidebar in destination")
        return

    sidebar_layout = sidebar.find("layout")
    if sidebar_layout is None:
        print("Error: Sidebar has no layout")
        return

    # Check if btnCommandes already exists
    for widget in sidebar_layout.findall(".//widget"):
        if widget.get("name") == "btnCommandes":
            print("btnCommandes already exists")
            break
    else:
        # Create new button element
        # <item><widget class="QPushButton" name="btnCommandes"><property name="text"><string>Commandes</string></property></widget></item>
        item = ET.Element("item")
        btn = ET.Element("widget", {"class": "QPushButton", "name": "btnCommandes"})
        prop = ET.SubElement(btn, "property", {"name": "text"})
        string = ET.SubElement(prop, "string")
        string.text = "Commandes"
        item.append(btn)
        
        # Insert before the last item (which is usually the spacer)
        # Assuming the last item is the spacer "verticalSpacer"
        items = sidebar_layout.findall("item")
        insert_index = len(items)
        if len(items) > 0:
            last_item = items[-1]
            spacer = last_item.find("spacer")
            if spacer is not None:
                insert_index = len(items) - 1
        
        sidebar_layout.insert(insert_index, item)
        print("Added btnCommandes to sidebar")

    # 2. Extract pages from source
    # Need pages: "dashboard", "ajout", "modifier"
    # They are in QStackedWidget name="tabWidget"
    source_pages = {}
    targets = ["dashboard", "ajout", "modifier"]
    
    for widget in source_root.findall(".//widget"):
        if widget.get("name") in targets:
            source_pages[widget.get("name")] = copy.deepcopy(widget)
            
    if len(source_pages) != 3:
        print(f"Warning: Found only {len(source_pages)}/{len(targets)} pages: {list(source_pages.keys())}")
        
    # 3. Insert into destination stackedWidget
    # Destination stacked widget name="stackedWidget"
    dest_stack = None
    for widget in dest_root.findall(".//widget"):
        if widget.get("name") == "stackedWidget":
            dest_stack = widget
            break
            
    if dest_stack is None:
        print("Error: Could not find stackedWidget in destination")
        return
        
    # Rename and insert
    # Mapping old name -> new name
    name_map = {
        "dashboard": "pageCmdDashboard",
        "ajout": "pageCmdAjout",
        "modifier": "pageCmdModifier"
    }

    # Helper to remove sidebar
    def remove_sidebar(widget_element):
        # Assumes the first item in the main layout is the sidebar
        # Structure: widget -> layout -> item (sidebar)
        layout = widget_element.find("layout")
        if layout is None:
            return
            
        items = layout.findall("item")
        if len(items) > 1:
            # We assume the first item is the sidebar based on analysis
            # To be safe, checking if it contains buttons like "btnhome_*"
            first_item = items[0]
            is_sidebar = False
            for child in first_item.iter("widget"):
                name = child.get("name", "")
                if "btnhome" in name or "btnstock" in name:
                    is_sidebar = True
                    break
            
            if is_sidebar:
                layout.remove(first_item)
                print(f"Removed sidebar from {widget_element.get('name')}")
            else:
                print(f"Warning: First item in {widget_element.get('name')} does not look like a sidebar")

    for original_name, new_name in name_map.items():
        if original_name in source_pages:
            page = source_pages[original_name]
            page.set("name", new_name)
            
            # Remove sidebar logic
            remove_sidebar(page)
            
            # Check if already exists to avoid duplication
            exists = False
            for child in dest_stack:
                if child.get("name") == new_name:
                    exists = True
                    break
            
            if not exists:
                dest_stack.append(page)
                print(f"Added page {new_name}")
            else:
                print(f"Page {new_name} already exists, skipping")

    # Save
    tree = ET.ElementTree(dest_root)
    tree.write(dest_path, encoding="UTF-8", xml_declaration=True)
    print("Successfully updated mainwindow.ui")

if __name__ == "__main__":
    integrate_ui()
