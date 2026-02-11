
with open(r"c:\Users\Rudy\Music\integration\mainwindow.ui", "r", encoding="utf-8") as f:
    lines = f.readlines()
    for i, line in enumerate(lines):
        if "Modifier Une Commande" in line:
            print(f"Found on line {i+1}: {line.strip()}")
        if "name=\"pageCmdModifier\"" in line:
            print(f"Page found on line {i+1}: {line.strip()}")
