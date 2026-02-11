
import os

file_path = "c:/qt c++/integration/mainwindow.ui"

user_css = r"""
QMainWindow, QWidget {
    background-color: #f4f6f9; 
    font-family: "Segoe UI", sans-serif;
}

QLabel {
    color: #333333 !important;
    font-weight: 600;
}

QFrame#sidebar {
    background-color: #0f2b4c;
    border: none;
}
QFrame#sidebar QLabel {
    color: white !important;
    background-color: transparent; 
}

QLabel#label_logo {
    background-color: transparent !important;
    border: none;
}

QFrame#sidebar QPushButton {
    background-color: transparent;
    border: none;
    color: #bdc3c7;
    text-align: left;
    padding: 12px 20px;
    font-size: 14px;
    border-left: 3px solid transparent;
}
QFrame#sidebar QPushButton:hover, QFrame#sidebar QPushButton:checked {
    background-color: #1a4270;
    color: white;
    border-left: 3px solid #3498db;
}

QFrame#statCard, QFrame#statCard_2, QFrame#statCard_3, QFrame#actionCard, QFrame#cardFrame, QFrame#cardFrame_2 { 
    background-color: #f4f6f9;
    border-radius: 12px;
    border: 1px solid #dce1e6;
    border-bottom: 2px solid #dce1e6;
}

QLabel#lblStatNumber {
    font-size: 24px;
    font-weight: bold;
    color: #0f2b4c !important;
}

QPushButton#btnExport, QPushButton#btnFichePaie {
    background-color: #ffffff;
    color: #333333 !important;
    border: 1px solid #cccccc;
    border-radius: 8px;
    padding: 10px 15px;
    text-align: left;
    font-weight: bold;
    font-size: 13px;
    margin-top: 5px;
}
QPushButton#btnExport:hover, QPushButton#btnFichePaie:hover {
    background-color: #e3f2fd;
    border: 1px solid #3498db;
    color: #0f2b4c !important;
}

QPushButton#btnSave, QPushButton#btnAjouter, QPushButton#btnNouveau {
    background-color: #28a745;
    color: white !important;
    border-radius: 5px;
    padding: 8px 15px;
    font-weight: bold;
    border: none;
}
QPushButton#btnSave:hover, QPushButton#btnAjouter:hover, QPushButton#btnNouveau:hover {
    background-color: #218838;
}
QPushButton#btnNouveau {
    background-color: #0f2b4c;
}
QPushButton#btnNouveau:hover {
    background-color: #1a4270;
}

QPushButton#btnAnnuler, QPushButton#btnAnnuler_Ajout {
    background-color: #6c757d;
    color: white !important;
    border-radius: 5px;
    padding: 8px 15px;
    font-weight: bold;
    border: none;
}
QPushButton#btnAnnuler:hover, QPushButton#btnAnnuler_Ajout:hover {
    background-color: #5a6268;
}

QPushButton#btnDelete {
    background-color: #dc3545;
    color: white !important;
    border-radius: 5px;
    padding: 8px 15px;
    font-weight: bold;
    border: none;
}
QPushButton#btnDelete:hover {
    background-color: #c82333;
}

QPushButton#btnUploadPhoto, QPushButton#btnUploadPhoto_Ajout {
    background-color: #ffffff;
    color: #0f2b4c !important;
    border: 1px dashed #0f2b4c;
    border-radius: 8px;
    padding: 6px;
    font-weight: bold;
    margin-top: 5px;
}
QPushButton#btnUploadPhoto:hover, QPushButton#btnUploadPhoto_Ajout:hover {
    background-color: #e3f2fd;
    border: 1px solid #0f2b4c;
}

QTableWidget {
    background-color: #f4f6f9;
    alternate-background-color: #e8ebf0;
    color: #000000 !important;
    gridline-color: transparent;
    border: 1px solid #dce1e6;
    border-radius: 8px;
    font-size: 13px;
}
QTableWidget::item {
    color: #000000 !important;
    padding: 5px;
    border-bottom: 1px solid #e0e6ed;
}
QTableWidget::item:selected {
    background-color: #e3f2fd;
    color: #0f2b4c !important;
}
QHeaderView::section {
    background-color: #0f2b4c;
    color: white;
    padding: 8px;
    border: none;
    font-weight: bold;
    font-size: 13px;
}

QLineEdit {
    background-color: #ffffff;
    color: #000000;
    border: 1px solid #cccccc;
    border-radius: 5px;
    padding: 6px;
}
QLineEdit:focus {
    border: 1px solid #3498db;
}

QComboBox {
    background-color: #ffffff;
    color: #333333;
    border: 1px solid #cccccc;
    border-radius: 5px;
    padding: 6px;
}
QComboBox:focus {
    border: 1px solid #3498db;
}
QComboBox QAbstractItemView {
    background-color: #ffffff;
    color: #333333;
    selection-background-color: #0f2b4c;
    selection-color: #ffffff;
    border: 1px solid #cccccc;
}

QLabel#imageLabel, QLabel#imageLabel_2 {
    border: 1px solid #cccccc;
    border-radius: 10px;
    background-color: #f4f6f9;
    color: #888888 !important;
}

QTabWidget::pane { border: none; }
QTabBar::tab {
    background: #e0e4e8;
    color: #333 !important;
    padding: 8px 20px;
    margin-right: 2px;
}
QTabBar::tab:selected {
    background: #0f2b4c;
    color: white !important;
}

QLabel#lblUserName, QLabel#lblUserName_Modif, QLabel#lblUserName_Ajout {
    font-size: 14px;
    font-weight: bold;
    color: #0f2b4c !important;
}
QLabel#lblUserRole, QLabel#lblUserRole_Modif, QLabel#lblUserRole_Ajout {
    font-size: 12px;
    font-weight: bold;
    color: #28a745 !important;
    margin-top: -2px;
}

/* Style Spécifique pour l'onglet Mission */
QPushButton#btnAnalyser {
    background-color: #6c5ce7;
    color: white;
    font-weight: bold;
    padding: 12px;
    border-radius: 6px;
}
QPushButton#btnAnalyser:hover {
    background-color: #5b4cc4;
}
QLabel#lblTitreMission {
    font-size: 16px;
    color: #0f2b4c !important;
}
QLabel#lblResultat {
    font-size: 14px;
    color: #27ae60 !important;
}

/* Style pour l'onglet Pointage */
QLabel#lblStatutRFID {
    background-color: #ecf0f1;
    color: #7f8c8d;
    font-size: 24px;
    font-weight: bold;
    border-radius: 10px;
    padding: 20px;
    border: 2px dashed #bdc3c7;
}
QPushButton#btnSimulerBadge {
    background-color: #e67e22;
    color: white;
    font-weight: bold;
    padding: 10px;
    border-radius: 5px;
    margin-top: 10px;
}
QPushButton#btnSimulerBadge:hover {
    background-color: #d35400;
}

QSlider::groove:horizontal {
    border: 1px solid #cccccc;
    height: 8px;
    background: #e0e0e0;
    margin: 2px 0;
    border-radius: 4px;
}
QSlider::handle:horizontal {
    background: #0f2b4c;
    border: 1px solid #0f2b4c;
    width: 18px;
    height: 18px;
    margin: -6px 0;
    border-radius: 9px;
}
/* ======================================================= */
/* STYLE UNIFIÉ POUR LES 5 BOUTONS PRINCIPAUX              */
/* ======================================================= */

/* 1. Style de base pour les deux boutons du haut ET les trois du bas */
QPushButton#btnFichePaie, QPushButton#btnExport,
QPushButton#btnGoMission, QPushButton#btnGoPointage, QPushButton#btnGoStats {
    background-color: #ffffff;  /* Fond blanc */
    color: #333333;             /* Texte gris foncé (le standard pro) */
    border: 1px solid #dcdcdc;  /* Bordure grise subtile */
    border-radius: 8px;         /* Coins joliment arrondis */
    padding: 15px 20px;         /* Espace intérieur confortable */
    font-size: 14px;            /* Taille de texte lisible */
    font-weight: bold;          /* Texte en gras pour l'importance */
    text-align: left;           /* Alignement du texte */
}

/* 2. Effet quand la souris passe dessus (Hover) pour les 5 boutons */
QPushButton#btnFichePaie:hover, QPushButton#btnExport:hover,
QPushButton#btnGoMission:hover, QPushButton#btnGoPointage:hover, QPushButton#btnGoStats:hover {
    background-color: #f0f8ff;  /* Fond bleu très pâle au survol */
    border: 1px solid #3498db;  /* La bordure devient bleue */
    color: #000000;             /* Le texte devient noir pur */
}

/* 3. Effet quand on clique dessus (Pressed) pour les 5 boutons */
QPushButton#btnFichePaie:pressed, QPushButton#btnExport:pressed,
QPushButton#btnGoMission:pressed, QPushButton#btnGoPointage:pressed, QPushButton#btnGoStats:pressed {
    background-color: #e1ecf4;  /* Fond un peu plus foncé au clic */
    border: 1px solid #2980b9;
}
/* Style pour les boutons de RETOUR dans les pages Mission, Pointage et Stats */
QPushButton#btnAnnulerMission, 
QPushButton#btnAnnulerPointage, 
QPushButton#btnAnnulerStats {
    background-color: #6c757d;  /* Gris foncé standard pour "Annuler/Retour" */
    color: white;               /* Texte blanc */
    border: none;
    border-radius: 5px;
    padding: 10px 20px;
    font-weight: bold;
    font-size: 14px;
    min-width: 200px;           /* Largeur minimale pour être bien visible */
    margin-top: 20px;           /* Un peu d'espace au-dessus */
}

/* Effet au survol */
QPushButton#btnAnnulerMission:hover, 
QPushButton#btnAnnulerPointage:hover, 
QPushButton#btnAnnulerStats:hover {
    background-color: #5a6268;  /* Gris un peu plus foncé */
}
/* ======================================================= */
/* 1. CORRECTION DES BOUTONS DE RETOUR (Pages internes)    */
/* ======================================================= */
/* Cela rendra les boutons "Retour" bien visibles en gris foncé */
QPushButton#btnAnnulerMission, 
QPushButton#btnAnnulerPointage, 
QPushButton#btnAnnulerStats {
    background-color: #6c757d;  /* Gris foncé */
    color: white !important;    /* Texte BLANC forcé */
    border: none;
    border-radius: 6px;
    padding: 10px 25px;         /* Plus large pour être cliquable */
    font-weight: bold;
    font-size: 14px;
    margin-top: 15px;           /* Espace au dessus */
    min-width: 150px;           /* Largeur minimale */
}

QPushButton#btnAnnulerMission:hover, 
QPushButton#btnAnnulerPointage:hover, 
QPushButton#btnAnnulerStats:hover {
    background-color: #5a6268;  /* Gris plus foncé au survol */
}

/* ======================================================= */
/* 2. CORRECTION DE LA BOITE DE DIALOGUE (Supprimer)       */
/* ======================================================= */
/* Cela corrige les boutons "Yes/No" illisibles */
QMessageBox {
    background-color: white;
}

QMessageBox QPushButton {
    background-color: #0f2b4c;  /* Bleu foncé */
    color: white !important;    /* Texte blanc */
    border-radius: 5px;
    padding: 6px 20px;
    min-width: 80px;            /* Taille correcte */
    font-weight: bold;
}

QMessageBox QPushButton:hover {
    background-color: #1a4270;  /* Bleu plus clair au survol */
}

/* ======================================================= */
/* 3. UNIFICATION DES 5 BOUTONS DU DASHBOARD (Accueil)     */
/* ======================================================= */
/* Pour que les 3 boutons du bas ressemblent à ceux du haut */
QPushButton#btnFichePaie, QPushButton#btnExport,
QPushButton#btnGoMission, QPushButton#btnGoPointage, QPushButton#btnGoStats {
    background-color: #ffffff;
    color: #333333 !important;  /* Gris foncé lisible */
    border: 1px solid #dcdcdc;
    border-radius: 8px;
    padding: 15px;
    font-size: 14px;
    font-weight: bold;
    text-align: center;         /* Centré ou left selon préférence */
}

QPushButton#btnFichePaie:hover, QPushButton#btnExport:hover,
QPushButton#btnGoMission:hover, QPushButton#btnGoPointage:hover, QPushButton#btnGoStats:hover {
    background-color: #e3f2fd;
    border: 1px solid #3498db;
    color: #000000 !important;
}
"""

