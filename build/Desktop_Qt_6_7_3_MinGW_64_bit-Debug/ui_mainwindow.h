/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_Main;
    QFrame *sidebarFrame;
    QVBoxLayout *sidebarLayout;
    QLabel *label_logo;
    QPushButton *btnAccueil;
    QPushButton *btnProduits;
    QPushButton *btnClients;
    QPushButton *btnMaintenance;
    QPushButton *btnPrediction;
    QPushButton *btnAlerts;
    QSpacerItem *verticalSpacer_sidebar;
    QVBoxLayout *mainVerticalLayout;
    QFrame *headerBar;
    QHBoxLayout *headerLayout;
    QLabel *headerTitle;
    QSpacerItem *horizontalSpacer_header;
    QLabel *user;
    QStackedWidget *stackedWidget;
    QWidget *pageInventaire;
    QHBoxLayout *dashboardLayout;
    QFrame *tableCard;
    QVBoxLayout *tableCardLayout;
    QHBoxLayout *tableHeaderActions;
    QLabel *lblTableTitle;
    QSpacerItem *horizontalSpacer_table;
    QPushButton *btnNew;
    QTableWidget *tableWidget;
    QVBoxLayout *rightColumn;
    QFrame *statsBox;
    QVBoxLayout *statsLayout;
    QLabel *lblStatsTitle;
    QLabel *totalStock;
    QLabel *lblCriticalStock;
    QFrame *orderBox;
    QVBoxLayout *orderLayout;
    QLabel *lblOrderTitle;
    QLabel *lblOrderSummary;
    QPushButton *btnOrder;
    QPushButton *btnPrediction1;
    QPushButton *btnAlerts1;
    QSpacerItem *verticalSpacer_right;
    QWidget *pageAjouter;
    QVBoxLayout *layoutAjouter;
    QFrame *addCard;
    QVBoxLayout *addCardLayout;
    QLabel *lblAddTitle;
    QHBoxLayout *layoutRefNom_add;
    QLineEdit *inputRef_add;
    QLineEdit *inputNom_add;
    QHBoxLayout *layoutStock_add;
    QLineEdit *inputStock_add;
    QSlider *sliderStock_add;
    QHBoxLayout *layoutPrix_add;
    QLineEdit *inputPrix_add;
    QSlider *sliderPrix_add;
    QLineEdit *inputFournisseur_add;
    QHBoxLayout *addActions;
    QPushButton *btnCancel_add;
    QPushButton *btnSave_add;
    QWidget *pageModifier;
    QVBoxLayout *layoutModifier;
    QFrame *modifyCard;
    QVBoxLayout *modifyCardLayout;
    QLabel *lblModTitle;
    QHBoxLayout *layoutRefNom_mod;
    QLineEdit *inputRef_mod;
    QLineEdit *inputNom_mod;
    QHBoxLayout *layoutStock_mod;
    QLineEdit *inputStock_mod;
    QSlider *sliderStock_mod;
    QHBoxLayout *layoutPrix_mod;
    QLineEdit *inputPrix_mod;
    QSlider *sliderPrix_mod;
    QLineEdit *inputFournisseur_mod;
    QHBoxLayout *modifyActions;
    QPushButton *btnCancel_mod;
    QPushButton *btnSave_mod;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 800);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow, QWidget {\n"
"    background-color: #f4f6f9;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #333333 !important;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QFrame#sidebar {\n"
"    background-color: #0f2b4c;\n"
"    border: none;\n"
"}\n"
"QFrame#sidebar QLabel {\n"
"    color: white !important;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QLabel#label_logo {\n"
"    background-color: transparent !important;\n"
"    border: none;\n"
"}\n"
"\n"
"QFrame#sidebar QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: #bdc3c7;\n"
"    text-align: left;\n"
"    padding: 12px 20px;\n"
"    font-size: 14px;\n"
"    border-left: 3px solid transparent;\n"
"}\n"
"QFrame#sidebar QPushButton:hover, QFrame#sidebar QPushButton:checked {\n"
"    background-color: #1a4270;\n"
"    color: white;\n"
"    border-left: 3px solid #3498db;\n"
"}\n"
"\n"
"QFrame#statCard, QFrame#statCard_2, QFrame#statCard_3, QFrame#actionCard, QFrame#cardFra"
                        "me, QFrame#cardFrame_2 {\n"
"    background-color: #f4f6f9;\n"
"    border-radius: 12px;\n"
"    border: 1px solid #dce1e6;\n"
"    border-bottom: 2px solid #dce1e6;\n"
"}\n"
"\n"
"QLabel#lblStatNumber {\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    color: #0f2b4c !important;\n"
"}\n"
"\n"
"QPushButton#btnExport, QPushButton#btnFichePaie {\n"
"    background-color: #ffffff;\n"
"    color: #333333 !important;\n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    text-align: left;\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    margin-top: 5px;\n"
"}\n"
"QPushButton#btnExport:hover, QPushButton#btnFichePaie:hover {\n"
"    background-color: #e3f2fd;\n"
"    border: 1px solid #3498db;\n"
"    color: #0f2b4c !important;\n"
"}\n"
"\n"
"QPushButton#btnSave, QPushButton#btnAjouter, QPushButton#btnNouveau {\n"
"    background-color: #28a745;\n"
"    color: white !important;\n"
"    border-radius: 5px;\n"
"    padding: 8px 15px;\n"
"    font-weight:"
                        " bold;\n"
"    border: none;\n"
"}\n"
"QPushButton#btnSave:hover, QPushButton#btnAjouter:hover, QPushButton#btnNouveau:hover {\n"
"    background-color: #218838;\n"
"}\n"
"QPushButton#btnNouveau {\n"
"    background-color: #0f2b4c;\n"
"}\n"
"QPushButton#btnNouveau:hover {\n"
"    background-color: #1a4270;\n"
"}\n"
"\n"
"QPushButton#btnAnnuler, QPushButton#btnAnnuler_Ajout {\n"
"    background-color: #6c757d;\n"
"    color: white !important;\n"
"    border-radius: 5px;\n"
"    padding: 8px 15px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}\n"
"QPushButton#btnAnnuler:hover, QPushButton#btnAnnuler_Ajout:hover {\n"
"    background-color: #5a6268;\n"
"}\n"
"\n"
"QPushButton#btnDelete {\n"
"    background-color: #dc3545;\n"
"    color: white !important;\n"
"    border-radius: 5px;\n"
"    padding: 8px 15px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}\n"
"QPushButton#btnDelete:hover {\n"
"    background-color: #c82333;\n"
"}\n"
"\n"
"QPushButton#btnUploadPhoto, QPushButton#btnUploadPhoto_Ajout {"
                        "\n"
"    background-color: #ffffff;\n"
"    color: #0f2b4c !important;\n"
"    border: 1px dashed #0f2b4c;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    font-weight: bold;\n"
"    margin-top: 5px;\n"
"}\n"
"QPushButton#btnUploadPhoto:hover, QPushButton#btnUploadPhoto_Ajout:hover {\n"
"    background-color: #e3f2fd;\n"
"    border: 1px solid #0f2b4c;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: #f4f6f9;\n"
"    alternate-background-color: #e8ebf0;\n"
"    color: #000000 !important;\n"
"    gridline-color: transparent;\n"
"    border: 1px solid #dce1e6;\n"
"    border-radius: 8px;\n"
"    font-size: 13px;\n"
"}\n"
"QTableWidget::item {\n"
"    color: #000000 !important;\n"
"    padding: 5px;\n"
"    border-bottom: 1px solid #e0e6ed;\n"
"}\n"
"QTableWidget::item:selected {\n"
"    background-color: #e3f2fd;\n"
"    color: #0f2b4c !important;\n"
"}\n"
"QHeaderView::section {\n"
"    background-color: #0f2b4c;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    border: none;\n"
"    font-weig"
                        "ht: bold;\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}\n"
"\n"
"QComboBox {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"}\n"
"QComboBox:focus {\n"
"    border: 1px solid #3498db;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    selection-background-color: #0f2b4c;\n"
"    selection-color: #ffffff;\n"
"    border: 1px solid #cccccc;\n"
"}\n"
"\n"
"QLabel#imageLabel, QLabel#imageLabel_2 {\n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 10px;\n"
"    background-color: #f4f6f9;\n"
"    color: #888888 !important;\n"
"}\n"
"\n"
"QTabWidget::pane { border: none; }\n"
"QTabBar::tab {\n"
"    background: #e0e4e8;\n"
"    color: #333 !"
                        "important;\n"
