/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_Main;
    QFrame *sidebar;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_logo;
    QPushButton *btnAccueil;
    QPushButton *btnStock;
    QPushButton *btnProduits;
    QPushButton *btnEmployes;
    QPushButton *btnStatistiques;
    QPushButton *btnMaintenance;
    QSpacerItem *verticalSpacer;
    QWidget *contentArea;
    QVBoxLayout *verticalLayout_Main;
    QStackedWidget *stackedWidget;
    QWidget *affichage;
    QHBoxLayout *horizontalLayout_Split;
    QVBoxLayout *verticalLayout_Left;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *label_Title;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNouveau;
    QSpacerItem *horizontalSpacer_User;
    QFrame *frameUser;
    QVBoxLayout *verticalLayout_User;
    QLabel *lblUserName;
    QLabel *lblUserRole;
    QHBoxLayout *horizontalLayout_Search;
    QLineEdit *txtSearch;
    QComboBox *cbSort;
    QTableWidget *tableEmployes;
    QVBoxLayout *verticalLayout_Right;
    QLabel *label_StatTitle;
    QFrame *statCard;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QLabel *lblStatNumber;
    QFrame *statCard_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLabel *lblStatWorkload;
    QFrame *statCard_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    QLabel *lblStatAvailability;
    QFrame *actionCard;
    QVBoxLayout *verticalLayout_Actions;
    QLabel *label_Actions;
    QPushButton *btnExport;
    QPushButton *btnFichePaie;
    QPushButton *btnGoMission;
    QPushButton *btnGoPointage;
    QPushButton *btnGoStats;
    QSpacerItem *verticalSpacer_Right;
    QWidget *modification;
    QGridLayout *gridLayout_Modif;
    QHBoxLayout *headerLayout_Modif;
    QSpacerItem *horizontalSpacer_HeaderModif;
    QFrame *frameUser_Modif;
    QVBoxLayout *verticalLayout_User_Modif;
    QLabel *lblUserName_Modif;
    QLabel *lblUserRole_Modif;
    QFrame *cardFrame;
    QHBoxLayout *horizontalLayout_ModifFrame;
    QVBoxLayout *verticalLayout_Photo_Modif;
    QLabel *imageLabel;
    QPushButton *btnUploadPhoto;
    QSpacerItem *verticalSpacer_Photo;
    QVBoxLayout *verticalLayout_FormRight;
    QFormLayout *formLayout_Modif;
    QLabel *lblMatricule;
    QLineEdit *txtMatricule;
    QLabel *lblNom;
    QLineEdit *txtNom;
    QLabel *lblSpecialite;
    QComboBox *cbSpecialite;
    QLabel *lblStatut;
    QComboBox *cbStatut;
    QLabel *lblSalaire_Modif;
    QVBoxLayout *verticalLayout_Salaire_Modif;
    QSlider *sliderSalaire_Modif;
    QLabel *lblValSalaire_Modif;
    QLabel *label;
    QLineEdit *txtEmailModif;
    QSpacerItem *verticalSpacer_Form;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_Buttons;
    QPushButton *btnAnnuler;
    QPushButton *btnSave;
    QWidget *ajout;
    QGridLayout *gridLayout_Ajout;
    QHBoxLayout *headerLayout_Ajout;
    QSpacerItem *horizontalSpacer_HeaderAjout;
    QFrame *frameUser_Ajout;
    QVBoxLayout *verticalLayout_User_Ajout;
    QLabel *lblUserName_Ajout;
    QLabel *lblUserRole_Ajout;
    QFrame *cardFrame_2;
    QHBoxLayout *horizontalLayout_AjoutFrame;
    QVBoxLayout *verticalLayout_Photo_Ajout;
    QLabel *imageLabel_2;
    QPushButton *btnUploadPhoto_Ajout;
    QSpacerItem *verticalSpacer_Photo_Ajout;
    QVBoxLayout *verticalLayout_FormRight_2;
    QFormLayout *formLayout_Ajout;
    QLabel *label_7;
    QLineEdit *txtNom_Ajout;
    QLabel *label_8;
    QComboBox *cbSpecialite_Ajout;
    QLabel *label_9;
    QComboBox *cbStatut_Ajout;
    QLabel *lblSalaire_Ajout;
    QVBoxLayout *verticalLayout_Salaire_Ajout;
    QSlider *sliderSalaire_Ajout;
    QLabel *lblValSalaire_Ajout;
    QLineEdit *txtEmailAjout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_Form_2;
    QHBoxLayout *horizontalLayout_Buttons_2;
    QSpacerItem *horizontalSpacer_Buttons_2;
    QPushButton *btnAnnuler_Ajout;
    QPushButton *btnAjouter;
    QWidget *mission;
    QVBoxLayout *verticalLayout_Mission;
    QLabel *lblTitreMission;
    QLineEdit *txtMission;
    QPushButton *btnAnalyser;
    QLabel *lblResultat;
    QTableWidget *tableResultat;
    QPushButton *btnAnnulerMission;
    QSpacerItem *verticalSpacer_Mission;
    QWidget *pointage;
    QVBoxLayout *verticalLayout_Pointage;
    QLabel *lblTitrePointage;
    QLabel *lblStatutRFID;
    QPushButton *btnSimulerBadge;
    QLabel *lblLog;
    QTableWidget *tablePointage;
    QPushButton *btnAnnulerPointage;
    QSpacerItem *verticalSpacer_Pointage;
    QWidget *statistiques;
    QVBoxLayout *verticalLayout_StatsPage;
    QHBoxLayout *horizontalLayout_Stats;
    QChartView *chartViewAbsence;
    QChartView *chartViewWorkload;
    QPushButton *btnAnnulerStats;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1100, 750);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"QMainWindow, QWidget {\n"
