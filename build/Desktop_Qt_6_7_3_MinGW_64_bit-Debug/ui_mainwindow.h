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
#include <QtWidgets/QSpinBox>
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
    QHBoxLayout *horizontalLayout_main;
    QWidget *sidebar;
    QLabel *logo;
    QLabel *acceuil;
    QLabel *produits;
    QLabel *clients;
    QLabel *employes;
    QVBoxLayout *verticalLayout_right;
    QWidget *header;
    QHBoxLayout *horizontalLayout_header;
    QLabel *wasteguardhead;
    QSpacerItem *horizontalSpacer_h;
    QLabel *responsable;
    QStackedWidget *stackedWidget;
    QWidget *page_repertoire;
    QVBoxLayout *verticalLayout_repertoire;
    QHBoxLayout *horizontalLayout_filters;
    QLabel *rep;
    QSpacerItem *horizontalSpacer_f;
    QLabel *lblTrier;
    QComboBox *cbTrier;
    QLineEdit *recherche;
    QPushButton *btnNouveau;
    QHBoxLayout *horizontalLayout_table;
    QTableWidget *tableWidget;
    QWidget *sidepanel;
    QVBoxLayout *verticalLayout_sidepanel;
    QLabel *pilotage;
    QWidget *growthWidget;
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QLabel *label1;
    QSpacerItem *spacerItem;
    QPushButton *facture;
    QPushButton *score;
    QPushButton *exportclient;
    QWidget *page_ajouter;
    QVBoxLayout *verticalLayout_ajouter;
    QSpacerItem *vs_a1;
    QFrame *formCard_ajouter;
    QVBoxLayout *vboxLayout1;
    QLabel *label2;
    QGridLayout *grid_ajouter;
    QLabel *label3;
    QLineEdit *input_matricule_ajouter;
    QLabel *label4;
    QLineEdit *input_nom_ajouter;
    QLabel *label5;
    QLineEdit *input_email_ajouter;
    QLabel *label6;
    QSpinBox *input_bacs_ajouter;
    QLabel *label7;
    QSpinBox *input_score_ajouter;
    QLabel *label8;
    QComboBox *input_paiement_ajouter;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *btn_annuler_ajouter;
    QPushButton *btn_save_ajouter;
    QSpacerItem *spacerItem2;
    QSpacerItem *vs_a2;
    QWidget *page_modifier;
    QVBoxLayout *verticalLayout_modifier;
    QSpacerItem *vs_m1;
    QFrame *formCard_modifier;
    QVBoxLayout *vboxLayout2;
    QLabel *label9;
    QGridLayout *grid_modifier;
    QLabel *label10;
    QLineEdit *input_matricule_modifier;
    QLabel *label11;
    QLineEdit *input_nom_modifier;
    QLabel *label12;
    QLineEdit *input_email_modifier;
    QLabel *label13;
    QSpinBox *input_bacs_modifier;
    QLabel *label14;
    QSpinBox *input_score_modifier;
    QLabel *label15;
    QComboBox *input_paiement_modifier;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem3;
    QPushButton *btn_annuler_modifier;
    QPushButton *btn_save_modifier;
    QSpacerItem *spacerItem4;
    QSpacerItem *vs_m2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        horizontalLayout_main = new QHBoxLayout(centralwidget);
        horizontalLayout_main->setSpacing(0);
        horizontalLayout_main->setObjectName("horizontalLayout_main");
        horizontalLayout_main->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setMinimumSize(QSize(171, 0));
        sidebar->setMaximumSize(QSize(171, 16777215));
        sidebar->setStyleSheet(QString::fromUtf8("background-color: #0f2c4f; color: white;"));
        logo = new QLabel(sidebar);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 121));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/waste-logo.png")));
        logo->setScaledContents(true);
        acceuil = new QLabel(sidebar);
        acceuil->setObjectName("acceuil");
        acceuil->setGeometry(QRect(50, 180, 71, 21));
        produits = new QLabel(sidebar);
        produits->setObjectName("produits");
        produits->setGeometry(QRect(50, 260, 63, 20));
        clients = new QLabel(sidebar);
        clients->setObjectName("clients");
        clients->setGeometry(QRect(0, 330, 171, 51));
        clients->setStyleSheet(QString::fromUtf8("background-color: #2a4a6e; color: white; padding-left: 50px;"));
        employes = new QLabel(sidebar);
        employes->setObjectName("employes");
        employes->setGeometry(QRect(50, 420, 81, 31));

        horizontalLayout_main->addWidget(sidebar);

        verticalLayout_right = new QVBoxLayout();
        verticalLayout_right->setSpacing(0);
        verticalLayout_right->setObjectName("verticalLayout_right");
        header = new QWidget(centralwidget);
        header->setObjectName("header");
        header->setMinimumSize(QSize(0, 80));
        header->setMaximumSize(QSize(16777215, 80));
        header->setStyleSheet(QString::fromUtf8("color: #FFFFFF; font-family: \"Montserrat\"; font-weight: bold; font-size: 18px; background-color: #1A365D;"));
        horizontalLayout_header = new QHBoxLayout(header);
        horizontalLayout_header->setObjectName("horizontalLayout_header");
        wasteguardhead = new QLabel(header);
        wasteguardhead->setObjectName("wasteguardhead");

        horizontalLayout_header->addWidget(wasteguardhead);

        horizontalSpacer_h = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_header->addItem(horizontalSpacer_h);

        responsable = new QLabel(header);
        responsable->setObjectName("responsable");

        horizontalLayout_header->addWidget(responsable);


        verticalLayout_right->addWidget(header);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_repertoire = new QWidget();
        page_repertoire->setObjectName("page_repertoire");
        verticalLayout_repertoire = new QVBoxLayout(page_repertoire);
        verticalLayout_repertoire->setObjectName("verticalLayout_repertoire");
        horizontalLayout_filters = new QHBoxLayout();
        horizontalLayout_filters->setObjectName("horizontalLayout_filters");
        horizontalLayout_filters->setContentsMargins(20, 20, 20, 10);
        rep = new QLabel(page_repertoire);
        rep->setObjectName("rep");

        horizontalLayout_filters->addWidget(rep);

        horizontalSpacer_f = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_filters->addItem(horizontalSpacer_f);

        lblTrier = new QLabel(page_repertoire);
        lblTrier->setObjectName("lblTrier");
        lblTrier->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #333;"));

        horizontalLayout_filters->addWidget(lblTrier);

        cbTrier = new QComboBox(page_repertoire);
        cbTrier->addItem(QString());
        cbTrier->addItem(QString());
        cbTrier->setObjectName("cbTrier");
        cbTrier->setStyleSheet(QString::fromUtf8("color:rgb(144, 144, 144)"));

        horizontalLayout_filters->addWidget(cbTrier);

        recherche = new QLineEdit(page_repertoire);
        recherche->setObjectName("recherche");
        recherche->setMinimumSize(QSize(250, 0));

        horizontalLayout_filters->addWidget(recherche);

        btnNouveau = new QPushButton(page_repertoire);
        btnNouveau->setObjectName("btnNouveau");
        btnNouveau->setMinimumSize(QSize(120, 30));
        btnNouveau->setStyleSheet(QString::fromUtf8("background-color: #0f2b4c; color: white; border-radius: 5px; font-weight: bold;"));

        horizontalLayout_filters->addWidget(btnNouveau);


        verticalLayout_repertoire->addLayout(horizontalLayout_filters);

        horizontalLayout_table = new QHBoxLayout();
        horizontalLayout_table->setObjectName("horizontalLayout_table");
        tableWidget = new QTableWidget(page_repertoire);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0); font-size: 14px;"));

        horizontalLayout_table->addWidget(tableWidget);

        sidepanel = new QWidget(page_repertoire);
        sidepanel->setObjectName("sidepanel");
        sidepanel->setMinimumSize(QSize(200, 0));
        sidepanel->setStyleSheet(QString::fromUtf8("background-color: #f8f9fa; border: 1px solid #ddd; border-radius: 10px;"));
        verticalLayout_sidepanel = new QVBoxLayout(sidepanel);
        verticalLayout_sidepanel->setObjectName("verticalLayout_sidepanel");
        pilotage = new QLabel(sidepanel);
        pilotage->setObjectName("pilotage");
        pilotage->setStyleSheet(QString::fromUtf8("font-weight: bold; color: black;"));

        verticalLayout_sidepanel->addWidget(pilotage);

        growthWidget = new QWidget(sidepanel);
        growthWidget->setObjectName("growthWidget");
        growthWidget->setStyleSheet(QString::fromUtf8("background-color: #e9ecef; border-radius: 5px; padding: 10px;"));
        vboxLayout = new QVBoxLayout(growthWidget);
        vboxLayout->setObjectName("vboxLayout");
        label = new QLabel(growthWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: green; font-size: 18px; font-weight: bold;"));

        vboxLayout->addWidget(label);

        label1 = new QLabel(growthWidget);
        label1->setObjectName("label1");
        label1->setStyleSheet(QString::fromUtf8("color: #666; font-size: 10px;"));

        vboxLayout->addWidget(label1);


        verticalLayout_sidepanel->addWidget(growthWidget);

        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_sidepanel->addItem(spacerItem);

        facture = new QPushButton(sidepanel);
        facture->setObjectName("facture");
        facture->setStyleSheet(QString::fromUtf8("background-color: #1F4C8A; color: white; padding: 10px; border-radius: 5px;"));

        verticalLayout_sidepanel->addWidget(facture);

        score = new QPushButton(sidepanel);
        score->setObjectName("score");
        score->setStyleSheet(QString::fromUtf8("background-color: #D4AF37; color: white; padding: 10px; border-radius: 5px;"));

        verticalLayout_sidepanel->addWidget(score);

        exportclient = new QPushButton(sidepanel);
        exportclient->setObjectName("exportclient");
        exportclient->setStyleSheet(QString::fromUtf8("background-color: #1E7A3E; color: white; padding: 10px; border-radius: 5px;"));

        verticalLayout_sidepanel->addWidget(exportclient);


        horizontalLayout_table->addWidget(sidepanel);


        verticalLayout_repertoire->addLayout(horizontalLayout_table);

        stackedWidget->addWidget(page_repertoire);
        page_ajouter = new QWidget();
        page_ajouter->setObjectName("page_ajouter");
        verticalLayout_ajouter = new QVBoxLayout(page_ajouter);
        verticalLayout_ajouter->setObjectName("verticalLayout_ajouter");
        vs_a1 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_ajouter->addItem(vs_a1);

        formCard_ajouter = new QFrame(page_ajouter);
        formCard_ajouter->setObjectName("formCard_ajouter");
        formCard_ajouter->setStyleSheet(QString::fromUtf8("\n"
"              QFrame#formCard_ajouter { background-color: white; border-radius: 15px; border: 1px solid #e0e0e0; }\n"
"              QLabel { color: #333; font-size: 14px; font-weight: bold; }\n"
"              QLineEdit, QComboBox, QSpinBox { padding: 10px; border: 1px solid #ccc; border-radius: 5px; font-size: 14px; background-color: #fafafa; color: black; }\n"
"              QPushButton#btn_save_ajouter { background-color: #28a745; color: white; font-weight: bold; border-radius: 5px; padding: 12px; }\n"
"              QPushButton#btn_annuler_ajouter { background-color: #6c757d; color: white; font-weight: bold; border-radius: 5px; padding: 12px; }\n"
"             "));
        vboxLayout1 = new QVBoxLayout(formCard_ajouter);
        vboxLayout1->setSpacing(20);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(40, 30, 40, 30);
        label2 = new QLabel(formCard_ajouter);
        label2->setObjectName("label2");
        label2->setStyleSheet(QString::fromUtf8("font-size: 20px; color: #1A365D;"));
        label2->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(label2);

        grid_ajouter = new QGridLayout();
        grid_ajouter->setObjectName("grid_ajouter");
        grid_ajouter->setVerticalSpacing(20);
        label3 = new QLabel(formCard_ajouter);
        label3->setObjectName("label3");

        grid_ajouter->addWidget(label3, 0, 0, 1, 1);

        input_matricule_ajouter = new QLineEdit(formCard_ajouter);
        input_matricule_ajouter->setObjectName("input_matricule_ajouter");

        grid_ajouter->addWidget(input_matricule_ajouter, 0, 1, 1, 1);

        label4 = new QLabel(formCard_ajouter);
        label4->setObjectName("label4");

        grid_ajouter->addWidget(label4, 0, 2, 1, 1);

        input_nom_ajouter = new QLineEdit(formCard_ajouter);
        input_nom_ajouter->setObjectName("input_nom_ajouter");

        grid_ajouter->addWidget(input_nom_ajouter, 0, 3, 1, 1);

        label5 = new QLabel(formCard_ajouter);
        label5->setObjectName("label5");

        grid_ajouter->addWidget(label5, 1, 0, 1, 1);

        input_email_ajouter = new QLineEdit(formCard_ajouter);
        input_email_ajouter->setObjectName("input_email_ajouter");

        grid_ajouter->addWidget(input_email_ajouter, 1, 1, 1, 1);

        label6 = new QLabel(formCard_ajouter);
        label6->setObjectName("label6");

        grid_ajouter->addWidget(label6, 1, 2, 1, 1);

        input_bacs_ajouter = new QSpinBox(formCard_ajouter);
        input_bacs_ajouter->setObjectName("input_bacs_ajouter");
        input_bacs_ajouter->setMaximum(999);

        grid_ajouter->addWidget(input_bacs_ajouter, 1, 3, 1, 1);

        label7 = new QLabel(formCard_ajouter);
        label7->setObjectName("label7");

        grid_ajouter->addWidget(label7, 2, 0, 1, 1);

        input_score_ajouter = new QSpinBox(formCard_ajouter);
        input_score_ajouter->setObjectName("input_score_ajouter");
        input_score_ajouter->setMaximum(9999);

        grid_ajouter->addWidget(input_score_ajouter, 2, 1, 1, 1);

        label8 = new QLabel(formCard_ajouter);
        label8->setObjectName("label8");

        grid_ajouter->addWidget(label8, 2, 2, 1, 1);

        input_paiement_ajouter = new QComboBox(formCard_ajouter);
        input_paiement_ajouter->addItem(QString());
        input_paiement_ajouter->addItem(QString());
        input_paiement_ajouter->setObjectName("input_paiement_ajouter");

        grid_ajouter->addWidget(input_paiement_ajouter, 2, 3, 1, 1);


        vboxLayout1->addLayout(grid_ajouter);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem1);

        btn_annuler_ajouter = new QPushButton(formCard_ajouter);
        btn_annuler_ajouter->setObjectName("btn_annuler_ajouter");

        hboxLayout->addWidget(btn_annuler_ajouter);

        btn_save_ajouter = new QPushButton(formCard_ajouter);
        btn_save_ajouter->setObjectName("btn_save_ajouter");

        hboxLayout->addWidget(btn_save_ajouter);

        spacerItem2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem2);


        vboxLayout1->addLayout(hboxLayout);


        verticalLayout_ajouter->addWidget(formCard_ajouter);

        vs_a2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_ajouter->addItem(vs_a2);

        stackedWidget->addWidget(page_ajouter);
        page_modifier = new QWidget();
        page_modifier->setObjectName("page_modifier");
        verticalLayout_modifier = new QVBoxLayout(page_modifier);
        verticalLayout_modifier->setObjectName("verticalLayout_modifier");
        vs_m1 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_modifier->addItem(vs_m1);

        formCard_modifier = new QFrame(page_modifier);
        formCard_modifier->setObjectName("formCard_modifier");
        formCard_modifier->setStyleSheet(QString::fromUtf8("\n"
"              QFrame#formCard_modifier { background-color: white; border-radius: 15px; border: 1px solid #e0e0e0; }\n"
"              QLabel { color: #333; font-size: 14px; font-weight: bold; }\n"
"              QLineEdit, QComboBox, QSpinBox { padding: 10px; border: 1px solid #ccc; border-radius: 5px; font-size: 14px; background-color: #fafafa; color: black; }\n"
"              QPushButton#btn_save_modifier { background-color: #007bff; color: white; font-weight: bold; border-radius: 5px; padding: 12px; }\n"
"              QPushButton#btn_annuler_modifier { background-color: #6c757d; color: white; font-weight: bold; border-radius: 5px; padding: 12px; }\n"
"             "));
        vboxLayout2 = new QVBoxLayout(formCard_modifier);
        vboxLayout2->setSpacing(20);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(40, 30, 40, 30);
        label9 = new QLabel(formCard_modifier);
        label9->setObjectName("label9");
        label9->setStyleSheet(QString::fromUtf8("font-size: 20px; color: #1A365D;"));
        label9->setAlignment(Qt::AlignCenter);

        vboxLayout2->addWidget(label9);

        grid_modifier = new QGridLayout();
        grid_modifier->setObjectName("grid_modifier");
        grid_modifier->setVerticalSpacing(20);
        label10 = new QLabel(formCard_modifier);
        label10->setObjectName("label10");

        grid_modifier->addWidget(label10, 0, 0, 1, 1);

        input_matricule_modifier = new QLineEdit(formCard_modifier);
        input_matricule_modifier->setObjectName("input_matricule_modifier");

        grid_modifier->addWidget(input_matricule_modifier, 0, 1, 1, 1);

        label11 = new QLabel(formCard_modifier);
        label11->setObjectName("label11");

        grid_modifier->addWidget(label11, 0, 2, 1, 1);

        input_nom_modifier = new QLineEdit(formCard_modifier);
        input_nom_modifier->setObjectName("input_nom_modifier");

        grid_modifier->addWidget(input_nom_modifier, 0, 3, 1, 1);

        label12 = new QLabel(formCard_modifier);
        label12->setObjectName("label12");

        grid_modifier->addWidget(label12, 1, 0, 1, 1);

        input_email_modifier = new QLineEdit(formCard_modifier);
        input_email_modifier->setObjectName("input_email_modifier");

        grid_modifier->addWidget(input_email_modifier, 1, 1, 1, 1);

        label13 = new QLabel(formCard_modifier);
        label13->setObjectName("label13");

        grid_modifier->addWidget(label13, 1, 2, 1, 1);

        input_bacs_modifier = new QSpinBox(formCard_modifier);
        input_bacs_modifier->setObjectName("input_bacs_modifier");
        input_bacs_modifier->setMaximum(999);

        grid_modifier->addWidget(input_bacs_modifier, 1, 3, 1, 1);

        label14 = new QLabel(formCard_modifier);
        label14->setObjectName("label14");

        grid_modifier->addWidget(label14, 2, 0, 1, 1);

        input_score_modifier = new QSpinBox(formCard_modifier);
        input_score_modifier->setObjectName("input_score_modifier");
        input_score_modifier->setMaximum(9999);

        grid_modifier->addWidget(input_score_modifier, 2, 1, 1, 1);

        label15 = new QLabel(formCard_modifier);
        label15->setObjectName("label15");

        grid_modifier->addWidget(label15, 2, 2, 1, 1);

        input_paiement_modifier = new QComboBox(formCard_modifier);
        input_paiement_modifier->addItem(QString());
        input_paiement_modifier->addItem(QString());
        input_paiement_modifier->setObjectName("input_paiement_modifier");

        grid_modifier->addWidget(input_paiement_modifier, 2, 3, 1, 1);


        vboxLayout2->addLayout(grid_modifier);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName("hboxLayout1");
        spacerItem3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        btn_annuler_modifier = new QPushButton(formCard_modifier);
        btn_annuler_modifier->setObjectName("btn_annuler_modifier");

        hboxLayout1->addWidget(btn_annuler_modifier);

        btn_save_modifier = new QPushButton(formCard_modifier);
        btn_save_modifier->setObjectName("btn_save_modifier");

        hboxLayout1->addWidget(btn_save_modifier);

        spacerItem4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacerItem4);


        vboxLayout2->addLayout(hboxLayout1);


        verticalLayout_modifier->addWidget(formCard_modifier);

        vs_m2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_modifier->addItem(vs_m2);

        stackedWidget->addWidget(page_modifier);

        verticalLayout_right->addWidget(stackedWidget);


        horizontalLayout_main->addLayout(verticalLayout_right);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WasteGuard - Gestion des Clients", nullptr));
        acceuil->setText(QCoreApplication::translate("MainWindow", "Acceuil", nullptr));
        produits->setText(QCoreApplication::translate("MainWindow", "Produits", nullptr));
        clients->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        employes->setText(QCoreApplication::translate("MainWindow", "Employ\303\251s", nullptr));
        wasteguardhead->setText(QCoreApplication::translate("MainWindow", "WasteGuard - Gestion de Clients", nullptr));
        responsable->setText(QCoreApplication::translate("MainWindow", "Responsable Commercial", nullptr));
        rep->setText(QCoreApplication::translate("MainWindow", "<html><body><p><span style=\" font-size:16pt; color:black;\">R\303\251pertoire des Clients</span></p></body></html>", nullptr));
        lblTrier->setText(QCoreApplication::translate("MainWindow", "Trier par :", nullptr));
        cbTrier->setItemText(0, QCoreApplication::translate("MainWindow", "R\303\251ference", nullptr));
        cbTrier->setItemText(1, QCoreApplication::translate("MainWindow", "Nom", nullptr));

        recherche->setPlaceholderText(QCoreApplication::translate("MainWindow", "Rechercher...", nullptr));
        btnNouveau->setText(QCoreApplication::translate("MainWindow", "+ Ajouter", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Matricule", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Bacs", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Score", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Paiement", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        pilotage->setText(QCoreApplication::translate("MainWindow", "Pilotage Commercial", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "+12.4%", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Croissance Mensuelle", nullptr));
        facture->setText(QCoreApplication::translate("MainWindow", "Facturation Globale", nullptr));
        score->setText(QCoreApplication::translate("MainWindow", "Scoring", nullptr));
        exportclient->setText(QCoreApplication::translate("MainWindow", "Export Clients", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "Ajouter un Nouveau Client", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "Matricule:", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        label5->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        label6->setText(QCoreApplication::translate("MainWindow", "Bacs:", nullptr));
        label7->setText(QCoreApplication::translate("MainWindow", "Score:", nullptr));
        label8->setText(QCoreApplication::translate("MainWindow", "Paiement:", nullptr));
        input_paiement_ajouter->setItemText(0, QCoreApplication::translate("MainWindow", "Pay\303\251", nullptr));
        input_paiement_ajouter->setItemText(1, QCoreApplication::translate("MainWindow", "En Retard", nullptr));

        btn_annuler_ajouter->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        btn_save_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter Client", nullptr));
        label9->setText(QCoreApplication::translate("MainWindow", "Modifier les Informations du Client", nullptr));
        label10->setText(QCoreApplication::translate("MainWindow", "Matricule:", nullptr));
        label11->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        label12->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        label13->setText(QCoreApplication::translate("MainWindow", "Bacs:", nullptr));
        label14->setText(QCoreApplication::translate("MainWindow", "Score:", nullptr));
        label15->setText(QCoreApplication::translate("MainWindow", "Paiement:", nullptr));
        input_paiement_modifier->setItemText(0, QCoreApplication::translate("MainWindow", "Pay\303\251", nullptr));
        input_paiement_modifier->setItemText(1, QCoreApplication::translate("MainWindow", "En Retard", nullptr));

        btn_annuler_modifier->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        btn_save_modifier->setText(QCoreApplication::translate("MainWindow", "Enregistrer Modifications", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
