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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QPushButton *btnMaintenance;
    QSpacerItem *verticalSpacer;
    QWidget *contentArea;
    QVBoxLayout *verticalLayout_Main;
    QTabWidget *tabWidget;
    QWidget *affichage;
    QHBoxLayout *horizontalLayout_Split;
    QVBoxLayout *verticalLayout_Left;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *label_Title;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNouveau;
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
    QFrame *statCard1;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLabel *lblStatNumber1;
    QFrame *statCard2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    QLabel *lblStatNumber2;
    QFrame *actionCard;
    QVBoxLayout *verticalLayout_Actions;
    QLabel *label_Actions;
    QPushButton *btnExport;
    QPushButton *btnFichePaie;
    QSpacerItem *verticalSpacer_Right;
    QWidget *modification;
    QGridLayout *gridLayout_Modif;
    QFrame *cardFrame;
    QHBoxLayout *horizontalLayout_ModifFrame;
    QLabel *imageLabel;
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
    QSpacerItem *verticalSpacer_Form;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_Buttons;
    QPushButton *btnAnnuler;
    QPushButton *btnSave;
    QWidget *ajout;
    QGridLayout *gridLayout_Ajout;
    QFrame *cardFrame_2;
    QHBoxLayout *horizontalLayout_AjoutFrame;
    QLabel *imageLabel_2;
    QVBoxLayout *verticalLayout_FormRight_2;
    QFormLayout *formLayout_Ajout;
    QLabel *label_7;
    QLineEdit *txtNom_Ajout;
    QLabel *label_8;
    QComboBox *cbSpecialite_Ajout;
    QLabel *label_9;
    QComboBox *cbStatut_Ajout;
    QSpacerItem *verticalSpacer_Form_2;
    QHBoxLayout *horizontalLayout_Buttons_2;
    QSpacerItem *horizontalSpacer_Buttons_2;
    QPushButton *btnAnnuler_Ajout;
    QPushButton *btnAjouter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1100, 750);
        MainWindow->setStyleSheet(QString::fromUtf8("/* ======================================================= */\n"
"/* 1. CONFIGURATION G\303\211N\303\211RALE */\n"
"/* ======================================================= */\n"
"QMainWindow, QWidget {\n"
"    background-color: #f4f6f9; /* Couleur de fond principale */\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #333333 !important;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"/* ======================================================= */\n"
"/* 2. SIDEBAR (MENU GAUCHE) */\n"
"/* ======================================================= */\n"
"QFrame#sidebar {\n"
"    background-color: #0f2b4c;\n"
"    border: none;\n"
"}\n"
"QFrame#sidebar QLabel {\n"
"    color: white !important;\n"
"    background-color: transparent; /* \360\237\224\245 CORRECTION : Fond transparent pour le texte */\n"
"}\n"
"\n"
"/* \360\237\224\245 CORRECTION SP\303\211CIALE POUR LE LOGO \360\237\224\245 */\n"
"QLabel#label_logo {\n"
"    background-color: transparent !important; /* Force la transparen"
                        "ce pour ne pas avoir de carr\303\251 blanc */\n"
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
"/* ======================================================= */\n"
"/* 3. CARTES (CARDS) */\n"
"/* ======================================================= */\n"
"QFrame#statCard, QFrame#actionCard, QFrame#cardFrame, QFrame#cardFrame_2 { \n"
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
"/* ============================"
                        "=========================== */\n"
"/* 4. BOUTONS */\n"
"/* ======================================================= */\n"
"/* Boutons Actions Rapides */\n"
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
"/* Autres Boutons */\n"
"QPushButton#btnSave, QPushButton#btnAjouter, QPushButton#btnNouveau {\n"
"    background-color: #28a745;\n"
"    color: white !important;\n"
"    border-radius: 5px;\n"
"    padding: 8px 15px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}\n"
"QPushButton#btnSave:hover, QPushButton#btnAjouter:hover, QPushButton#btnNouveau:hover "
                        "{\n"
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
"/* Bouton Supprimer Rouge */\n"
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
"/* ======================================================= */\n"
"/* 5. TABLEAU */\n"
"/* ======================================================= */\n"
"Q"
                        "TableWidget {\n"
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
"    font-size: 13px;\n"
"}\n"
"\n"
"/* ======================================================= */\n"
"/* 6. INPUTS & COMBOBOX */\n"
"/* ======================================================= */\n"
"QLineEdit {\n"
"    background-color: #ffffff;\n"
"    color: #000000;\n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"}\n"
"Q"
                        "LineEdit:focus {\n"
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
"    padding: 8px 20px;\n"
"    margin-right: 2px;\n"
"}\n"
"QTabBar::tab:selected {\n"
"    background: #0f2b4c;\n"
"    color: white !important;\n"
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
        tabWidget = new QTabWidget(contentArea);
        tabWidget->setObjectName("tabWidget");
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
        font.setPointSize(14);
        font.setWeight(QFont::DemiBold);
        label_Title->setFont(font);

        horizontalLayout_Header->addWidget(label_Title);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer);

        btnNouveau = new QPushButton(affichage);
        btnNouveau->setObjectName("btnNouveau");
        btnNouveau->setMinimumSize(QSize(0, 35));
        btnNouveau->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_Header->addWidget(btnNouveau);


        verticalLayout_Left->addLayout(horizontalLayout_Header);

        horizontalLayout_Search = new QHBoxLayout();
        horizontalLayout_Search->setObjectName("horizontalLayout_Search");
        txtSearch = new QLineEdit(affichage);
        txtSearch->setObjectName("txtSearch");
        txtSearch->setMinimumSize(QSize(0, 35));

        horizontalLayout_Search->addWidget(txtSearch);

        cbSort = new QComboBox(affichage);
        cbSort->addItem(QString());
        cbSort->addItem(QString());
        cbSort->setObjectName("cbSort");
        cbSort->setMinimumSize(QSize(150, 35));

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
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
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
        tableEmployes->setShowGrid(false);
        tableEmployes->setAlternatingRowColors(true);
        tableEmployes->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableEmployes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_Left->addWidget(tableEmployes);


        horizontalLayout_Split->addLayout(verticalLayout_Left);

        verticalLayout_Right = new QVBoxLayout();
        verticalLayout_Right->setSpacing(15);
        verticalLayout_Right->setObjectName("verticalLayout_Right");
        verticalLayout_Right->setContentsMargins(10, -1, -1, -1);
        label_StatTitle = new QLabel(affichage);
        label_StatTitle->setObjectName("label_StatTitle");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_StatTitle->setFont(font1);

        verticalLayout_Right->addWidget(label_StatTitle);

        statCard = new QFrame(affichage);
        statCard->setObjectName("statCard");
        statCard->setFrameShape(QFrame::Shape::StyledPanel);
        statCard->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(statCard);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_10 = new QLabel(statCard);
        label_10->setObjectName("label_10");

        verticalLayout_5->addWidget(label_10);

        lblStatNumber = new QLabel(statCard);
        lblStatNumber->setObjectName("lblStatNumber");

        verticalLayout_5->addWidget(lblStatNumber);


        verticalLayout_Right->addWidget(statCard);

        statCard1 = new QFrame(affichage);
        statCard1->setObjectName("statCard1");
        statCard1->setFrameShape(QFrame::Shape::StyledPanel);
        statCard1->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(statCard1);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_12 = new QLabel(statCard1);
        label_12->setObjectName("label_12");

        verticalLayout_6->addWidget(label_12);

        lblStatNumber1 = new QLabel(statCard1);
        lblStatNumber1->setObjectName("lblStatNumber1");

        verticalLayout_6->addWidget(lblStatNumber1);


        verticalLayout_Right->addWidget(statCard1);

        statCard2 = new QFrame(affichage);
        statCard2->setObjectName("statCard2");
        statCard2->setFrameShape(QFrame::Shape::StyledPanel);
        statCard2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_7 = new QVBoxLayout(statCard2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_14 = new QLabel(statCard2);
        label_14->setObjectName("label_14");

        verticalLayout_7->addWidget(label_14);

        lblStatNumber2 = new QLabel(statCard2);
        lblStatNumber2->setObjectName("lblStatNumber2");
        lblStatNumber2->setStyleSheet(QString::fromUtf8("color: #28a745 !important;"));

        verticalLayout_7->addWidget(lblStatNumber2);


        verticalLayout_Right->addWidget(statCard2);

        actionCard = new QFrame(affichage);
        actionCard->setObjectName("actionCard");
        actionCard->setFrameShape(QFrame::Shape::StyledPanel);
        actionCard->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_Actions = new QVBoxLayout(actionCard);
        verticalLayout_Actions->setSpacing(10);
        verticalLayout_Actions->setObjectName("verticalLayout_Actions");
        label_Actions = new QLabel(actionCard);
        label_Actions->setObjectName("label_Actions");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(11);
        font2.setBold(true);
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


        verticalLayout_Right->addWidget(actionCard);

        verticalSpacer_Right = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Right->addItem(verticalSpacer_Right);


        horizontalLayout_Split->addLayout(verticalLayout_Right);

        horizontalLayout_Split->setStretch(0, 3);
        horizontalLayout_Split->setStretch(1, 1);
        tabWidget->addTab(affichage, QString());
        modification = new QWidget();
        modification->setObjectName("modification");
        gridLayout_Modif = new QGridLayout(modification);
        gridLayout_Modif->setObjectName("gridLayout_Modif");
        cardFrame = new QFrame(modification);
        cardFrame->setObjectName("cardFrame");
        cardFrame->setFrameShape(QFrame::Shape::StyledPanel);
        cardFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_ModifFrame = new QHBoxLayout(cardFrame);
        horizontalLayout_ModifFrame->setObjectName("horizontalLayout_ModifFrame");
        imageLabel = new QLabel(cardFrame);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setMinimumSize(QSize(200, 300));
        imageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_ModifFrame->addWidget(imageLabel);

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

        formLayout_Modif->setWidget(1, QFormLayout::LabelRole, lblNom);

        txtNom = new QLineEdit(cardFrame);
        txtNom->setObjectName("txtNom");

        formLayout_Modif->setWidget(1, QFormLayout::FieldRole, txtNom);

        lblSpecialite = new QLabel(cardFrame);
        lblSpecialite->setObjectName("lblSpecialite");

        formLayout_Modif->setWidget(2, QFormLayout::LabelRole, lblSpecialite);

        cbSpecialite = new QComboBox(cardFrame);
        cbSpecialite->addItem(QString());
        cbSpecialite->addItem(QString());
        cbSpecialite->addItem(QString());
        cbSpecialite->setObjectName("cbSpecialite");

        formLayout_Modif->setWidget(2, QFormLayout::FieldRole, cbSpecialite);

        lblStatut = new QLabel(cardFrame);
        lblStatut->setObjectName("lblStatut");

        formLayout_Modif->setWidget(3, QFormLayout::LabelRole, lblStatut);

        cbStatut = new QComboBox(cardFrame);
        cbStatut->addItem(QString());
        cbStatut->addItem(QString());
        cbStatut->addItem(QString());
        cbStatut->setObjectName("cbStatut");

        formLayout_Modif->setWidget(3, QFormLayout::FieldRole, cbStatut);


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


        gridLayout_Modif->addWidget(cardFrame, 0, 0, 1, 1);

        tabWidget->addTab(modification, QString());
        ajout = new QWidget();
        ajout->setObjectName("ajout");
        gridLayout_Ajout = new QGridLayout(ajout);
        gridLayout_Ajout->setObjectName("gridLayout_Ajout");
        cardFrame_2 = new QFrame(ajout);
        cardFrame_2->setObjectName("cardFrame_2");
        cardFrame_2->setFrameShape(QFrame::Shape::StyledPanel);
        cardFrame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_AjoutFrame = new QHBoxLayout(cardFrame_2);
        horizontalLayout_AjoutFrame->setObjectName("horizontalLayout_AjoutFrame");
        imageLabel_2 = new QLabel(cardFrame_2);
        imageLabel_2->setObjectName("imageLabel_2");
        imageLabel_2->setMinimumSize(QSize(200, 300));
        imageLabel_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_AjoutFrame->addWidget(imageLabel_2);

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

        formLayout_Ajout->setWidget(1, QFormLayout::LabelRole, label_8);

        cbSpecialite_Ajout = new QComboBox(cardFrame_2);
        cbSpecialite_Ajout->addItem(QString());
        cbSpecialite_Ajout->addItem(QString());
        cbSpecialite_Ajout->setObjectName("cbSpecialite_Ajout");

        formLayout_Ajout->setWidget(1, QFormLayout::FieldRole, cbSpecialite_Ajout);

        label_9 = new QLabel(cardFrame_2);
        label_9->setObjectName("label_9");

        formLayout_Ajout->setWidget(2, QFormLayout::LabelRole, label_9);

        cbStatut_Ajout = new QComboBox(cardFrame_2);
        cbStatut_Ajout->addItem(QString());
        cbStatut_Ajout->addItem(QString());
        cbStatut_Ajout->setObjectName("cbStatut_Ajout");

        formLayout_Ajout->setWidget(2, QFormLayout::FieldRole, cbStatut_Ajout);


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


        gridLayout_Ajout->addWidget(cardFrame_2, 0, 0, 1, 1);

        tabWidget->addTab(ajout, QString());

        verticalLayout_Main->addWidget(tabWidget);


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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WasteGuard - Gestion des Employ\303\251s", nullptr));
        label_logo->setText(QCoreApplication::translate("MainWindow", "WASTEGUARD", nullptr));
        btnAccueil->setText(QCoreApplication::translate("MainWindow", "Accueil", nullptr));
        btnStock->setText(QCoreApplication::translate("MainWindow", "Stock", nullptr));
        btnProduits->setText(QCoreApplication::translate("MainWindow", "Produits", nullptr));
        btnEmployes->setText(QCoreApplication::translate("MainWindow", "Employ\303\251s", nullptr));
        btnMaintenance->setText(QCoreApplication::translate("MainWindow", "Maintenance", nullptr));
        label_Title->setText(QCoreApplication::translate("MainWindow", "Tableau de Bord des Employ\303\251s", nullptr));
        btnNouveau->setText(QCoreApplication::translate("MainWindow", "+ Nouvel Employ\303\251", nullptr));
        txtSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "Rechercher par Nom...", nullptr));
        cbSort->setItemText(0, QCoreApplication::translate("MainWindow", "Trier par: Sp\303\251cialit\303\251", nullptr));
        cbSort->setItemText(1, QCoreApplication::translate("MainWindow", "Trier par: Nom", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableEmployes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Matricule", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableEmployes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nom Complet", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableEmployes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Sp\303\251cialit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableEmployes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableEmployes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Actions", nullptr));
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
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217  |  \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableEmployes->item(1, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "EMP-002", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableEmployes->item(1, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Sara Tounsi", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableEmployes->item(1, 2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Chauffeur", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableEmployes->item(1, 3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "En Mission", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableEmployes->item(1, 4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217  |  \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableEmployes->item(2, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "EMP-003", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableEmployes->item(2, 1);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Mohamed Amine", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableEmployes->item(2, 2);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "\303\211lectronicien", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableEmployes->item(2, 3);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Cong\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableEmployes->item(2, 4);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217  |  \360\237\227\221\357\270\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableEmployes->item(3, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "EMP-004", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableEmployes->item(3, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Rania Kallel", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableEmployes->item(3, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "Responsable", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableEmployes->item(3, 3);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableEmployes->item(3, 4);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217  |  \360\237\227\221\357\270\217", nullptr));
        tableEmployes->setSortingEnabled(__sortingEnabled);

        label_StatTitle->setText(QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Total Employ\303\251s", nullptr));
        lblStatNumber->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Charge de Travail", nullptr));
        lblStatNumber1->setText(QCoreApplication::translate("MainWindow", "75%", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251", nullptr));
        lblStatNumber2->setText(QCoreApplication::translate("MainWindow", "4 Dispo", nullptr));
        label_Actions->setText(QCoreApplication::translate("MainWindow", "Actions Rapides", nullptr));
        btnExport->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204  Export PDF / CSV", nullptr));
        btnFichePaie->setText(QCoreApplication::translate("MainWindow", "\360\237\222\260  G\303\251n\303\251rer Fiche de Paie", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(affichage), QCoreApplication::translate("MainWindow", "Affichage", nullptr));
        imageLabel->setText(QCoreApplication::translate("MainWindow", "Photo", nullptr));
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

        btnDelete->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        btnAnnuler->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "Sauvegarder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(modification), QCoreApplication::translate("MainWindow", "Modification", nullptr));
        imageLabel_2->setText(QCoreApplication::translate("MainWindow", "Photo", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Nom Complet", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Sp\303\251cialit\303\251", nullptr));
        cbSpecialite_Ajout->setItemText(0, QCoreApplication::translate("MainWindow", "M\303\251canicien", nullptr));
        cbSpecialite_Ajout->setItemText(1, QCoreApplication::translate("MainWindow", "Chauffeur", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        cbStatut_Ajout->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        cbStatut_Ajout->setItemText(1, QCoreApplication::translate("MainWindow", "En intervention", nullptr));

        btnAnnuler_Ajout->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ajout), QCoreApplication::translate("MainWindow", "Ajout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