with open(file_path, "r", encoding="utf-8") as f:
    content = f.read()

# Tags
tag_start = '<string notr="true">'
marker = '/* STYLE MAINTENANCE (AJOUTE) */'

idx_start = content.find(tag_start)
idx_marker = content.find(marker)

if idx_start != -1 and idx_marker != -1:
    print("Found both start tag and maintenance marker.")
    # Extract everything before start tag
    prefix = content[:idx_start + len(tag_start)]
    # Extract everything after marker
    suffix = content[idx_marker:]
    
    # Simple replace " inside CSS with &quot; just in case, though usually raw " is okay in text nodes in many parsers,
    # but let's look at existing file.
    # Existing file seems to use &quot;.
    # Let's escape the user_css
    user_css_escaped = user_css.replace('"', '&quot;')
    
    # Combine
    # Note: Added a newline before suffix just to be clean
    new_content = prefix + "\n" + user_css_escaped + "\n" + suffix
    
    with open(file_path, "w", encoding="utf-8") as f:
        f.write(new_content)
    print("Successfully updated CSS while preserving Maintenance styles.")

elif idx_start != -1:
    print("Found start tag but NOT maintenance marker. Creating backup logic if needed, but for now assuming marker exists based on Select-String.")
    # Log failure
    print(f"Marker not found. Content sample around start: {content[idx_start:idx_start+100]}")
else:
    print("Could not find <string notr='true'> tag.")

