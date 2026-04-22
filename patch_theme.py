#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Replaces the applyHomogeneousTheme() function with a comprehensive
WasteGuard theme applied across ALL modules.
"""

import re

FILE = "mainwindow.cpp"

NEW_FUNCTION = r'''void MainWindow::applyHomogeneousTheme()
{
    if (!ui) return;

    // =================================================================
    // WasteGuard — Design System Tokens
    // =================================================================
    // Backgrounds
    static const char *BG_APP      = "#f0f2f5";
    static const char *BG_CARD     = "#ffffff";
    static const char *BG_CARD_ALT = "#f8fafb";
    // Borders
    static const char *BORDER      = "#e8ecf0";
    static const char *BORDER_FOCUS= "#27ae60";
    // Text
    static const char *TEXT_TITLE  = "#1a1a2e";
    static const char *TEXT_BODY   = "#374151";
    static const char *TEXT_MUTED  = "#6c757d";
    static const char *TEXT_WHITE  = "#ffffff";
    // Primary green
    static const char *PRIMARY     = "#27ae60";
    static const char *PRIMARY_DK  = "#219a52";
    static const char *PRIMARY_LT  = "#e8f5e9";
    static const char *PRIMARY_BORDER = "#d4e8dc";
    // Sidebar hero
    static const char *SIDEBAR_BG  = "#1a3a2e";
    static const char *SIDEBAR_BG2 = "#2d5a42";
    // Danger
    static const char *DANGER      = "#e74c3c";

    Q_UNUSED(SIDEBAR_BG2);
    Q_UNUSED(DANGER);

    // =================================================================
    // 1. SIDEBAR — enforce dark-green theme
    // =================================================================
    if (ui->sidebar) {
        ui->sidebar->setStyleSheet(
            QString(
                "QFrame#sidebar{"
                " background-color:%1; border:none;"
                "}"
                "QFrame#sidebar QLabel{"
                " color:#a8d5b5; background:transparent; font-weight:600;"
                "}"
                "QFrame#sidebar QPushButton{"
                " background-color:transparent; border:none; border-radius:10px;"
                " color:#a8d5b5; text-align:left;"
                " padding:11px 16px; font-size:11pt; font-weight:600; margin:2px 8px;"
                "}"
                "QFrame#sidebar QPushButton:hover{"
                " background-color:rgba(39,174,96,0.18); color:#ffffff;"
                "}"
                "QFrame#sidebar QPushButton:checked{"
                " background-color:%2; color:%3; font-weight:700;"
                "}"
                "QPushButton#btnLogout{"
                " background:transparent; border:none; border-radius:10px;"
                " color:#e57373; text-align:left;"
                " padding:11px 16px; font-size:11pt; font-weight:600; margin:2px 8px;"
                "}"
                "QPushButton#btnLogout:hover{"
                " background:rgba(229,115,115,0.15); color:#ff8a80;"
                "}"
            ).arg(SIDEBAR_BG, PRIMARY, TEXT_WHITE)
        );
    }

    // =================================================================
    // 2. PAGE BACKGROUNDS
    // =================================================================
    if (centralWidget()) {
        centralWidget()->setAttribute(Qt::WA_StyledBackground, true);
    }
    const QStringList pageNames = {
        "pageProduit","pageStock","pageMaintenance","pageClient",
        "pageEmploye","pageCommande","page_Maintenance_Tab",
        "page_Maint_Dash","page_Maint_Ajout","page_Maint_Modif",
        "scrollContentMaint","dashboardContent"
    };
    for (const QString &name : pageNames) {
        if (auto *w = findChild<QWidget*>(name)) {
            w->setAttribute(Qt::WA_StyledBackground, true);
            QString cur = w->styleSheet();
            if (!cur.contains(QString(BG_APP)))
                w->setStyleSheet(cur + QString("background-color:%1;").arg(BG_APP));
        }
    }

    // =================================================================
    // 3. HEADER BARS (all modules)
    // =================================================================
    const QStringList headerNames = {
        "headerBar","topBar","header_Client","topBar_Employe",
        "headerMaint","headerCommande","headerStock"
    };
    for (const QString &name : headerNames) {
        if (auto *w = findChild<QWidget*>(name)) {
            w->setStyleSheet(
                QString("background-color:%1;"
                        "border:none;border-bottom:1px solid %2;")
                    .arg(BG_CARD, BORDER)
            );
        }
    }

    // =================================================================
    // 4. ALL QLineEdit
    // =================================================================
    const QString lineEditStyle = QString(
        "QLineEdit{"
        " background-color:%1; color:%2; border:1px solid %3;"
        " border-radius:8px; padding:8px 12px; font-size:13px; min-height:34px;"
        "}"
        "QLineEdit:focus{ border:2px solid %4; background-color:#f7fdf9; }"
        "QLineEdit:disabled{ background-color:#f3f4f6; color:#9ca3af; }"
    ).arg(BG_CARD, TEXT_BODY, BORDER, BORDER_FOCUS);

    for (QLineEdit *le : findChildren<QLineEdit*>()) {
        if (!le) continue;
        le->setStyleSheet(lineEditStyle);
        if (le->minimumHeight() < 34) le->setMinimumHeight(34);
    }

    // =================================================================
    // 5. ALL QComboBox
    // =================================================================
    const QString comboStyle = QString(
        "QComboBox{"
        " background-color:%1; color:%2; border:1px solid %3;"
        " border-radius:8px; padding:6px 30px 6px 10px;"
        " min-height:34px; font-size:13px;"
        "}"
        "QComboBox:hover{ border:1px solid %4; background-color:#f7fdf9; }"
        "QComboBox:focus{ border:2px solid %4; background-color:%1; }"
        "QComboBox::drop-down{"
        " subcontrol-origin:padding; subcontrol-position:top right;"
        " width:26px; border:none; border-left:1px solid %3;"
        "}"
    ).arg(BG_CARD, TEXT_BODY, BORDER, BORDER_FOCUS);

    const QString comboPopupStyle = QString(
        "QAbstractItemView{"
        " background-color:%1; color:%2; border:1px solid %3;"
        " selection-background-color:%4; selection-color:%5; outline:0;"
        "}"
        "QAbstractItemView::item{ min-height:30px; padding:6px 10px; }"
        "QAbstractItemView::item:hover{ background-color:%6; color:%7; }"
    ).arg(BG_CARD, TEXT_BODY, BORDER, PRIMARY, TEXT_WHITE,
          PRIMARY_LT, SIDEBAR_BG);

    for (QComboBox *cb : findChildren<QComboBox*>()) {
        if (!cb) continue;
        cb->setMaxVisibleItems(10);
        if (cb->minimumHeight() < 34) cb->setMinimumHeight(34);
        cb->setStyleSheet(comboStyle);
        if (QAbstractItemView *popup = cb->view()) {
            popup->setStyleSheet(comboPopupStyle);
            popup->setFrameShape(QFrame::NoFrame);
            popup->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
            if (QWidget *pw = popup->window()) {
                pw->setAttribute(Qt::WA_StyledBackground, true);
                pw->setStyleSheet(
                    QString("background-color:%1;border:1px solid %2;")
                        .arg(BG_CARD, BORDER));
                pw->setContentsMargins(0,0,0,0);
            }
        }
    }

    // =================================================================
    // 6. QSpinBox / QDoubleSpinBox
    // =================================================================
    const QString spinStyle = QString(
        "QSpinBox,QDoubleSpinBox{"
        " background:%1; color:%2; border:1px solid %3;"
        " border-radius:8px; padding:6px 10px; min-height:34px; font-size:13px;"
        "}"
        "QSpinBox:focus,QDoubleSpinBox:focus{ border:2px solid %4; }"
        "QSpinBox::up-button,QSpinBox::down-button,"
        "QDoubleSpinBox::up-button,QDoubleSpinBox::down-button{"
        " background:%1; border:none; border-radius:4px; width:18px;"
        "}"
    ).arg(BG_CARD, TEXT_BODY, BORDER, BORDER_FOCUS);
    for (QAbstractSpinBox *sb : findChildren<QAbstractSpinBox*>()) {
        if (sb) sb->setStyleSheet(spinStyle);
    }

    // =================================================================
    // 7. QDateEdit / QDateTimeEdit
    // =================================================================
    const QString dateStyle = QString(
        "QDateEdit,QDateTimeEdit{"
        " background:%1; color:%2; border:1px solid %3;"
        " border-radius:8px; padding:6px 10px; min-height:34px; font-size:13px;"
        "}"
        "QDateEdit:focus,QDateTimeEdit:focus{ border:2px solid %4; }"
        "QDateEdit::drop-down,QDateTimeEdit::drop-down{ border:none; width:22px; }"
    ).arg(BG_CARD, TEXT_BODY, BORDER, BORDER_FOCUS);
    for (QDateTimeEdit *de : findChildren<QDateTimeEdit*>()) {
        if (de) de->setStyleSheet(dateStyle);
    }

    // =================================================================
    // 8. QTextEdit / QPlainTextEdit
    // =================================================================
    const QString textEditStyle = QString(
        "QTextEdit,QPlainTextEdit{"
        " background:%1; color:%2; border:1px solid %3;"
        " border-radius:8px; padding:8px; font-size:13px;"
        "}"
        "QTextEdit:focus,QPlainTextEdit:focus{ border:2px solid %4; }"
    ).arg(BG_CARD, TEXT_BODY, BORDER, BORDER_FOCUS);
    for (QTextEdit *te : findChildren<QTextEdit*>()) {
        if (te) te->setStyleSheet(textEditStyle);
    }

    // =================================================================
    // 9. ALL QTableWidget
    // =================================================================
    const QString tableStyle = QString(
        "QTableWidget{"
        " background-color:%1; color:%2; gridline-color:transparent;"
        " border:none; font-size:13px;"
        " selection-background-color:%3; selection-color:%4;"
        " alternate-background-color:%5;"
        "}"
        "QTableWidget::item{ padding:10px 8px; border-bottom:1px solid %6; }"
        "QTableWidget::item:selected{ background:%3; color:%4; }"
        "QTableWidget::item:hover{ background:#f0f7f4; }"
        "QHeaderView::section{"
        " background:%5; color:%7; font-weight:700; font-size:11px;"
        " letter-spacing:1px; padding:10px 8px; border:none; border-bottom:2px solid %8;"
        "}"
        "QHeaderView{ background:%5; border:none; }"
        "QTableWidget QTableCornerButton::section{ background:%5; border:none; }"
    ).arg(BG_CARD, TEXT_BODY, PRIMARY_LT, SIDEBAR_BG,
          BG_CARD_ALT, BORDER, TEXT_MUTED, PRIMARY);

    for (QTableWidget *tw : findChildren<QTableWidget*>()) {
        if (!tw) continue;
        tw->setStyleSheet(tableStyle);
        tw->setShowGrid(false);
        tw->setAlternatingRowColors(true);
        if (tw->horizontalHeader())
            tw->horizontalHeader()->setHighlightSections(false);
    }

    // =================================================================
    // 10. QListWidget
    // =================================================================
    const QString listStyle = QString(
        "QListWidget{"
        " background:%1; color:%2; border:1px solid %3; border-radius:8px; font-size:13px;"
        "}"
        "QListWidget::item{ padding:8px 10px; border-bottom:1px solid %3; }"
        "QListWidget::item:selected{ background:%4; color:%5; border-radius:6px; }"
        "QListWidget::item:hover{ background:%6; }"
    ).arg(BG_CARD, TEXT_BODY, BORDER, PRIMARY, TEXT_WHITE, PRIMARY_LT);
    for (QListWidget *lw : findChildren<QListWidget*>()) {
        if (lw) lw->setStyleSheet(listStyle);
    }

    // =================================================================
    // 11. ALL QPushButton — classify & apply
    // =================================================================
    const QString btnPrimaryStyle = QString(
        "QPushButton{"
        " background-color:%1; color:%2; border:none; border-radius:10px;"
        " padding:10px 22px; font-size:13px; font-weight:700; min-height:38px;"
        "}"
        "QPushButton:hover{ background-color:%3; }"
        "QPushButton:pressed{ background-color:#1a8a4a; }"
        "QPushButton:disabled{ background-color:#9ca3af; color:#e5e7eb; }"
    ).arg(PRIMARY, TEXT_WHITE, PRIMARY_DK);

    const QString btnSecondaryStyle = QString(
        "QPushButton{"
        " background-color:%1; color:%2; border:1px solid %3;"
        " border-radius:10px; padding:10px 22px; font-size:13px;"
        " font-weight:600; min-height:38px;"
        "}"
        "QPushButton:hover{ background-color:%4; border-color:%2; }"
    ).arg(BG_CARD, PRIMARY, PRIMARY_BORDER, PRIMARY_LT);

    const QString btnDangerStyle = QString(
        "QPushButton{"
        " background-color:%1; color:%2; border:none; border-radius:10px;"
        " padding:8px 18px; font-size:13px; font-weight:700; min-height:38px;"
        "}"
        "QPushButton:hover{ background-color:#c0392b; }"
    ).arg(DANGER, TEXT_WHITE);

    for (QPushButton *btn : findChildren<QPushButton*>()) {
        if (!btn) continue;
        const QString n = btn->objectName().toLower();
        // Skip sidebar buttons
        if (btn->parentWidget() && btn->parentWidget()->objectName() == "sidebar") continue;
        if (n == "btnlogout") continue;
        // Skip icon-only / accessibility buttons
        if (n.contains("toggle") || n.contains("microphone")
            || n.contains("notif") || n.contains("profil")
            || n.contains("highcontrast")
            || n.contains("zoomplus") || n.contains("zoomminus")) {
            btn->setStyleSheet(
                QString("QPushButton{ background:%1; color:%2; border:1px solid %3;"
                        " border-radius:8px; padding:6px 10px; }"
                        "QPushButton:hover{ background:%4; border-color:%2; }"
                ).arg(BG_CARD, PRIMARY, PRIMARY_BORDER, PRIMARY_LT));
            continue;
        }
        // Classify by name
        if (n.contains("supprimer") || n.contains("delete")) {
            btn->setStyleSheet(btnDangerStyle);
        } else if (n.contains("annuler") || n.contains("cancel")
                   || n.contains("retour") || n.contains("back")) {
            btn->setStyleSheet(btnSecondaryStyle);
        } else {
            btn->setStyleSheet(btnPrimaryStyle);
        }
        btn->setCursor(Qt::PointingHandCursor);
    }

    // =================================================================
    // 12. QGroupBox
    // =================================================================
    const QString groupBoxStyle = QString(
        "QGroupBox{"
        " background:%1; border:1px solid %2; border-radius:10px;"
        " margin-top:14px; padding-top:10px; font-size:13px; font-weight:700; color:%3;"
        "}"
        "QGroupBox::title{"
        " subcontrol-origin:margin; subcontrol-position:top left;"
        " padding:0 8px; color:%4; background:%1;"
        "}"
    ).arg(BG_CARD, BORDER, TEXT_TITLE, PRIMARY);
    for (QGroupBox *gb : findChildren<QGroupBox*>()) {
        if (gb) gb->setStyleSheet(groupBoxStyle);
    }

    // =================================================================
    // 13. QTabWidget
    // =================================================================
    const QString tabStyle = QString(
        "QTabWidget::pane{ border:1px solid %1; border-radius:0 0 10px 10px; background:%2; }"
        "QTabBar::tab{"
        " background:%2; color:%3; border:1px solid %1; border-bottom:none;"
        " border-radius:8px 8px 0 0; padding:8px 18px; font-size:13px; font-weight:600; margin-right:2px;"
        "}"
        "QTabBar::tab:selected{ background:%4; color:%5; border-color:%4; }"
        "QTabBar::tab:hover:!selected{ background:%6; color:%7; }"
    ).arg(BORDER, BG_CARD, TEXT_MUTED, PRIMARY, TEXT_WHITE, PRIMARY_LT, SIDEBAR_BG);
    for (QTabWidget *tw : findChildren<QTabWidget*>()) {
        if (tw) tw->setStyleSheet(tabStyle);
    }

    // =================================================================
    // 14. QScrollBar
    // =================================================================
    const QString scrollStyle =
        "QScrollBar:vertical{ background:#f0f2f5; width:8px; border-radius:4px; margin:0; }"
        "QScrollBar::handle:vertical{ background:#c0cacf; border-radius:4px; min-height:30px; }"
        "QScrollBar::handle:vertical:hover{ background:#27ae60; }"
        "QScrollBar::add-line:vertical,QScrollBar::sub-line:vertical{ height:0px; }"
        "QScrollBar:horizontal{ background:#f0f2f5; height:8px; border-radius:4px; margin:0; }"
        "QScrollBar::handle:horizontal{ background:#c0cacf; border-radius:4px; min-width:30px; }"
        "QScrollBar::handle:horizontal:hover{ background:#27ae60; }"
        "QScrollBar::add-line:horizontal,QScrollBar::sub-line:horizontal{ width:0px; }";
    for (QScrollBar *sb : findChildren<QScrollBar*>()) {
        if (sb) sb->setStyleSheet(scrollStyle);
    }

    // =================================================================
    // 15. QScrollArea
    // =================================================================
    for (QScrollArea *sa : findChildren<QScrollArea*>()) {
        if (!sa) continue;
        sa->setFrameShape(QFrame::NoFrame);
        if (!sa->styleSheet().contains(BG_APP)) {
            sa->setStyleSheet(
                QString("QScrollArea{ background:%1; border:none; }"
                        "QScrollArea>QWidget>QWidget{ background:%1; }")
                    .arg(BG_APP));
        }
    }

    // =================================================================
    // 16. FORM PAGES: Add / Modify — uniform card panels
    // =================================================================
    const QStringList formPageNames = {
        // Employe
        "pageAjoutEmploye","pageModifEmploye","page_ajout_emp","page_modif_emp",
        // Produit
        "prod_ajout","prod_modification","pageProdAjout","pageProdModif",
        // Stock
        "pageStockAjout","pageStockModif","page_add_stock","page_mod_stock",
        // Client
        "page_ajouter_client_wrapper","page_modifier_client_wrapper",
        "pageAjoutClient","pageModifClient",
        // Maintenance
        "page_Maint_Ajout","page_Maint_Modif",
        // Commande
        "pageAddCommande","pageModCommande","page_add_cmd","page_mod_cmd",
    };
    const QString formPageStyle = QString(
        "QWidget{ background-color:%1; }"
        "QFrame{ background-color:%1; border:none; }"
        "QLabel{ color:%2; font-size:13px; font-weight:600; background:transparent; }"
        "QLineEdit,QComboBox,QDateEdit,QDateTimeEdit,QSpinBox,QDoubleSpinBox{"
        " background-color:%3; color:%4; border:1px solid %5;"
        " border-radius:8px; padding:8px 12px; font-size:13px; min-height:36px;"
        "}"
        "QLineEdit:focus,QComboBox:focus,QDateEdit:focus{ border:2px solid %6; background-color:#f7fdf9; }"
        "QPushButton{"
        " background-color:%6; color:%7; border:none; border-radius:10px;"
        " padding:10px 22px; font-size:13px; font-weight:700; min-height:38px;"
        "}"
        "QPushButton:hover{ background-color:%8; }"
    ).arg(BG_APP, TEXT_TITLE, BG_CARD, TEXT_BODY, BORDER,
          PRIMARY, TEXT_WHITE, PRIMARY_DK);

    for (const QString &name : formPageNames) {
        if (auto *w = findChild<QWidget*>(name)) {
            w->setStyleSheet(formPageStyle);
        }
    }

    // =================================================================
    // 17. RETRACTABLE RIGHT PANELS
    // =================================================================
    ensureRetractableRightPanels();

    // =================================================================
    // 18. FINAL REPOLISH
    // =================================================================
    repolishRecursive(this);
}
'''

# Read the file
with open(FILE, 'r', encoding='utf-8', errors='replace') as f:
    content = f.read()

# Find the function boundaries using regex
# Match "void MainWindow::applyHomogeneousTheme()" through its closing "}"
# We'll find the function start and scan for the matching closing brace

start_marker = 'void MainWindow::applyHomogeneousTheme()\n{'
alt_marker   = 'void MainWindow::applyHomogeneousTheme()\r\n{'

start_idx = content.find(start_marker)
if start_idx == -1:
    start_idx = content.find(alt_marker)
    if start_idx == -1:
        print("ERROR: Could not find applyHomogeneousTheme function start")
        exit(1)

# Scan from start_idx to find the matching closing brace
depth = 0
i = content.find('{', start_idx)
end_idx = -1
while i < len(content):
    if content[i] == '{':
        depth += 1
    elif content[i] == '}':
        depth -= 1
        if depth == 0:
            end_idx = i + 1
            break
    i += 1

if end_idx == -1:
    print("ERROR: Could not find closing brace of applyHomogeneousTheme")
    exit(1)

print(f"Found function from char {start_idx} to {end_idx}")
print(f"Old function length: {end_idx - start_idx} chars")

# Build replacement — ensure Windows line endings
new_func = NEW_FUNCTION.replace('\r\n', '\n').replace('\n', '\r\n')

# Replace
new_content = content[:start_idx] + new_func + content[end_idx:]

# Write back
with open(FILE, 'w', encoding='utf-8') as f:
    f.write(new_content)

print(f"SUCCESS: Replaced applyHomogeneousTheme ({end_idx - start_idx} -> {len(new_func)} chars)")
print(f"New file size: {len(new_content)} chars")
