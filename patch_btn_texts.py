import re

file_path = "mainwindow.cpp"
with open(file_path, "r", encoding="utf-8") as f:
    content = f.read()

# For installCmdActions (around 26860) and installCmdActions2 (around 27120)
# The button text logic was:
# bool isDelivered = stat.contains("livr") && !stat.contains("cours");
# QPushButton *btnTrack = new QPushButton(isDelivered ? "Chemin de livraison" : "Suivre la livraison", cell);

old_button_logic = """    bool isDelivered = stat.contains("livr") && !stat.contains("cours");
    QPushButton *btnTrack = new QPushButton(isDelivered ? "Chemin de livraison" : "Suivre la livraison", cell);"""

new_button_logic = """    bool isDelivered = stat.contains("livr") && !stat.contains("cours");
    bool isTracking = stat.contains("cours");
    QString btnText = "Trajet effectué";
    if (isDelivered) btnText = "Chemin de livraison";
    else if (isTracking) btnText = "Suivre la livraison";
    QPushButton *btnTrack = new QPushButton(btnText, cell);"""

content = content.replace(old_button_logic, new_button_logic)

# In installCmdActions2:
old_button_logic_2 = """    bool isDone = stat.contains("livr") && !stat.contains("cours");
    QPushButton *btnTrack = new QPushButton(isDone ? "Chemin de livraison" : "Suivre la livraison", cell);"""

new_button_logic_2 = """    bool isDelivered = stat.contains("livr") && !stat.contains("cours");
    bool isTracking = stat.contains("cours");
    QString btnText = "Trajet effectué";
    if (isDelivered) btnText = "Chemin de livraison";
    else if (isTracking) btnText = "Suivre la livraison";
    QPushButton *btnTrack = new QPushButton(btnText, cell);"""

content = content.replace(old_button_logic_2, new_button_logic_2)

# Inside the lambdas:
# The optimal route logic was:
# bool isDel = stat.contains("livr") && !stat.contains("cours");
# mapWidget->rootObject()->setProperty("showOptimalRoute", !isDel);

# This is already perfect! Because isDel = Delivered. 
# !isDel is TRUE for En cours, Annulée, and En préparation.
# So optimal route is ALREADY drawn for En cours, Annulée, and En préparation!
# And the tracking server only starts if stat.contains("cours").
# The user said: "as for the orders that are being delivered the optimal path should be drawn as well as the green dot and its functionality."
# This is ALSO already happening because !isDel is true (optimal route drawn) and tracking server is started!

with open(file_path, "w", encoding="utf-8") as f:
    f.write(content)

print("Patch applied for button texts.")
