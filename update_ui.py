import sys
import xml.etree.ElementTree as ET

# Attempt to use lxml if available for preserving formatting, otherwise standard ET
try:
    from lxml import etree
except ImportError:
    etree = ET

ui_file = r'c:\Users\Rudy\Desktop\integration\integration\mainwindow.ui'

def add_client_id_fields(file_path):
    parser = ET.XMLParser(encoding="utf-8")
    tree = ET.parse(file_path, parser=parser)
    root = tree.getroot()

    # Find the layouts
    gl_inputs_4 = root.find(".//layout[@name='gl_inputs_4']")
    gl_inputs_2 = root.find(".//layout[@name='gl_inputs_2']")

    def add_to_grid(grid, suffix):
        # Create Label
        lbl_item = ET.SubElement(grid, 'item')
        lbl_item.set('row', '2')
        lbl_item.set('column', '2')
        lbl = ET.SubElement(lbl_item, 'widget')
        lbl.set('class', 'QLabel')
        lbl.set('name', f'l_cid_{suffix}')
        prop = ET.SubElement(lbl, 'property')
        prop.set('name', 'text')
        val = ET.SubElement(prop, 'string')
        val.text = 'ID Client'

        # Create SpinBox
        sb_item = ET.SubElement(grid, 'item')
        sb_item.set('row', '2')
        sb_item.set('column', '3')
        sb = ET.SubElement(sb_item, 'widget')
        sb.set('class', 'QSpinBox')
        sb.set('name', f'sb_idClient_{suffix}')
        prop2 = ET.SubElement(sb, 'property')
        prop2.set('name', 'maximum')
        val2 = ET.SubElement(prop2, 'number')
        val2.text = '999999'

    if gl_inputs_4 is not None:
        add_to_grid(gl_inputs_4, 'add_4')
    if gl_inputs_2 is not None:
        add_to_grid(gl_inputs_2, 'mod_2')

    tree.write(file_path, encoding='utf-8', xml_declaration=True)

if __name__ == "__main__":
    add_client_id_fields(ui_file)