"    padding: 8px 20px;\n"
"    margin-right: 2px;\n"
"}\n"
"QTabBar::tab:selected {\n"
"    background: #0f2b4c;\n"
"    color: white !important;\n"
"}\n"
"\n"
"QLabel#lblUserName, QLabel#lblUserName_Modif, QLabel#lblUserName_Ajout {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #0f2b4c !important;\n"
"}\n"
"QLabel#lblUserRole, QLabel#lblUserRole_Modif, QLabel#lblUserRole_Ajout {\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    color: #28a745 !important;\n"
"    margin-top: -2px;\n"
"}\n"
"\n"
"/* Style Sp\303\251cifique pour l'onglet Mission */\n"
"QPushButton#btnAnalyser {\n"
"    background-color: #6c5ce7;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 12px;\n"
"    border-radius: 6px;\n"
"}\n"
"QPushButton#btnAnalyser:hover {\n"
"    background-color: #5b4cc4;\n"
"}\n"
"QLabel#lblTitreMission {\n"
"    font-size: 16px;\n"
"    color: #0f2b4c !important;\n"
"}\n"
"QLabel#lblResultat {\n"
"    font-size: 14px;\n"
"    color: #27ae60 !important"
                        ";\n"
"}\n"
"\n"
"/* Style pour l'onglet Pointage */\n"
"QLabel#lblStatutRFID {\n"
"    background-color: #ecf0f1;\n"
"    color: #7f8c8d;\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    border-radius: 10px;\n"
"    padding: 20px;\n"
"    border: 2px dashed #bdc3c7;\n"
"}\n"
"QPushButton#btnSimulerBadge {\n"
"    background-color: #e67e22;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"    margin-top: 10px;\n"
"}\n"
"QPushButton#btnSimulerBadge:hover {\n"
"    background-color: #d35400;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    border: 1px solid #cccccc;\n"
"    height: 8px;\n"
"    background: #e0e0e0;\n"
"    margin: 2px 0;\n"
"    border-radius: 4px;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background: #0f2b4c;\n"
"    border: 1px solid #0f2b4c;\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    margin: -6px 0;\n"
"    border-radius: 9px;\n"
"}\n"
"/* ======================================================= */\n"
"/* STYLE UN"
                        "IFI\303\211 POUR LES 5 BOUTONS PRINCIPAUX              */\n"
