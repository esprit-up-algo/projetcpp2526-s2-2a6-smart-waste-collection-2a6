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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *sidebar;
    QLabel *acceuil;
    QLabel *produits;
    QLabel *clients;
    QLabel *employes;
    QLabel *maintenance;
    QLabel *vente;
    QLabel *logo;
    QWidget *header;
    QLabel *wasteguardhead;
    QLabel *responsable;
    QLabel *rep;
    QLabel *lblTrier;
    QComboBox *cbTrier;
    QLineEdit *recherche;
    QPushButton *btnNouveau;
    QWidget *sidepanel;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *pilotage;
    QPushButton *facture;
    QPushButton *score;
    QPushButton *exportclient;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ImageLoading));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setEnabled(true);
        sidebar->setGeometry(QRect(0, 0, 171, 751));
        sidebar->setMouseTracking(false);
        sidebar->setStyleSheet(QString::fromUtf8("background-color: #0f2c4f; color: white;"));
        acceuil = new QLabel(sidebar);
        acceuil->setObjectName("acceuil");
        acceuil->setGeometry(QRect(50, 180, 71, 21));
        QFont font;
        font.setPointSize(10);
        acceuil->setFont(font);
        produits = new QLabel(sidebar);
        produits->setObjectName("produits");
        produits->setGeometry(QRect(50, 260, 63, 20));
        produits->setFont(font);
        clients = new QLabel(sidebar);
        clients->setObjectName("clients");
        clients->setGeometry(QRect(0, 330, 171, 51));
        clients->setFont(font);
        clients->setStyleSheet(QString::fromUtf8("background-color: #2a4a6e; color: white; padding-left: 50px;"));
        employes = new QLabel(sidebar);
        employes->setObjectName("employes");
        employes->setGeometry(QRect(50, 420, 81, 31));
        employes->setFont(font);
        maintenance = new QLabel(sidebar);
        maintenance->setObjectName("maintenance");
        maintenance->setGeometry(QRect(50, 500, 111, 31));
        maintenance->setFont(font);
        vente = new QLabel(sidebar);
        vente->setObjectName("vente");
        vente->setGeometry(QRect(50, 580, 71, 31));
        vente->setFont(font);
        logo = new QLabel(sidebar);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 121));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/waste-logo.png")));
        logo->setScaledContents(true);
        header = new QWidget(centralwidget);
        header->setObjectName("header");
        header->setGeometry(QRect(170, 0, 1111, 80));
        header->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"    font-family: \"Montserrat\";\n"