"    background-color: #f4f6f9; \n"
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
"    background-color: transparent; \n"
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
"QFrame#sidebar QPushButton:hover {\n"
"    background-color: #1a4270;\n"
"    color: white;\n"
"    border-left: 3px solid #3498db;\n"
"}\n"
"\n"
"QFrame#statCard, QFrame#statCard_2, QFrame#statCard_3, QFrame#actionCard, QFrame#cardFrame, QFrame#cardFrame_2 { \n"
""
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
"    font-weight: bold;\n"
"    border: none;\n"
""
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
"QPushButton#btnUploadPhoto, QPushButton#btnUploadPhoto_Ajout {\n"
"    background-color: #fffff"
                        "f;\n"
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
"    font-weight: bold;\n"
"    font-size: 13px"
                        ";\n"
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
"    color: #333 !important;\n"
"    padding: 8px 2"
                        "0px;\n"
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
"    color: #27ae60 !important;\n"
"}\n"
"\n"
"/* Style pour l'"
                        "onglet Pointage */\n"
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
"/* STYLE UNIFI\303\211 POUR LES 5 BOUTONS PR"
                        "INCIPAUX              */\n"
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
"QPushButton#btnFichePaie:hover, QPushButton#btnExport:hover,\n"
"QPushButton#btn"
                        "GoMission:hover, QPushButton#btnGoPointage:hover, QPushButton#btnGoStats:hover {\n"
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
"QPushButton#btnAnnulerMission, \n"
"QPushButton#btnAnnulerPointage, \n"
"QPushButton#btnAnnulerStats {\n"
"    background-color: #6c757d;  /* Gris fonc\303\251 standard pour \"Annuler/Retour\" */\n"
"    color: white;               /* Texte blanc */\n"
"  "
                        "  border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"    min-width: 200px;           /* Largeur minimale pour \303\252tre bien visible */\n"
"    margin-top: 20px;           /* Un peu d'espace au-dessus */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QPushButton#btnAnnulerMission:hover, \n"
"QPushButton#btnAnnulerPointage:hover, \n"
"QPushButton#btnAnnulerStats:hover {\n"
"    background-color: #5a6268;  /* Gris un peu plus fonc\303\251 */\n"
"}\n"
"/* ======================================================= */\n"
"/* 1. CORRECTION DES BOUTONS DE RETOUR (Pages internes)    */\n"
"/* ======================================================= */\n"
"/* Cela rendra les boutons \"Retour\" bien visibles en gris fonc\303\251 */\n"
"QPushButton#btnAnnulerMission, \n"
"QPushButton#btnAnnulerPointage, \n"
"QPushButton#btnAnnulerStats {\n"
"    background-color: #6c757d;  /* Gris fonc\303\251 */\n"
"    color: white !important;    /* Texte BLANC forc\303"
                        "\251 */\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 25px;         /* Plus large pour \303\252tre cliquable */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"    margin-top: 15px;           /* Espace au dessus */\n"
"    min-width: 150px;           /* Largeur minimale */\n"
"}\n"
"\n"
"QPushButton#btnAnnulerMission:hover, \n"
"QPushButton#btnAnnulerPointage:hover, \n"
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
"    border-radius: 5px;\n"
"  "
                        "  padding: 6px 20px;\n"
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
"QPushButton#btnFichePaie:hover, QPu"
                        "shButton#btnExport:hover,\n"