"/* ======================================================= */\n"
"\n"
"/* 1. Style de base pour les deux boutons du haut ET les trois du bas */\n"
"QPushButton#btnFichePaie, QPushButton#btnExport,\n"
"QPushButton#btnGoMission, QPushButton#btnGoPointage, QPushButton#btnGoStats {\n"
"    background-color: #ffffff;  /* Fond blanc */\n"
"    color: #333333;             /* Texte gris fonc\303\251 (le standard pro) */\n"
"    border: 1px solid #dcdcdc;  /* Bordure grise subtile */\n"
"    border-radius: 8px;         /* Coins joliment arrondis */\n"
"    padding: 15px 20px;         /* Espace int\303\251rieur confortable */\n"
"    font-size: 14px;            /* Taille de texte lisible */\n"
"    font-weight: bold;          /* Texte en gras pour l'importance */\n"
"    text-align: left;           /* Alignement du texte */\n"
"}\n"
"\n"
"/* 2. Effet quand la souris passe dessus (Hover) pour les 5 boutons */\n"
"QPushButton#btnFichePaie:hover, QPushButton#btn"
                        "Export:hover,\n"
"QPushButton#btnGoMission:hover, QPushButton#btnGoPointage:hover, QPushButton#btnGoStats:hover {\n"
"    background-color: #f0f8ff;  /* Fond bleu tr\303\250s p\303\242le au survol */\n"
"    border: 1px solid #3498db;  /* La bordure devient bleue */\n"
"    color: #000000;             /* Le texte devient noir pur */\n"
"}\n"
"\n"
"/* 3. Effet quand on clique dessus (Pressed) pour les 5 boutons */\n"
"QPushButton#btnFichePaie:pressed, QPushButton#btnExport:pressed,\n"
"QPushButton#btnGoMission:pressed, QPushButton#btnGoPointage:pressed, QPushButton#btnGoStats:pressed {\n"
"    background-color: #e1ecf4;  /* Fond un peu plus fonc\303\251 au clic */\n"
"    border: 1px solid #2980b9;\n"
"}\n"
"/* Style pour les boutons de RETOUR dans les pages Mission, Pointage et Stats */\n"
"QPushButton#btnAnnulerMission,\n"
"QPushButton#btnAnnulerPointage,\n"
"QPushButton#btnAnnulerStats {\n"
"    background-color: #6c757d;  /* Gris fonc\303\251 standard pour \"Annuler/Retour\" */\n"
"    color: white;        "
                        "       /* Texte blanc */\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"    min-width: 200px;           /* Largeur minimale pour \303\252tre bien visible */\n"
"    margin-top: 20px;           /* Un peu d'espace au-dessus */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QPushButton#btnAnnulerMission:hover,\n"
"QPushButton#btnAnnulerPointage:hover,\n"
"QPushButton#btnAnnulerStats:hover {\n"
"    background-color: #5a6268;  /* Gris un peu plus fonc\303\251 */\n"
"}\n"
"/* ======================================================= */\n"
"/* 1. CORRECTION DES BOUTONS DE RETOUR (Pages internes)    */\n"
"/* ======================================================= */\n"
"/* Cela rendra les boutons \"Retour\" bien visibles en gris fonc\303\251 */\n"
"QPushButton#btnAnnulerMission,\n"
"QPushButton#btnAnnulerPointage,\n"
"QPushButton#btnAnnulerStats {\n"
"    background-color: #6c757d;  /* Gris fonc\303\251 */\n"
"    color: white !important;"
                        "    /* Texte BLANC forc\303\251 */\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 25px;         /* Plus large pour \303\252tre cliquable */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"    margin-top: 15px;           /* Espace au dessus */\n"
