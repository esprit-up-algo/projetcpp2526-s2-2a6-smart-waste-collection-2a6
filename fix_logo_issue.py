import os

def fix_logo_qrc():
    # Chemins possibles pour logo.qrc
    candidates = [
        "logo.qrc",
        r"c:\Users\ASUS\Downloads\projetcpp2526-s2-2a6-smart-waste-collection-2a6-integration_interface\projetcpp2526-s2-2a6-smart-waste-collection-2a6-integration_interface\logo.qrc"
    ]
    
    target_file = None
    for c in candidates:
        if os.path.exists(c):
            target_file = c
            break
            
    if not target_file:
        print("Erreur : logo.qrc non trouvé.")
        return

    print(f"Correction de {target_file}...")
    bad_image = "Gemini_Generated_Image_8k5i7p8k5i7p8k5i-removebg-preview (2).png"
    
    try:
        with open(target_file, 'r', encoding='utf-8') as f:
            lines = f.readlines()
            
        new_lines = [line for line in lines if bad_image not in line]
        
        if len(new_lines) != len(lines):
            with open(target_file, 'w', encoding='utf-8') as f:
                f.writelines(new_lines)
            print("Succès : Référence à l'image supprimée de logo.qrc.")
        else:
            print("Info : Aucune référence trouvée.")
            
    except Exception as e:
        print(f"Erreur : {e}")

if __name__ == "__main__":
    fix_logo_qrc()