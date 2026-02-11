
import os

file_path = "c:/qt c++/integration/mainwindow.ui"

replacements = {
    "<string>NOM COMPLET</string>": "<string>NOM COMPLET</string>", # Wait, user photo shows NOM COMPLE. Maybe I should fix it to COMPLET.
    "<string>SPÃ‰CIALITÃ‰</string>": "<string>SPÉCIALITÉ</string>",
    "<string>DISPONIBILITÃ‰</string>": "<string>DISPONIBILITÉ</string>",
    "<string>aœi¸ | ðŸ—‘i¸</string>": "<string>ACTIONS</string>" # Fixing the garbage column header if it matches
}

# Also need to check if there are other garbage strings like the search placeholder.
# "ðŸ”" -> "🔍" (U+1F50D) or just "Rechercher..."

with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# Apply replacements
for old, new in replacements.items():
    content = content.replace(old, new)

# Fix search placeholder if found
# The file likely contains <string>ðŸ”...?</string>
# Let's try to be smart about it.
# Look for "Rechercher un employe"
# Replace with "🔍 Rechercher un employé..."

# We can also do a generic mojibake fix for specific words found in the previous turn if they re-appeared.
# But for now, targeted approach.

content = content.replace("Rechercher un employe...", "🔍 Rechercher un employé...")

# Fix table content text in UI if any
# (The UI file has hardcoded rows 0 which might display if C++ fails or before C++ runs)
content = content.replace("Employe Tes...", "Employé Test")
content = content.replace("Mecanicien", "Mécanicien")

# Write back
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print("UI file updated.")
