import xml.etree.ElementTree as ET
import copy
import os

def merge_uis():
    # Chemins des fichiers (basés sur votre contexte)
    base_dir = r"c:\Users\ASUS\Downloads\projetcpp2526-s2-2a6-smart-waste-collection-2a6-integration_interface\projetcpp2526-s2-2a6-smart-waste-collection-2a6-integration_interface"
    main_ui_path = os.path.join(base_dir, "mainwindow.ui")
    stock_ui_path = os.path.join(base_dir, "stock.ui")
    
    if not os.path.exists(main_ui_path) or not os.path.exists(stock_ui_path):
        print(f"Erreur : Fichiers non trouvés dans {base_dir}")
        return

    print("Lecture des fichiers UI...")
    tree_main = ET.parse(main_ui_path)
    root_main = tree_main.getroot()
    
    tree_stock = ET.parse(stock_ui_path)
    root_stock = tree_stock.getroot()
    
    # 1. Trouver le stackedWidget principal dans mainwindow.ui
    stacked_widget = None
    for widget in root_main.iter('widget'):
        if widget.get('class') == 'QStackedWidget' and widget.get('name') == 'stackedWidget':
            stacked_widget = widget
            break
            
    if stacked_widget is None:
        print("Erreur : 'stackedWidget' introuvable dans mainwindow.ui")
        return

    # Vérifier si pageStock existe déjà pour éviter les doublons
    for child in stacked_widget:
        if child.get('name') == 'pageStock':
            print("Info : 'pageStock' existe déjà. Suppression de l'ancienne version...")
            stacked_widget.remove(child)
            break

    # 2. Préparer la nouvelle page 'pageStock'
    page_stock = ET.Element('widget')
    page_stock.set('class', 'QWidget')
    page_stock.set('name', 'pageStock')
    
    # 3. Extraire le contenu de stock.ui
    stock_main_window = root_stock.find("widget[@class='QMainWindow']")
    if stock_main_window is None:
        print("Erreur : QMainWindow introuvable dans stock.ui")
        return

    # Copier la stylesheet pour garder le design
    for prop in stock_main_window.findall('property'):
        if prop.get('name') == 'styleSheet':
            page_stock.append(copy.deepcopy(prop))
            
    # Copier le layout central
    stock_central = stock_main_window.find("widget[@name='centralwidget']")
    if stock_central is not None:
        layout = stock_central.find('layout')
        if layout is not None:
            # Copie profonde pour ne pas modifier l'arbre d'origine
            layout_copy = copy.deepcopy(layout)
            
            # 4. Renommer les objets conflictuels (ex: stackedWidget interne)
            for widget in layout_copy.iter('widget'):
                if widget.get('name') == 'stackedWidget':
                    widget.set('name', 'stock_stackedWidget')
                    print("Renommé 'stackedWidget' interne en 'stock_stackedWidget'")
            
            page_stock.append(layout_copy)
    
    # 5. Ajouter pageStock au stackedWidget principal
    stacked_widget.append(page_stock)
    
    # 6. Sauvegarder
    tree_main.write(main_ui_path, encoding='UTF-8', xml_declaration=True)
    print("Succès : stock.ui fusionné dans mainwindow.ui (pageStock créée)")

if __name__ == "__main__":
    merge_uis()
