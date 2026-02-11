
import xml.etree.ElementTree as ET

tree = ET.parse(r"c:\Users\Rudy\Music\integration\mainwindow.ui")
root = tree.getroot()

# efficient search?
# find pageCmdDashboard
page = None
for widget in root.iter("widget"):
    if widget.get("name") == "pageCmdDashboard":
        page = widget
        break

if page:
    layout = page.find("layout")
    if layout:
        print(f"Layout name: {layout.get('name')}")
        items = list(layout.findall("item"))
        print(f"Item count: {len(items)}")
        for i, item in enumerate(items):
            # what's inside?
            child = item.find("*")
            if child is not None:
                tag = child.tag
                name = child.get("name")
                print(f"Item {i}: {tag} name={name}")
            else:
                print(f"Item {i}: Empty item?")
else:
    print("Page not found")