"    font-weight: bold;\n"
"    font-size: 18px;\n"
"    background-color: #1A365D;"));
        wasteguardhead = new QLabel(header);
        wasteguardhead->setObjectName("wasteguardhead");
        wasteguardhead->setGeometry(QRect(30, 20, 311, 31));
        responsable = new QLabel(header);
        responsable->setObjectName("responsable");
        responsable->setGeometry(QRect(860, 20, 231, 31));
        rep = new QLabel(centralwidget);
        rep->setObjectName("rep");
        rep->setGeometry(QRect(180, 100, 281, 41));
        rep->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        lblTrier = new QLabel(centralwidget);
        lblTrier->setObjectName("lblTrier");
        lblTrier->setGeometry(QRect(190, 150, 71, 28));
        lblTrier->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #333;"));
        cbTrier = new QComboBox(centralwidget);
        cbTrier->addItem(QString());
        cbTrier->addItem(QString());
        cbTrier->setObjectName("cbTrier");
        cbTrier->setGeometry(QRect(270, 150, 151, 28));
        cbTrier->setStyleSheet(QString::fromUtf8("color:rgb(144, 144, 144)"));
        recherche = new QLineEdit(centralwidget);
        recherche->setObjectName("recherche");
        recherche->setGeometry(QRect(440, 150, 340, 28));
        btnNouveau = new QPushButton(centralwidget);
        btnNouveau->setObjectName("btnNouveau");
        btnNouveau->setGeometry(QRect(800, 150, 120, 28));
        btnNouveau->setStyleSheet(QString::fromUtf8("background-color: #0f2b4c; color: white; border-radius: 5px; font-weight: bold;"));
        sidepanel = new QWidget(centralwidget);
        sidepanel->setObjectName("sidepanel");
        sidepanel->setGeometry(QRect(1050, 180, 211, 501));
        sidepanel->setStyleSheet(QString::fromUtf8("QWidget#sidepanel {\n"
"    background-color: white;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 10px;\n"
"}\n"
""));
        widget = new QWidget(sidepanel);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 60, 160, 80));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 213, 213)"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 71, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: #3d8b3f"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 121, 20));
        QFont font2;
        font2.setPointSize(7);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(79, 79, 79)"));
        pilotage = new QLabel(sidepanel);
        pilotage->setObjectName("pilotage");
        pilotage->setGeometry(QRect(30, 10, 141, 31));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        pilotage->setFont(font3);
        pilotage->setStyleSheet(QString::fromUtf8("color: black"));
        facture = new QPushButton(sidepanel);
        facture->setObjectName("facture");
        facture->setGeometry(QRect(20, 230, 160, 60));
        facture->setStyleSheet(QString::fromUtf8("QPushButton#facture {\n"
"    background-color: #1F4C8A;\n"
"    color: white;\n"
"    padding: 12px;\n"
"    border-radius: 8px;\n"
"}"));
        score = new QPushButton(sidepanel);
        score->setObjectName("score");
        score->setGeometry(QRect(20, 310, 160, 60));
        score->setStyleSheet(QString::fromUtf8("QPushButton#score {\n"
"    background-color: #D4AF37;\n"
"    color: white;\n"
"}"));
        exportclient = new QPushButton(sidepanel);
        exportclient->setObjectName("exportclient");
        exportclient->setGeometry(QRect(20, 390, 160, 60));
        exportclient->setStyleSheet(QString::fromUtf8("QPushButton#exportclient {\n"
"    background-color: #1E7A3E;\n"
"    color: white;\n"
"}"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QFont font4;
        font4.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font4);
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
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem13);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(180, 230, 851, 400));
        QFont font5;
        font5.setKerning(true);
        tableWidget->setFont(font5);
        tableWidget->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font-size: 14px;\n"
"QHeaderView::section {\n"
"    background-color: #1A365D;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 4px;\n"
"    border: none;\n"
"    font-size: 11px;\n"
"}"));
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::PenStyle::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->setRowCount(1);
        tableWidget->horizontalHeader()->setMinimumSectionSize(26);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget->verticalHeader()->setMinimumSectionSize(19);
        tableWidget->verticalHeader()->setDefaultSectionSize(50);
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
        maintenance->setText(QCoreApplication::translate("MainWindow", "Maintenance", nullptr));
        vente->setText(QCoreApplication::translate("MainWindow", "Vente", nullptr));
        wasteguardhead->setText(QCoreApplication::translate("MainWindow", "WasteGuard - Gestion de Clients", nullptr));
        responsable->setText(QCoreApplication::translate("MainWindow", "Responsable Commercial", nullptr));
        rep->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">R\303\251pertoire des Clients</span></p></body></html>", nullptr));
        lblTrier->setText(QCoreApplication::translate("MainWindow", "Trier par :", nullptr));
        cbTrier->setItemText(0, QCoreApplication::translate("MainWindow", "R\303\251ference", nullptr));
        cbTrier->setItemText(1, QCoreApplication::translate("MainWindow", "Nom", nullptr));

        recherche->setPlaceholderText(QCoreApplication::translate("MainWindow", "Rechercher...", nullptr));
        btnNouveau->setText(QCoreApplication::translate("MainWindow", "+ Ajouter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "+12.4%", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Croissance Mensuelle", nullptr));
        pilotage->setText(QCoreApplication::translate("MainWindow", "Pilotage Commercial", nullptr));
        facture->setText(QCoreApplication::translate("MainWindow", "Facturation Globale", nullptr));
        score->setText(QCoreApplication::translate("MainWindow", "Scoring", nullptr));
        exportclient->setText(QCoreApplication::translate("MainWindow", "Export Clients", nullptr));
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

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "C-01", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "test@gmail.com", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Pay\303\251", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