"QPushButton#btnGoMission:hover, QPushButton#btnGoPointage:hover, QPushButton#btnGoStats:hover {\n"
"    background-color: #e3f2fd;\n"
"    border: 1px solid #3498db;\n"
"    color: #000000 !important;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_Main = new QHBoxLayout(centralwidget);
        horizontalLayout_Main->setSpacing(0);
        horizontalLayout_Main->setObjectName("horizontalLayout_Main");
        horizontalLayout_Main->setContentsMargins(0, 0, 0, 0);
        sidebar = new QFrame(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setMinimumSize(QSize(250, 0));
        sidebar->setMaximumSize(QSize(250, 16777215));
        sidebar->setFrameShape(QFrame::Shape::StyledPanel);
        sidebar->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(sidebar);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_logo = new QLabel(sidebar);
        label_logo->setObjectName("label_logo");
        label_logo->setMinimumSize(QSize(0, 100));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/Gemini_Generated_Image_8k5i7p8k5i7p8k5i-removebg-preview (2).png")));
        label_logo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_logo);

        btnAccueil = new QPushButton(sidebar);
        btnAccueil->setObjectName("btnAccueil");

        verticalLayout_4->addWidget(btnAccueil);

        btnStock = new QPushButton(sidebar);
        btnStock->setObjectName("btnStock");

        verticalLayout_4->addWidget(btnStock);

        btnProduits = new QPushButton(sidebar);
        btnProduits->setObjectName("btnProduits");

        verticalLayout_4->addWidget(btnProduits);

        btnEmployes = new QPushButton(sidebar);
        btnEmployes->setObjectName("btnEmployes");

        verticalLayout_4->addWidget(btnEmployes);

        btnStatistiques = new QPushButton(sidebar);
        btnStatistiques->setObjectName("btnStatistiques");

        verticalLayout_4->addWidget(btnStatistiques);

        btnMaintenance = new QPushButton(sidebar);
        btnMaintenance->setObjectName("btnMaintenance");

        verticalLayout_4->addWidget(btnMaintenance);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_Main->addWidget(sidebar);

        contentArea = new QWidget(centralwidget);
        contentArea->setObjectName("contentArea");
        verticalLayout_Main = new QVBoxLayout(contentArea);
        verticalLayout_Main->setObjectName("verticalLayout_Main");
        stackedWidget = new QStackedWidget(contentArea);
        stackedWidget->setObjectName("stackedWidget");
        affichage = new QWidget();
        affichage->setObjectName("affichage");
        horizontalLayout_Split = new QHBoxLayout(affichage);
        horizontalLayout_Split->setObjectName("horizontalLayout_Split");
        verticalLayout_Left = new QVBoxLayout();
        verticalLayout_Left->setObjectName("verticalLayout_Left");
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setObjectName("horizontalLayout_Header");
        label_Title = new QLabel(affichage);
        label_Title->setObjectName("label_Title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setWeight(QFont::DemiBold);
        label_Title->setFont(font);

        horizontalLayout_Header->addWidget(label_Title);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer);

        btnNouveau = new QPushButton(affichage);
        btnNouveau->setObjectName("btnNouveau");
        btnNouveau->setMinimumSize(QSize(0, 40));
        btnNouveau->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_Header->addWidget(btnNouveau);

        horizontalSpacer_User = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer_User);

        frameUser = new QFrame(affichage);
        frameUser->setObjectName("frameUser");
        frameUser->setFrameShape(QFrame::Shape::NoFrame);
        verticalLayout_User = new QVBoxLayout(frameUser);
        verticalLayout_User->setSpacing(2);
        verticalLayout_User->setObjectName("verticalLayout_User");
        verticalLayout_User->setContentsMargins(0, 0, 5, 0);
        lblUserName = new QLabel(frameUser);
        lblUserName->setObjectName("lblUserName");
        lblUserName->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User->addWidget(lblUserName);

        lblUserRole = new QLabel(frameUser);
        lblUserRole->setObjectName("lblUserRole");
        lblUserRole->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User->addWidget(lblUserRole);


        horizontalLayout_Header->addWidget(frameUser);


        verticalLayout_Left->addLayout(horizontalLayout_Header);

        horizontalLayout_Search = new QHBoxLayout();
        horizontalLayout_Search->setObjectName("horizontalLayout_Search");
        txtSearch = new QLineEdit(affichage);
        txtSearch->setObjectName("txtSearch");
        txtSearch->setMinimumSize(QSize(0, 40));

        horizontalLayout_Search->addWidget(txtSearch);

        cbSort = new QComboBox(affichage);
        cbSort->addItem(QString());
        cbSort->addItem(QString());
        cbSort->setObjectName("cbSort");
        cbSort->setMinimumSize(QSize(180, 40));

        horizontalLayout_Search->addWidget(cbSort);


        verticalLayout_Left->addLayout(horizontalLayout_Search);

        tableEmployes = new QTableWidget(affichage);
        if (tableEmployes->columnCount() < 5)
            tableEmployes->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableEmployes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableEmployes->rowCount() < 4)
            tableEmployes->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableEmployes->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableEmployes->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableEmployes->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableEmployes->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableEmployes->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableEmployes->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableEmployes->setItem(0, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableEmployes->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableEmployes->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableEmployes->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableEmployes->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableEmployes->setItem(1, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableEmployes->setItem(1, 3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableEmployes->setItem(1, 4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableEmployes->setItem(2, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableEmployes->setItem(2, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableEmployes->setItem(2, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableEmployes->setItem(2, 3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        tableEmployes->setItem(2, 4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableEmployes->setItem(3, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableEmployes->setItem(3, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableEmployes->setItem(3, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableEmployes->setItem(3, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        tableEmployes->setItem(3, 4, __qtablewidgetitem28);
        tableEmployes->setObjectName("tableEmployes");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableEmployes->sizePolicy().hasHeightForWidth());
        tableEmployes->setSizePolicy(sizePolicy);
        tableEmployes->setAlternatingRowColors(true);
        tableEmployes->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableEmployes->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        tableEmployes->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        tableEmployes->setShowGrid(false);
        tableEmployes->horizontalHeader()->setStretchLastSection(true);
        tableEmployes->verticalHeader()->setVisible(false);

        verticalLayout_Left->addWidget(tableEmployes);


        horizontalLayout_Split->addLayout(verticalLayout_Left);

        verticalLayout_Right = new QVBoxLayout();
        verticalLayout_Right->setSpacing(20);
        verticalLayout_Right->setObjectName("verticalLayout_Right");
        verticalLayout_Right->setContentsMargins(15, -1, -1, -1);
        label_StatTitle = new QLabel(affichage);
        label_StatTitle->setObjectName("label_StatTitle");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(12);
        font1.setWeight(QFont::DemiBold);
        label_StatTitle->setFont(font1);

        verticalLayout_Right->addWidget(label_StatTitle);

        statCard = new QFrame(affichage);
        statCard->setObjectName("statCard");
        statCard->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_5 = new QVBoxLayout(statCard);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_10 = new QLabel(statCard);
        label_10->setObjectName("label_10");

        verticalLayout_5->addWidget(label_10);

        lblStatNumber = new QLabel(statCard);
        lblStatNumber->setObjectName("lblStatNumber");

        verticalLayout_5->addWidget(lblStatNumber);


        verticalLayout_Right->addWidget(statCard);

        statCard_2 = new QFrame(affichage);
        statCard_2->setObjectName("statCard_2");
        statCard_2->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_6 = new QVBoxLayout(statCard_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_12 = new QLabel(statCard_2);
        label_12->setObjectName("label_12");

        verticalLayout_6->addWidget(label_12);

        lblStatWorkload = new QLabel(statCard_2);
        lblStatWorkload->setObjectName("lblStatWorkload");

        verticalLayout_6->addWidget(lblStatWorkload);


        verticalLayout_Right->addWidget(statCard_2);

        statCard_3 = new QFrame(affichage);
        statCard_3->setObjectName("statCard_3");
        statCard_3->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_7 = new QVBoxLayout(statCard_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_14 = new QLabel(statCard_3);
        label_14->setObjectName("label_14");

        verticalLayout_7->addWidget(label_14);

        lblStatAvailability = new QLabel(statCard_3);
        lblStatAvailability->setObjectName("lblStatAvailability");
        lblStatAvailability->setStyleSheet(QString::fromUtf8("color: #27ae60 !important;"));

        verticalLayout_7->addWidget(lblStatAvailability);


        verticalLayout_Right->addWidget(statCard_3);

        actionCard = new QFrame(affichage);
        actionCard->setObjectName("actionCard");
        actionCard->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_Actions = new QVBoxLayout(actionCard);
        verticalLayout_Actions->setSpacing(15);
        verticalLayout_Actions->setObjectName("verticalLayout_Actions");
        label_Actions = new QLabel(actionCard);
        label_Actions->setObjectName("label_Actions");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(11);
        font2.setWeight(QFont::DemiBold);
        label_Actions->setFont(font2);

        verticalLayout_Actions->addWidget(label_Actions);

        btnExport = new QPushButton(actionCard);
        btnExport->setObjectName("btnExport");
        btnExport->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnExport);

        btnFichePaie = new QPushButton(actionCard);
        btnFichePaie->setObjectName("btnFichePaie");
        btnFichePaie->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnFichePaie);

        btnGoMission = new QPushButton(actionCard);
        btnGoMission->setObjectName("btnGoMission");
        btnGoMission->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnGoMission);

        btnGoPointage = new QPushButton(actionCard);
        btnGoPointage->setObjectName("btnGoPointage");
        btnGoPointage->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnGoPointage);

        btnGoStats = new QPushButton(actionCard);
        btnGoStats->setObjectName("btnGoStats");
        btnGoStats->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Actions->addWidget(btnGoStats);


        verticalLayout_Right->addWidget(actionCard);

        verticalSpacer_Right = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Right->addItem(verticalSpacer_Right);


        horizontalLayout_Split->addLayout(verticalLayout_Right);

        horizontalLayout_Split->setStretch(0, 3);
        horizontalLayout_Split->setStretch(1, 1);
        stackedWidget->addWidget(affichage);
        modification = new QWidget();
        modification->setObjectName("modification");
        gridLayout_Modif = new QGridLayout(modification);
        gridLayout_Modif->setObjectName("gridLayout_Modif");
        headerLayout_Modif = new QHBoxLayout();
        headerLayout_Modif->setObjectName("headerLayout_Modif");
        horizontalSpacer_HeaderModif = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout_Modif->addItem(horizontalSpacer_HeaderModif);

        frameUser_Modif = new QFrame(modification);
        frameUser_Modif->setObjectName("frameUser_Modif");
        frameUser_Modif->setFrameShape(QFrame::Shape::NoFrame);
        verticalLayout_User_Modif = new QVBoxLayout(frameUser_Modif);
        verticalLayout_User_Modif->setSpacing(2);
        verticalLayout_User_Modif->setObjectName("verticalLayout_User_Modif");
        verticalLayout_User_Modif->setContentsMargins(0, 0, 5, 0);
        lblUserName_Modif = new QLabel(frameUser_Modif);
        lblUserName_Modif->setObjectName("lblUserName_Modif");
        lblUserName_Modif->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User_Modif->addWidget(lblUserName_Modif);

        lblUserRole_Modif = new QLabel(frameUser_Modif);
        lblUserRole_Modif->setObjectName("lblUserRole_Modif");
        lblUserRole_Modif->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User_Modif->addWidget(lblUserRole_Modif);


        headerLayout_Modif->addWidget(frameUser_Modif);


        gridLayout_Modif->addLayout(headerLayout_Modif, 0, 0, 1, 2);

        cardFrame = new QFrame(modification);
        cardFrame->setObjectName("cardFrame");
        cardFrame->setFrameShape(QFrame::Shape::StyledPanel);
        cardFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_ModifFrame = new QHBoxLayout(cardFrame);
        horizontalLayout_ModifFrame->setObjectName("horizontalLayout_ModifFrame");
        verticalLayout_Photo_Modif = new QVBoxLayout();
        verticalLayout_Photo_Modif->setSpacing(10);
        verticalLayout_Photo_Modif->setObjectName("verticalLayout_Photo_Modif");
        imageLabel = new QLabel(cardFrame);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setMinimumSize(QSize(200, 300));
        imageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Photo_Modif->addWidget(imageLabel);

        btnUploadPhoto = new QPushButton(cardFrame);
        btnUploadPhoto->setObjectName("btnUploadPhoto");
        btnUploadPhoto->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Photo_Modif->addWidget(btnUploadPhoto);

        verticalSpacer_Photo = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Photo_Modif->addItem(verticalSpacer_Photo);


        horizontalLayout_ModifFrame->addLayout(verticalLayout_Photo_Modif);

        verticalLayout_FormRight = new QVBoxLayout();
        verticalLayout_FormRight->setObjectName("verticalLayout_FormRight");
        formLayout_Modif = new QFormLayout();
        formLayout_Modif->setObjectName("formLayout_Modif");
        formLayout_Modif->setVerticalSpacing(15);
        lblMatricule = new QLabel(cardFrame);
        lblMatricule->setObjectName("lblMatricule");

        formLayout_Modif->setWidget(0, QFormLayout::LabelRole, lblMatricule);

        txtMatricule = new QLineEdit(cardFrame);
        txtMatricule->setObjectName("txtMatricule");
        txtMatricule->setReadOnly(true);

        formLayout_Modif->setWidget(0, QFormLayout::FieldRole, txtMatricule);

        lblNom = new QLabel(cardFrame);
        lblNom->setObjectName("lblNom");

        formLayout_Modif->setWidget(2, QFormLayout::LabelRole, lblNom);

        txtNom = new QLineEdit(cardFrame);
        txtNom->setObjectName("txtNom");

        formLayout_Modif->setWidget(2, QFormLayout::FieldRole, txtNom);

        lblSpecialite = new QLabel(cardFrame);
        lblSpecialite->setObjectName("lblSpecialite");

        formLayout_Modif->setWidget(3, QFormLayout::LabelRole, lblSpecialite);

        cbSpecialite = new QComboBox(cardFrame);
        cbSpecialite->addItem(QString());
        cbSpecialite->addItem(QString());
        cbSpecialite->addItem(QString());
        cbSpecialite->setObjectName("cbSpecialite");

        formLayout_Modif->setWidget(3, QFormLayout::FieldRole, cbSpecialite);

        lblStatut = new QLabel(cardFrame);
        lblStatut->setObjectName("lblStatut");

        formLayout_Modif->setWidget(4, QFormLayout::LabelRole, lblStatut);

        cbStatut = new QComboBox(cardFrame);
        cbStatut->addItem(QString());
        cbStatut->addItem(QString());
        cbStatut->addItem(QString());
        cbStatut->setObjectName("cbStatut");

        formLayout_Modif->setWidget(4, QFormLayout::FieldRole, cbStatut);

        lblSalaire_Modif = new QLabel(cardFrame);
        lblSalaire_Modif->setObjectName("lblSalaire_Modif");

        formLayout_Modif->setWidget(5, QFormLayout::LabelRole, lblSalaire_Modif);

        verticalLayout_Salaire_Modif = new QVBoxLayout();
        verticalLayout_Salaire_Modif->setObjectName("verticalLayout_Salaire_Modif");
        sliderSalaire_Modif = new QSlider(cardFrame);
        sliderSalaire_Modif->setObjectName("sliderSalaire_Modif");
        sliderSalaire_Modif->setMinimum(600);
        sliderSalaire_Modif->setMaximum(5000);
        sliderSalaire_Modif->setValue(1200);
        sliderSalaire_Modif->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_Salaire_Modif->addWidget(sliderSalaire_Modif);

        lblValSalaire_Modif = new QLabel(cardFrame);
        lblValSalaire_Modif->setObjectName("lblValSalaire_Modif");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(8);
        font3.setWeight(QFont::DemiBold);
        lblValSalaire_Modif->setFont(font3);
        lblValSalaire_Modif->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Salaire_Modif->addWidget(lblValSalaire_Modif);


        formLayout_Modif->setLayout(5, QFormLayout::FieldRole, verticalLayout_Salaire_Modif);

        label = new QLabel(cardFrame);
        label->setObjectName("label");

        formLayout_Modif->setWidget(1, QFormLayout::LabelRole, label);

        txtEmailModif = new QLineEdit(cardFrame);
        txtEmailModif->setObjectName("txtEmailModif");

        formLayout_Modif->setWidget(1, QFormLayout::FieldRole, txtEmailModif);


        verticalLayout_FormRight->addLayout(formLayout_Modif);

        verticalSpacer_Form = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_FormRight->addItem(verticalSpacer_Form);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName("horizontalLayout_Buttons");
        btnDelete = new QPushButton(cardFrame);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_Buttons->addWidget(btnDelete);

        horizontalSpacer_Buttons = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_Buttons);

        btnAnnuler = new QPushButton(cardFrame);
        btnAnnuler->setObjectName("btnAnnuler");

        horizontalLayout_Buttons->addWidget(btnAnnuler);

        btnSave = new QPushButton(cardFrame);
        btnSave->setObjectName("btnSave");

        horizontalLayout_Buttons->addWidget(btnSave);


        verticalLayout_FormRight->addLayout(horizontalLayout_Buttons);


        horizontalLayout_ModifFrame->addLayout(verticalLayout_FormRight);


        gridLayout_Modif->addWidget(cardFrame, 1, 0, 1, 1);

        stackedWidget->addWidget(modification);
        ajout = new QWidget();
        ajout->setObjectName("ajout");
        gridLayout_Ajout = new QGridLayout(ajout);
        gridLayout_Ajout->setObjectName("gridLayout_Ajout");
        headerLayout_Ajout = new QHBoxLayout();
        headerLayout_Ajout->setObjectName("headerLayout_Ajout");
        horizontalSpacer_HeaderAjout = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout_Ajout->addItem(horizontalSpacer_HeaderAjout);

        frameUser_Ajout = new QFrame(ajout);
        frameUser_Ajout->setObjectName("frameUser_Ajout");
        frameUser_Ajout->setFrameShape(QFrame::Shape::NoFrame);
        verticalLayout_User_Ajout = new QVBoxLayout(frameUser_Ajout);
        verticalLayout_User_Ajout->setSpacing(2);
        verticalLayout_User_Ajout->setObjectName("verticalLayout_User_Ajout");
        verticalLayout_User_Ajout->setContentsMargins(0, 0, 5, 0);
        lblUserName_Ajout = new QLabel(frameUser_Ajout);
        lblUserName_Ajout->setObjectName("lblUserName_Ajout");
        lblUserName_Ajout->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User_Ajout->addWidget(lblUserName_Ajout);

        lblUserRole_Ajout = new QLabel(frameUser_Ajout);
        lblUserRole_Ajout->setObjectName("lblUserRole_Ajout");
        lblUserRole_Ajout->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_User_Ajout->addWidget(lblUserRole_Ajout);


        headerLayout_Ajout->addWidget(frameUser_Ajout);


        gridLayout_Ajout->addLayout(headerLayout_Ajout, 0, 0, 1, 2);

        cardFrame_2 = new QFrame(ajout);
        cardFrame_2->setObjectName("cardFrame_2");
        cardFrame_2->setFrameShape(QFrame::Shape::StyledPanel);
        horizontalLayout_AjoutFrame = new QHBoxLayout(cardFrame_2);
        horizontalLayout_AjoutFrame->setObjectName("horizontalLayout_AjoutFrame");
        verticalLayout_Photo_Ajout = new QVBoxLayout();
        verticalLayout_Photo_Ajout->setSpacing(10);
        verticalLayout_Photo_Ajout->setObjectName("verticalLayout_Photo_Ajout");
        imageLabel_2 = new QLabel(cardFrame_2);
        imageLabel_2->setObjectName("imageLabel_2");
        imageLabel_2->setMinimumSize(QSize(200, 300));
        imageLabel_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Photo_Ajout->addWidget(imageLabel_2);

        btnUploadPhoto_Ajout = new QPushButton(cardFrame_2);
        btnUploadPhoto_Ajout->setObjectName("btnUploadPhoto_Ajout");
        btnUploadPhoto_Ajout->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Photo_Ajout->addWidget(btnUploadPhoto_Ajout);

        verticalSpacer_Photo_Ajout = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Photo_Ajout->addItem(verticalSpacer_Photo_Ajout);


        horizontalLayout_AjoutFrame->addLayout(verticalLayout_Photo_Ajout);

        verticalLayout_FormRight_2 = new QVBoxLayout();
        verticalLayout_FormRight_2->setObjectName("verticalLayout_FormRight_2");
        formLayout_Ajout = new QFormLayout();
        formLayout_Ajout->setObjectName("formLayout_Ajout");
        formLayout_Ajout->setVerticalSpacing(15);
        label_7 = new QLabel(cardFrame_2);
        label_7->setObjectName("label_7");

        formLayout_Ajout->setWidget(0, QFormLayout::LabelRole, label_7);

        txtNom_Ajout = new QLineEdit(cardFrame_2);
        txtNom_Ajout->setObjectName("txtNom_Ajout");

        formLayout_Ajout->setWidget(0, QFormLayout::FieldRole, txtNom_Ajout);

        label_8 = new QLabel(cardFrame_2);
        label_8->setObjectName("label_8");

        formLayout_Ajout->setWidget(2, QFormLayout::LabelRole, label_8);

        cbSpecialite_Ajout = new QComboBox(cardFrame_2);
        cbSpecialite_Ajout->addItem(QString());
        cbSpecialite_Ajout->addItem(QString());
        cbSpecialite_Ajout->setObjectName("cbSpecialite_Ajout");

        formLayout_Ajout->setWidget(2, QFormLayout::FieldRole, cbSpecialite_Ajout);

        label_9 = new QLabel(cardFrame_2);
        label_9->setObjectName("label_9");

        formLayout_Ajout->setWidget(3, QFormLayout::LabelRole, label_9);

        cbStatut_Ajout = new QComboBox(cardFrame_2);
        cbStatut_Ajout->addItem(QString());
        cbStatut_Ajout->addItem(QString());
        cbStatut_Ajout->setObjectName("cbStatut_Ajout");

        formLayout_Ajout->setWidget(3, QFormLayout::FieldRole, cbStatut_Ajout);

        lblSalaire_Ajout = new QLabel(cardFrame_2);
        lblSalaire_Ajout->setObjectName("lblSalaire_Ajout");

        formLayout_Ajout->setWidget(4, QFormLayout::LabelRole, lblSalaire_Ajout);

        verticalLayout_Salaire_Ajout = new QVBoxLayout();
        verticalLayout_Salaire_Ajout->setObjectName("verticalLayout_Salaire_Ajout");
        sliderSalaire_Ajout = new QSlider(cardFrame_2);
        sliderSalaire_Ajout->setObjectName("sliderSalaire_Ajout");
        sliderSalaire_Ajout->setMinimum(600);
        sliderSalaire_Ajout->setMaximum(5000);
        sliderSalaire_Ajout->setValue(1200);
        sliderSalaire_Ajout->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_Salaire_Ajout->addWidget(sliderSalaire_Ajout);

        lblValSalaire_Ajout = new QLabel(cardFrame_2);
        lblValSalaire_Ajout->setObjectName("lblValSalaire_Ajout");
        lblValSalaire_Ajout->setMinimumSize(QSize(70, 0));
        lblValSalaire_Ajout->setFont(font3);
        lblValSalaire_Ajout->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Salaire_Ajout->addWidget(lblValSalaire_Ajout);


        formLayout_Ajout->setLayout(4, QFormLayout::FieldRole, verticalLayout_Salaire_Ajout);

        txtEmailAjout = new QLineEdit(cardFrame_2);
        txtEmailAjout->setObjectName("txtEmailAjout");

        formLayout_Ajout->setWidget(1, QFormLayout::FieldRole, txtEmailAjout);

        label_2 = new QLabel(cardFrame_2);
        label_2->setObjectName("label_2");

        formLayout_Ajout->setWidget(1, QFormLayout::LabelRole, label_2);


        verticalLayout_FormRight_2->addLayout(formLayout_Ajout);

        verticalSpacer_Form_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_FormRight_2->addItem(verticalSpacer_Form_2);

        horizontalLayout_Buttons_2 = new QHBoxLayout();
        horizontalLayout_Buttons_2->setObjectName("horizontalLayout_Buttons_2");
        horizontalSpacer_Buttons_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Buttons_2->addItem(horizontalSpacer_Buttons_2);

        btnAnnuler_Ajout = new QPushButton(cardFrame_2);
        btnAnnuler_Ajout->setObjectName("btnAnnuler_Ajout");

        horizontalLayout_Buttons_2->addWidget(btnAnnuler_Ajout);

        btnAjouter = new QPushButton(cardFrame_2);
        btnAjouter->setObjectName("btnAjouter");

        horizontalLayout_Buttons_2->addWidget(btnAjouter);


        verticalLayout_FormRight_2->addLayout(horizontalLayout_Buttons_2);


        horizontalLayout_AjoutFrame->addLayout(verticalLayout_FormRight_2);


        gridLayout_Ajout->addWidget(cardFrame_2, 1, 0, 1, 1);

        stackedWidget->addWidget(ajout);
        mission = new QWidget();
        mission->setObjectName("mission");
        verticalLayout_Mission = new QVBoxLayout(mission);
        verticalLayout_Mission->setObjectName("verticalLayout_Mission");
        lblTitreMission = new QLabel(mission);
        lblTitreMission->setObjectName("lblTitreMission");

        verticalLayout_Mission->addWidget(lblTitreMission);

        txtMission = new QLineEdit(mission);
        txtMission->setObjectName("txtMission");

        verticalLayout_Mission->addWidget(txtMission);

        btnAnalyser = new QPushButton(mission);
        btnAnalyser->setObjectName("btnAnalyser");
        btnAnalyser->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Mission->addWidget(btnAnalyser);

        lblResultat = new QLabel(mission);
        lblResultat->setObjectName("lblResultat");

        verticalLayout_Mission->addWidget(lblResultat);

        tableResultat = new QTableWidget(mission);
        if (tableResultat->columnCount() < 4)
            tableResultat->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableResultat->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableResultat->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableResultat->setHorizontalHeaderItem(2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableResultat->setHorizontalHeaderItem(3, __qtablewidgetitem32);
        tableResultat->setObjectName("tableResultat");
        tableResultat->setStyleSheet(QString::fromUtf8("background-color: white; gridline-color: #eee;"));
        tableResultat->horizontalHeader()->setStretchLastSection(true);
        tableResultat->verticalHeader()->setVisible(false);

        verticalLayout_Mission->addWidget(tableResultat);

        btnAnnulerMission = new QPushButton(mission);
        btnAnnulerMission->setObjectName("btnAnnulerMission");

        verticalLayout_Mission->addWidget(btnAnnulerMission);

        verticalSpacer_Mission = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Mission->addItem(verticalSpacer_Mission);

        stackedWidget->addWidget(mission);
        pointage = new QWidget();
        pointage->setObjectName("pointage");
        verticalLayout_Pointage = new QVBoxLayout(pointage);
        verticalLayout_Pointage->setObjectName("verticalLayout_Pointage");
        lblTitrePointage = new QLabel(pointage);
        lblTitrePointage->setObjectName("lblTitrePointage");

        verticalLayout_Pointage->addWidget(lblTitrePointage);

        lblStatutRFID = new QLabel(pointage);
        lblStatutRFID->setObjectName("lblStatutRFID");
        lblStatutRFID->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Pointage->addWidget(lblStatutRFID);

        btnSimulerBadge = new QPushButton(pointage);
        btnSimulerBadge->setObjectName("btnSimulerBadge");
        btnSimulerBadge->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_Pointage->addWidget(btnSimulerBadge);

        lblLog = new QLabel(pointage);
        lblLog->setObjectName("lblLog");

        verticalLayout_Pointage->addWidget(lblLog);

        tablePointage = new QTableWidget(pointage);
        if (tablePointage->columnCount() < 4)
            tablePointage->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tablePointage->setHorizontalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tablePointage->setHorizontalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tablePointage->setHorizontalHeaderItem(2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tablePointage->setHorizontalHeaderItem(3, __qtablewidgetitem36);
        tablePointage->setObjectName("tablePointage");
        tablePointage->setStyleSheet(QString::fromUtf8("background-color: white; gridline-color: #eee;"));
        tablePointage->horizontalHeader()->setStretchLastSection(true);
        tablePointage->verticalHeader()->setVisible(false);

        verticalLayout_Pointage->addWidget(tablePointage);

        btnAnnulerPointage = new QPushButton(pointage);
        btnAnnulerPointage->setObjectName("btnAnnulerPointage");

        verticalLayout_Pointage->addWidget(btnAnnulerPointage);

        verticalSpacer_Pointage = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Pointage->addItem(verticalSpacer_Pointage);

        stackedWidget->addWidget(pointage);
        statistiques = new QWidget();
        statistiques->setObjectName("statistiques");
        verticalLayout_StatsPage = new QVBoxLayout(statistiques);
        verticalLayout_StatsPage->setObjectName("verticalLayout_StatsPage");
        horizontalLayout_Stats = new QHBoxLayout();
        horizontalLayout_Stats->setObjectName("horizontalLayout_Stats");
        chartViewAbsence = new QChartView(statistiques);
        chartViewAbsence->setObjectName("chartViewAbsence");

        horizontalLayout_Stats->addWidget(chartViewAbsence);

        chartViewWorkload = new QChartView(statistiques);
        chartViewWorkload->setObjectName("chartViewWorkload");

        horizontalLayout_Stats->addWidget(chartViewWorkload);


        verticalLayout_StatsPage->addLayout(horizontalLayout_Stats);

        btnAnnulerStats = new QPushButton(statistiques);
        btnAnnulerStats->setObjectName("btnAnnulerStats");

        verticalLayout_StatsPage->addWidget(btnAnnulerStats);

        stackedWidget->addWidget(statistiques);

        verticalLayout_Main->addWidget(stackedWidget);


        horizontalLayout_Main->addWidget(contentArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1100, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WasteGuard - Gestion des Employ\303\251s", nullptr));
        label_logo->setText(QString());
        btnAccueil->setText(QCoreApplication::translate("MainWindow", "Accueil", nullptr));
        btnStock->setText(QCoreApplication::translate("MainWindow", "Stock", nullptr));
        btnProduits->setText(QCoreApplication::translate("MainWindow", "Produits", nullptr));
        btnEmployes->setText(QCoreApplication::translate("MainWindow", "Employ\303\251s", nullptr));
        btnStatistiques->setText(QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        btnMaintenance->setText(QCoreApplication::translate("MainWindow", "Maintenance", nullptr));
        label_Title->setText(QCoreApplication::translate("MainWindow", "Tableau de Bord", nullptr));
        btnNouveau->setText(QCoreApplication::translate("MainWindow", "+ Nouvel Employ\303\251", nullptr));
        lblUserName->setText(QCoreApplication::translate("MainWindow", "Admin System", nullptr));
        lblUserRole->setText(QCoreApplication::translate("MainWindow", "Chef d'Atelier", nullptr));
        txtSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Rechercher un employ\303\251...", nullptr));
        cbSort->setItemText(0, QCoreApplication::translate("MainWindow", "Trier par: Sp\303\251cialit\303\251", nullptr));
        cbSort->setItemText(1, QCoreApplication::translate("MainWindow", "Trier par: Nom", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableEmployes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "MATRICULE", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableEmployes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "NOM COMPLET", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableEmployes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "SP\303\211CIALIT\303\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableEmployes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "DISPONIBILIT\303\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableEmployes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "ACTIONS", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableEmployes->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableEmployes->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableEmployes->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableEmployes->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "4", nullptr));

        const bool __sortingEnabled = tableEmployes->isSortingEnabled();
        tableEmployes->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tableEmployes->item(0, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "EMP-001", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableEmployes->item(0, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Ali Ben Salah", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableEmployes->item(0, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "M\303\251canicien", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableEmployes->item(0, 3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableEmployes->item(0, 4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217 | \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableEmployes->item(1, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "EMP-002", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableEmployes->item(1, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Sara Tounsi", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableEmployes->item(1, 2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Chauffeur", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableEmployes->item(1, 3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "En Mission", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableEmployes->item(1, 4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217 | \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableEmployes->item(2, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "EMP-003", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableEmployes->item(2, 1);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Mohamed Amine", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableEmployes->item(2, 2);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "\303\211lectronicien", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableEmployes->item(2, 3);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Cong\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableEmployes->item(2, 4);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217 | \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableEmployes->item(3, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "EMP-004", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableEmployes->item(3, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Rania Kallel", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableEmployes->item(3, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "Responsable", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableEmployes->item(3, 3);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableEmployes->item(3, 4);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217 | \360\237\227\221\357\270\217", nullptr));
        tableEmployes->setSortingEnabled(__sortingEnabled);

        label_StatTitle->setText(QCoreApplication::translate("MainWindow", "Aper\303\247u", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Total Employ\303\251s", nullptr));
        lblStatNumber->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Charge de Travail de l equipe", nullptr));
        lblStatWorkload->setText(QCoreApplication::translate("MainWindow", "75%", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251", nullptr));
        lblStatAvailability->setText(QCoreApplication::translate("MainWindow", "4 Dispo", nullptr));
        label_Actions->setText(QCoreApplication::translate("MainWindow", "Actions Rapides", nullptr));
        btnExport->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204  Tout les employees", nullptr));
        btnFichePaie->setText(QCoreApplication::translate("MainWindow", "\360\237\222\260  G\303\251n\303\251rer Fiche de Paie", nullptr));
        btnGoMission->setText(QCoreApplication::translate("MainWindow", "\360\237\244\226  Affectation IA", nullptr));
        btnGoPointage->setText(QCoreApplication::translate("MainWindow", "\342\217\261\357\270\217  Pointage", nullptr));
        btnGoStats->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212  Statistiques", nullptr));
        lblUserName_Modif->setText(QCoreApplication::translate("MainWindow", "Admin System", nullptr));
        lblUserRole_Modif->setText(QCoreApplication::translate("MainWindow", "Chef d'Atelier", nullptr));
        imageLabel->setText(QCoreApplication::translate("MainWindow", "Photo", nullptr));
        btnUploadPhoto->setText(QCoreApplication::translate("MainWindow", "\360\237\223\267 Charger une photo", nullptr));
        lblMatricule->setText(QCoreApplication::translate("MainWindow", "Matricule", nullptr));
        txtMatricule->setPlaceholderText(QCoreApplication::translate("MainWindow", "Auto", nullptr));
        lblNom->setText(QCoreApplication::translate("MainWindow", "Nom Complet", nullptr));
        lblSpecialite->setText(QCoreApplication::translate("MainWindow", "Sp\303\251cialit\303\251", nullptr));
        cbSpecialite->setItemText(0, QCoreApplication::translate("MainWindow", "M\303\251canicien", nullptr));
        cbSpecialite->setItemText(1, QCoreApplication::translate("MainWindow", "Chauffeur", nullptr));
        cbSpecialite->setItemText(2, QCoreApplication::translate("MainWindow", "\303\211lectronicien", nullptr));

        lblStatut->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        cbStatut->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        cbStatut->setItemText(1, QCoreApplication::translate("MainWindow", "En intervention", nullptr));
        cbStatut->setItemText(2, QCoreApplication::translate("MainWindow", "Cong\303\251", nullptr));

        lblSalaire_Modif->setText(QCoreApplication::translate("MainWindow", "Salaire", nullptr));
        lblValSalaire_Modif->setText(QCoreApplication::translate("MainWindow", "1200 DT", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "EMAIL", nullptr));
        txtEmailModif->setPlaceholderText(QCoreApplication::translate("MainWindow", "xyz@emeple.com", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        btnAnnuler->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "Sauvegarder", nullptr));
        lblUserName_Ajout->setText(QCoreApplication::translate("MainWindow", "Admin System", nullptr));
        lblUserRole_Ajout->setText(QCoreApplication::translate("MainWindow", "Chef d'Atelier", nullptr));
        imageLabel_2->setText(QCoreApplication::translate("MainWindow", "Photo", nullptr));
        btnUploadPhoto_Ajout->setText(QCoreApplication::translate("MainWindow", "\360\237\223\267 Charger une photo", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Nom Complet", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Sp\303\251cialit\303\251", nullptr));
        cbSpecialite_Ajout->setItemText(0, QCoreApplication::translate("MainWindow", "M\303\251canicien", nullptr));
        cbSpecialite_Ajout->setItemText(1, QCoreApplication::translate("MainWindow", "Chauffeur", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        cbStatut_Ajout->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        cbStatut_Ajout->setItemText(1, QCoreApplication::translate("MainWindow", "En intervention", nullptr));

        lblSalaire_Ajout->setText(QCoreApplication::translate("MainWindow", "Salaire", nullptr));
        lblValSalaire_Ajout->setText(QCoreApplication::translate("MainWindow", "1200 DT", nullptr));
        txtEmailAjout->setPlaceholderText(QCoreApplication::translate("MainWindow", "xyz@emeple.com", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "EMAIL", nullptr));
        btnAnnuler_Ajout->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        lblTitreMission->setText(QCoreApplication::translate("MainWindow", "\360\237\223\242 D\303\251finition de la Mission", nullptr));
        txtMission->setText(QCoreApplication::translate("MainWindow", "R\303\251paration Moteur bac Zone Nord - Urgent", nullptr));
        txtMission->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: R\303\251paration Moteur bac Urgent...", nullptr));
        btnAnalyser->setText(QCoreApplication::translate("MainWindow", "\360\237\244\226 Lancer l'Analyse IA & Trouver l'\303\211quipe", nullptr));
        lblResultat->setText(QCoreApplication::translate("MainWindow", "\342\234\205 \303\211quipe Optimale Recommand\303\251e (Score: 98%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableResultat->horizontalHeaderItem(0);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "Matricule", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableResultat->horizontalHeaderItem(1);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableResultat->horizontalHeaderItem(2);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "Comp\303\251tence Cl\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableResultat->horizontalHeaderItem(3);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "Score Match", nullptr));
        btnAnnulerMission->setText(QCoreApplication::translate("MainWindow", "Retour / Annuler", nullptr));
        lblTitrePointage->setText(QCoreApplication::translate("MainWindow", "\303\211tat du Lecteur RFID :", nullptr));
        lblStatutRFID->setText(QCoreApplication::translate("MainWindow", "\360\237\225\222 EN ATTENTE DE BADGE...", nullptr));
        btnSimulerBadge->setText(QCoreApplication::translate("MainWindow", "\360\237\224\256 Simuler un passage de badge (D\303\251mo)", nullptr));
        lblLog->setText(QCoreApplication::translate("MainWindow", "\360\237\223\213 Historique des Entr\303\251es / Sorties (Aujourd'hui)", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tablePointage->horizontalHeaderItem(0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "Heure", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tablePointage->horizontalHeaderItem(1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "ID Badge", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tablePointage->horizontalHeaderItem(2);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tablePointage->horizontalHeaderItem(3);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        btnAnnulerPointage->setText(QCoreApplication::translate("MainWindow", "Retour / Annuler", nullptr));
        btnAnnulerStats->setText(QCoreApplication::translate("MainWindow", "Retour / Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
