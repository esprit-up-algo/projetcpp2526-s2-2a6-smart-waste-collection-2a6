import xml.etree.ElementTree as ET
import os

def remove_stock_sidebar():
    # Chemin du fichier mainwindow.ui
    base_dir = r"c:\Users\ASUS\Downloads\projetcpp2526-s2-2a6-smart-waste-collection-2a6-integration_interface\projetcpp2526-s2-2a6-smart-waste-collection-2a6-integration_interface"
    ui_path = os.path.join(base_dir, "mainwindow.ui")
    
    if not os.path.exists(ui_path):
        print(f"Erreur : Fichier non trouvé : {ui_path}")
        return

    print(f"Traitement de {ui_path}...")
    tree = ET.parse(ui_path)
    root = tree.getroot()
    
    # 1. Trouver la page 'pageStock'
    page_stock = None
    for widget in root.iter('widget'):
        if widget.get('name') == 'pageStock':
            page_stock = widget
            break
            
    if page_stock is None:
        print("Erreur : 'pageStock' introuvable dans le fichier UI.")
        return

    # 2. Trouver le layout principal de cette page
    layout = page_stock.find('layout')
    if layout is None:
        print("Erreur : Layout principal de pageStock introuvable.")
        return

    # 3. Chercher l'item contenant 'sidebarFrame' (la barre latérale dupliquée)
    item_to_remove = None
    for item in layout.findall('item'):
        widget = item.find('widget')
        if widget is not None and widget.get('name') == 'sidebarFrame':
            item_to_remove = item
            break
            
    # 4. Supprimer l'item si trouvé
    if item_to_remove is not None:
        layout.remove(item_to_remove)
        print("Succès : 'sidebarFrame' (barre latérale dupliquée) supprimé de pageStock.")
        
        # Nettoyer l'attribut 'stretch' du layout pour éviter des avertissements
        if 'stretch' in layout.attrib:
            del layout.attrib['stretch']
            
        # Sauvegarder les modifications
        tree.write(ui_path, encoding='UTF-8', xml_declaration=True)
    else:
        print("Info : 'sidebarFrame' n'a pas été trouvé dans pageStock (déjà supprimé ?).")

if __name__ == "__main__":
    remove_stock_sidebar()