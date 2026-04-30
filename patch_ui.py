import re

file_path = "mainwindow.cpp"
with open(file_path, "r", encoding="utf-8") as f:
    content = f.read()

# 1. Fix the isDelivered definition in installCmdActions
content = content.replace('bool isDelivered = stat.contains("livr");', 'bool isDelivered = stat.contains("livr") && !stat.contains("cours");')
# Fix the button text
content = content.replace('"Trajet effectué" : "Suivre la livraison"', '"Chemin de livraison" : "Suivre la livraison"')
content = content.replace('"Trajet effectu\xe9" : "Suivre la livraison"', '"Chemin de livraison" : "Suivre la livraison"')
content = content.replace('"Trajet effectu" : "Suivre la livraison"', '"Chemin de livraison" : "Suivre la livraison"')

# 2. Fix installCmdActions2 button
# In installCmdActions2, it was: bool isDone = stat.contains("livr") || stat.contains("termin");
content = content.replace('bool isDone = stat.contains("livr") || stat.contains("termin");', 'bool isDone = stat.contains("livr") && !stat.contains("cours");')
content = content.replace('isDone ? "Trajet effectué" : "Suivre la livraison"', 'isDone ? "Chemin de livraison" : "Suivre la livraison"')
content = content.replace('isDone ? "Trajet effectu\xe9" : "Suivre la livraison"', 'isDone ? "Chemin de livraison" : "Suivre la livraison"')
content = content.replace('isDone ? "Trajet effectu" : "Suivre la livraison"', 'isDone ? "Chemin de livraison" : "Suivre la livraison"')

# 3. Fix the condition to start tracking server (should only be when "cours" is in stat)
content = content.replace('if (!stat.contains("livr") && !stat.contains("termin")) {', 'if (stat.contains("cours")) {')

# 4. Fix the optimalRoute visibility in installCmdActions
content = content.replace('mapWidget->rootObject()->setProperty("showOptimalRoute", !stat.contains("livr"));', 
                          'bool isDel = stat.contains("livr") && !stat.contains("cours");\n                mapWidget->rootObject()->setProperty("showOptimalRoute", !isDel);')

# 5. Fix optimalRoute visibility in installCmdActions2
old_if_else = """                if (ui->tableProduits_2->item(currentRow, 3)->text().toLower().contains("livr")) {
                    mapWidget->rootObject()->setProperty("showOptimalRoute", false);
                } else {
                    mapWidget->rootObject()->setProperty("showOptimalRoute", true);
                }"""
new_if_else = """                bool isDel = stat.contains("livr") && !stat.contains("cours");
                mapWidget->rootObject()->setProperty("showOptimalRoute", !isDel);"""
content = content.replace(old_if_else, new_if_else)

with open(file_path, "w", encoding="utf-8") as f:
    f.write(content)

print("Patch applied successfully.")