"    min-width: 150px;           /* Largeur minimale */\n"
"}\n"
"\n"
"QPushButton#btnAnnulerMission:hover,\n"
"QPushButton#btnAnnulerPointage:hover,\n"
"QPushButton#btnAnnulerStats:hover {\n"
"    background-color: #5a6268;  /* Gris plus fonc\303\251 au survol */\n"
"}\n"
"\n"
"/* ======================================================= */\n"
"/* 2. CORRECTION DE LA BOITE DE DIALOGUE (Supprimer)       */\n"
"/* ======================================================= */\n"
"/* Cela corrige les boutons \"Yes/No\" illisibles */\n"
"QMessageBox {\n"
"    background-color: white;\n"
"}\n"
"\n"
"QMessageBox QPushButton {\n"
"    background-color: #0f2b4c;  /* Bleu fonc\303\251 */\n"
"    color: white !important;    /* Texte blanc */\n"
"    b"
                        "order-radius: 5px;\n"
"    padding: 6px 20px;\n"
"    min-width: 80px;            /* Taille correcte */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QMessageBox QPushButton:hover {\n"
"    background-color: #1a4270;  /* Bleu plus clair au survol */\n"
"}\n"
"\n"
"/* ======================================================= */\n"
"/* 3. UNIFICATION DES 5 BOUTONS DU DASHBOARD (Accueil)     */\n"
"/* ======================================================= */\n"
"/* Pour que les 3 boutons du bas ressemblent \303\240 ceux du haut */\n"
"QPushButton#btnFichePaie, QPushButton#btnExport,\n"
"QPushButton#btnGoMission, QPushButton#btnGoPointage, QPushButton#btnGoStats {\n"
"    background-color: #ffffff;\n"
"    color: #333333 !important;  /* Gris fonc\303\251 lisible */\n"
"    border: 1px solid #dcdcdc;\n"
"    border-radius: 8px;\n"
"    padding: 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    text-align: center;         /* Centr\303\251 ou left selon pr\303\251f\303\251rence */\n"
"}\n"
"\n"
"QPushButto"
                        "n#btnFichePaie:hover, QPushButton#btnExport:hover,\n"
"QPushButton#btnGoMission:hover, QPushButton#btnGoPointage:hover, QPushButton#btnGoStats:hover {\n"
"    background-color: #e3f2fd;\n"
"    border: 1px solid #3498db;\n"
"    color: #000000 !important;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_Main = new QHBoxLayout(centralwidget);
        horizontalLayout_Main->setSpacing(0);
        horizontalLayout_Main->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Main->setObjectName("horizontalLayout_Main");
        sidebarFrame = new QFrame(centralwidget);
        sidebarFrame->setObjectName("sidebarFrame");
        sidebarFrame->setMinimumSize(QSize(220, 0));
        sidebarLayout = new QVBoxLayout(sidebarFrame);
        sidebarLayout->setObjectName("sidebarLayout");
        label_logo = new QLabel(sidebarFrame);
        label_logo->setObjectName("label_logo");
        label_logo->setMaximumSize(QSize(16777215, 100));
        label_logo->setScaledContents(true);
        label_logo->setAlignment(Qt::AlignCenter);

        sidebarLayout->addWidget(label_logo);

        btnAccueil = new QPushButton(sidebarFrame);
        btnAccueil->setObjectName("btnAccueil");

        sidebarLayout->addWidget(btnAccueil);

        btnProduits = new QPushButton(sidebarFrame);
        btnProduits->setObjectName("btnProduits");

        sidebarLayout->addWidget(btnProduits);

        btnClients = new QPushButton(sidebarFrame);
        btnClients->setObjectName("btnClients");

        sidebarLayout->addWidget(btnClients);

        btnMaintenance = new QPushButton(sidebarFrame);
        btnMaintenance->setObjectName("btnMaintenance");

        sidebarLayout->addWidget(btnMaintenance);

        btnPrediction = new QPushButton(sidebarFrame);
        btnPrediction->setObjectName("btnPrediction");

        sidebarLayout->addWidget(btnPrediction);

        btnAlerts = new QPushButton(sidebarFrame);
        btnAlerts->setObjectName("btnAlerts");

        sidebarLayout->addWidget(btnAlerts);

        verticalSpacer_sidebar = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sidebarLayout->addItem(verticalSpacer_sidebar);


        horizontalLayout_Main->addWidget(sidebarFrame);

        mainVerticalLayout = new QVBoxLayout();
        mainVerticalLayout->setSpacing(0);
        mainVerticalLayout->setObjectName("mainVerticalLayout");
        headerBar = new QFrame(centralwidget);
        headerBar->setObjectName("headerBar");
        headerBar->setMinimumSize(QSize(0, 60));
        headerLayout = new QHBoxLayout(headerBar);
        headerLayout->setObjectName("headerLayout");
        headerTitle = new QLabel(headerBar);
        headerTitle->setObjectName("headerTitle");

        headerLayout->addWidget(headerTitle);

        horizontalSpacer_header = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(horizontalSpacer_header);

        user = new QLabel(headerBar);
        user->setObjectName("user");

        headerLayout->addWidget(user);


        mainVerticalLayout->addWidget(headerBar);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageInventaire = new QWidget();
        pageInventaire->setObjectName("pageInventaire");
        dashboardLayout = new QHBoxLayout(pageInventaire);
        dashboardLayout->setSpacing(25);
        dashboardLayout->setContentsMargins(25, 25, 25, 25);
        dashboardLayout->setObjectName("dashboardLayout");
        tableCard = new QFrame(pageInventaire);
        tableCard->setObjectName("tableCard");
        tableCardLayout = new QVBoxLayout(tableCard);
        tableCardLayout->setContentsMargins(20, 20, 20, 20);
        tableCardLayout->setObjectName("tableCardLayout");
        tableHeaderActions = new QHBoxLayout();
        tableHeaderActions->setObjectName("tableHeaderActions");
        lblTableTitle = new QLabel(tableCard);
        lblTableTitle->setObjectName("lblTableTitle");

        tableHeaderActions->addWidget(lblTableTitle);

        horizontalSpacer_table = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        tableHeaderActions->addItem(horizontalSpacer_table);

        btnNew = new QPushButton(tableCard);
        btnNew->setObjectName("btnNew");

        tableHeaderActions->addWidget(btnNew);


        tableCardLayout->addLayout(tableHeaderActions);

        tableWidget = new QTableWidget(tableCard);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setAutoFillBackground(true);

        tableCardLayout->addWidget(tableWidget);


        dashboardLayout->addWidget(tableCard);

        rightColumn = new QVBoxLayout();
        rightColumn->setSpacing(20);
        rightColumn->setObjectName("rightColumn");
        statsBox = new QFrame(pageInventaire);
        statsBox->setObjectName("statsBox");
        statsLayout = new QVBoxLayout(statsBox);
        statsLayout->setObjectName("statsLayout");
        lblStatsTitle = new QLabel(statsBox);
        lblStatsTitle->setObjectName("lblStatsTitle");

        statsLayout->addWidget(lblStatsTitle);

        totalStock = new QLabel(statsBox);
        totalStock->setObjectName("totalStock");

        statsLayout->addWidget(totalStock);

        lblCriticalStock = new QLabel(statsBox);
        lblCriticalStock->setObjectName("lblCriticalStock");

        statsLayout->addWidget(lblCriticalStock);


        rightColumn->addWidget(statsBox);

        orderBox = new QFrame(pageInventaire);
        orderBox->setObjectName("orderBox");
        orderLayout = new QVBoxLayout(orderBox);
        orderLayout->setObjectName("orderLayout");
        lblOrderTitle = new QLabel(orderBox);
        lblOrderTitle->setObjectName("lblOrderTitle");

        orderLayout->addWidget(lblOrderTitle);

        lblOrderSummary = new QLabel(orderBox);
        lblOrderSummary->setObjectName("lblOrderSummary");

        orderLayout->addWidget(lblOrderSummary);

        btnOrder = new QPushButton(orderBox);
        btnOrder->setObjectName("btnOrder");

        orderLayout->addWidget(btnOrder);


        rightColumn->addWidget(orderBox);

        btnPrediction1 = new QPushButton(pageInventaire);
        btnPrediction1->setObjectName("btnPrediction1");

        rightColumn->addWidget(btnPrediction1);

        btnAlerts1 = new QPushButton(pageInventaire);
        btnAlerts1->setObjectName("btnAlerts1");

        rightColumn->addWidget(btnAlerts1);

        verticalSpacer_right = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        rightColumn->addItem(verticalSpacer_right);


        dashboardLayout->addLayout(rightColumn);

        dashboardLayout->setStretch(0, 3);
        dashboardLayout->setStretch(1, 1);
        stackedWidget->addWidget(pageInventaire);
        pageAjouter = new QWidget();
        pageAjouter->setObjectName("pageAjouter");
        layoutAjouter = new QVBoxLayout(pageAjouter);
        layoutAjouter->setObjectName("layoutAjouter");
        addCard = new QFrame(pageAjouter);
        addCard->setObjectName("addCard");
        addCard->setMinimumSize(QSize(600, 0));
        addCardLayout = new QVBoxLayout(addCard);
        addCardLayout->setSpacing(20);
        addCardLayout->setContentsMargins(40, 40, 40, 40);
        addCardLayout->setObjectName("addCardLayout");
        lblAddTitle = new QLabel(addCard);
        lblAddTitle->setObjectName("lblAddTitle");

        addCardLayout->addWidget(lblAddTitle);

        layoutRefNom_add = new QHBoxLayout();
        layoutRefNom_add->setSpacing(15);
        layoutRefNom_add->setObjectName("layoutRefNom_add");
        inputRef_add = new QLineEdit(addCard);
        inputRef_add->setObjectName("inputRef_add");

        layoutRefNom_add->addWidget(inputRef_add);

        inputNom_add = new QLineEdit(addCard);
        inputNom_add->setObjectName("inputNom_add");

        layoutRefNom_add->addWidget(inputNom_add);


        addCardLayout->addLayout(layoutRefNom_add);

        layoutStock_add = new QHBoxLayout();
        layoutStock_add->setSpacing(15);
        layoutStock_add->setObjectName("layoutStock_add");
        inputStock_add = new QLineEdit(addCard);
        inputStock_add->setObjectName("inputStock_add");

        layoutStock_add->addWidget(inputStock_add);

        sliderStock_add = new QSlider(addCard);
        sliderStock_add->setObjectName("sliderStock_add");
        sliderStock_add->setOrientation(Qt::Horizontal);
        sliderStock_add->setMaximum(500);

        layoutStock_add->addWidget(sliderStock_add);


        addCardLayout->addLayout(layoutStock_add);

        layoutPrix_add = new QHBoxLayout();
        layoutPrix_add->setSpacing(15);
        layoutPrix_add->setObjectName("layoutPrix_add");
        inputPrix_add = new QLineEdit(addCard);
        inputPrix_add->setObjectName("inputPrix_add");

        layoutPrix_add->addWidget(inputPrix_add);

        sliderPrix_add = new QSlider(addCard);
        sliderPrix_add->setObjectName("sliderPrix_add");
        sliderPrix_add->setOrientation(Qt::Horizontal);
        sliderPrix_add->setMaximum(500);

        layoutPrix_add->addWidget(sliderPrix_add);


        addCardLayout->addLayout(layoutPrix_add);

        inputFournisseur_add = new QLineEdit(addCard);
        inputFournisseur_add->setObjectName("inputFournisseur_add");

        addCardLayout->addWidget(inputFournisseur_add);

        addActions = new QHBoxLayout();
        addActions->setObjectName("addActions");
        btnCancel_add = new QPushButton(addCard);
        btnCancel_add->setObjectName("btnCancel_add");

        addActions->addWidget(btnCancel_add);

        btnSave_add = new QPushButton(addCard);
        btnSave_add->setObjectName("btnSave_add");

        addActions->addWidget(btnSave_add);


        addCardLayout->addLayout(addActions);


        layoutAjouter->addWidget(addCard);

        stackedWidget->addWidget(pageAjouter);
        pageModifier = new QWidget();
        pageModifier->setObjectName("pageModifier");
        layoutModifier = new QVBoxLayout(pageModifier);
        layoutModifier->setObjectName("layoutModifier");
        modifyCard = new QFrame(pageModifier);
        modifyCard->setObjectName("modifyCard");
        modifyCard->setMinimumSize(QSize(600, 0));
        modifyCardLayout = new QVBoxLayout(modifyCard);
        modifyCardLayout->setSpacing(20);
        modifyCardLayout->setContentsMargins(40, 40, 40, 40);
        modifyCardLayout->setObjectName("modifyCardLayout");
        lblModTitle = new QLabel(modifyCard);
        lblModTitle->setObjectName("lblModTitle");

        modifyCardLayout->addWidget(lblModTitle);

        layoutRefNom_mod = new QHBoxLayout();
        layoutRefNom_mod->setSpacing(15);
        layoutRefNom_mod->setObjectName("layoutRefNom_mod");
        inputRef_mod = new QLineEdit(modifyCard);
        inputRef_mod->setObjectName("inputRef_mod");

        layoutRefNom_mod->addWidget(inputRef_mod);

        inputNom_mod = new QLineEdit(modifyCard);
        inputNom_mod->setObjectName("inputNom_mod");

        layoutRefNom_mod->addWidget(inputNom_mod);


        modifyCardLayout->addLayout(layoutRefNom_mod);

        layoutStock_mod = new QHBoxLayout();
        layoutStock_mod->setSpacing(15);
        layoutStock_mod->setObjectName("layoutStock_mod");
        inputStock_mod = new QLineEdit(modifyCard);
        inputStock_mod->setObjectName("inputStock_mod");

        layoutStock_mod->addWidget(inputStock_mod);

        sliderStock_mod = new QSlider(modifyCard);
        sliderStock_mod->setObjectName("sliderStock_mod");
        sliderStock_mod->setOrientation(Qt::Horizontal);
        sliderStock_mod->setMaximum(500);

        layoutStock_mod->addWidget(sliderStock_mod);


        modifyCardLayout->addLayout(layoutStock_mod);

        layoutPrix_mod = new QHBoxLayout();
        layoutPrix_mod->setSpacing(15);
        layoutPrix_mod->setObjectName("layoutPrix_mod");
        inputPrix_mod = new QLineEdit(modifyCard);
        inputPrix_mod->setObjectName("inputPrix_mod");

        layoutPrix_mod->addWidget(inputPrix_mod);

        sliderPrix_mod = new QSlider(modifyCard);
        sliderPrix_mod->setObjectName("sliderPrix_mod");
        sliderPrix_mod->setOrientation(Qt::Horizontal);
        sliderPrix_mod->setMaximum(500);

        layoutPrix_mod->addWidget(sliderPrix_mod);


        modifyCardLayout->addLayout(layoutPrix_mod);

        inputFournisseur_mod = new QLineEdit(modifyCard);
        inputFournisseur_mod->setObjectName("inputFournisseur_mod");

        modifyCardLayout->addWidget(inputFournisseur_mod);

        modifyActions = new QHBoxLayout();
        modifyActions->setObjectName("modifyActions");
        btnCancel_mod = new QPushButton(modifyCard);
        btnCancel_mod->setObjectName("btnCancel_mod");

        modifyActions->addWidget(btnCancel_mod);

        btnSave_mod = new QPushButton(modifyCard);
        btnSave_mod->setObjectName("btnSave_mod");

        modifyActions->addWidget(btnSave_mod);


        modifyCardLayout->addLayout(modifyActions);


        layoutModifier->addWidget(modifyCard);

        stackedWidget->addWidget(pageModifier);

        mainVerticalLayout->addWidget(stackedWidget);


        horizontalLayout_Main->addLayout(mainVerticalLayout);

        horizontalLayout_Main->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        sidebarFrame->setStyleSheet(QCoreApplication::translate("MainWindow", "#sidebarFrame { background-color: #0F2A4A; border: none; }\n"
"QPushButton { background-color: transparent; color: #A0AEC0; border: none; text-align: left; padding: 15px 25px; font-weight: 500; font-size: 14px; }\n"
"QPushButton:hover { color: white; background-color: #1A365D; }\n"
"#btnProduits { background-color: #3182CE; color: white; border-radius: 8px; margin: 10px; }", nullptr));
        label_logo->setText(QString());
        btnAccueil->setText(QCoreApplication::translate("MainWindow", "  Accueil", nullptr));
        btnProduits->setText(QCoreApplication::translate("MainWindow", "  Produits", nullptr));
        btnClients->setText(QCoreApplication::translate("MainWindow", "  Clients", nullptr));
        btnMaintenance->setText(QCoreApplication::translate("MainWindow", "  Maintenance", nullptr));
        btnPrediction->setText(QCoreApplication::translate("MainWindow", "  Pr\303\251dictions", nullptr));
        btnAlerts->setText(QCoreApplication::translate("MainWindow", "  Alertes", nullptr));
        headerBar->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: white; border-bottom: 1px solid #EDF2F7;", nullptr));
        headerTitle->setStyleSheet(QCoreApplication::translate("MainWindow", "color: #3182CE; font-weight: bold; margin-left: 20px;", nullptr));
        headerTitle->setText(QCoreApplication::translate("MainWindow", "Produits", nullptr));
        user->setStyleSheet(QCoreApplication::translate("MainWindow", "color: #4A5568; font-size: 12px; margin-right: 20px;", nullptr));
        user->setText(QCoreApplication::translate("MainWindow", "Responsable du stock | Ahmed El Mokhtar", nullptr));
        tableCard->setStyleSheet(QCoreApplication::translate("MainWindow", "#tableCard { background-color: white; border-radius: 12px; border: 1px solid #E2E8F0; }", nullptr));
        lblTableTitle->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 18px; font-weight: bold;", nullptr));
        lblTableTitle->setText(QCoreApplication::translate("MainWindow", "Tableau de Bord", nullptr));
        btnNew->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #3182CE; color: white; padding: 10px 20px; border-radius: 8px; font-weight: bold;", nullptr));
        btnNew->setText(QCoreApplication::translate("MainWindow", "+ Nouveau Composant", nullptr));
        statsBox->setStyleSheet(QCoreApplication::translate("MainWindow", "background: white; border-radius: 12px; border: 1px solid #E2E8F0;", nullptr));
        lblStatsTitle->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 11px; color: #718096;", nullptr));
        lblStatsTitle->setText(QCoreApplication::translate("MainWindow", "STATISTIQUES", nullptr));
        totalStock->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 22px; font-weight: bold;", nullptr));
        totalStock->setText(QCoreApplication::translate("MainWindow", "85,400 TND", nullptr));
        lblCriticalStock->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 14px; color: #E53E3E; font-weight: 600; margin-top: 5px;", nullptr));
        lblCriticalStock->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        orderBox->setStyleSheet(QCoreApplication::translate("MainWindow", "background: white; border-radius: 12px; border: 1px solid #E2E8F0;", nullptr));
        lblOrderTitle->setText(QCoreApplication::translate("MainWindow", "BESOIN DE COMMANDE", nullptr));
        lblOrderSummary->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 13px; color: #718096; margin-bottom: 5px;", nullptr));
        lblOrderSummary->setText(QCoreApplication::translate("MainWindow", "Analyse en cours...", nullptr));
        btnOrder->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #3182CE; color: white; padding: 10px; border-radius: 8px;", nullptr));
        btnOrder->setText(QCoreApplication::translate("MainWindow", "G\303\251n\303\251rer Commande", nullptr));
        btnPrediction1->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #6c5ce7; color: white; padding: 15px; border-radius: 12px; font-weight: bold; text-align: left; font-size: 14px;", nullptr));
        btnPrediction1->setText(QCoreApplication::translate("MainWindow", "Pr\303\251dictions de Stock", nullptr));
        btnAlerts1->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #e67e22; color: white; padding: 15px; border-radius: 12px; font-weight: bold; text-align: left; font-size: 14px;", nullptr));
        btnAlerts1->setText(QCoreApplication::translate("MainWindow", "Alertes \303\211ch\303\251ance", nullptr));
        addCard->setStyleSheet(QCoreApplication::translate("MainWindow", "#addCard { background: white; border-radius: 15px; border: 1px solid #E2E8F0; } QLineEdit { padding: 15px; border-radius: 8px; background: #F8FAFC; }", nullptr));
        lblAddTitle->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 24px; font-weight: bold; color: #1A365D;", nullptr));
        lblAddTitle->setText(QCoreApplication::translate("MainWindow", "Ajouter un Nouveau Composant", nullptr));
        inputRef_add->setPlaceholderText(QCoreApplication::translate("MainWindow", "R\303\251f\303\251rence (ex: REF-001)", nullptr));
        inputNom_add->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nom du Composant", nullptr));
        inputStock_add->setPlaceholderText(QCoreApplication::translate("MainWindow", "Stock Initial", nullptr));
        inputPrix_add->setPlaceholderText(QCoreApplication::translate("MainWindow", "Prix Unitaire (TND)", nullptr));
        inputFournisseur_add->setPlaceholderText(QCoreApplication::translate("MainWindow", "Fournisseur", nullptr));
        btnCancel_add->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #dc3545; color: white; padding: 12px; border-radius: 8px;", nullptr));
        btnCancel_add->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        btnSave_add->setStyleSheet(QCoreApplication::translate("MainWindow", "background: #3182CE; color: white; padding: 12px; border-radius: 8px;", nullptr));
        btnSave_add->setText(QCoreApplication::translate("MainWindow", "Enregistrer", nullptr));
        modifyCard->setStyleSheet(QCoreApplication::translate("MainWindow", "#modifyCard { background: white; border-radius: 15px; border: 1px solid #E2E8F0; } QLineEdit { padding: 15px; border-radius: 8px; background: #F8FAFC; }", nullptr));
        lblModTitle->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 24px; font-weight: bold; color: #1A365D;", nullptr));
        lblModTitle->setText(QCoreApplication::translate("MainWindow", "Modifier le Composant", nullptr));
        btnCancel_mod->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #dc3545; color: white; padding: 12px; border-radius: 8px;", nullptr));
        btnCancel_mod->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        btnSave_mod->setStyleSheet(QCoreApplication::translate("MainWindow", "background: #48BB78; color: white; padding: 12px; border-radius: 8px;", nullptr));
        btnSave_mod->setText(QCoreApplication::translate("MainWindow", "Mettre \303\240 jour", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
