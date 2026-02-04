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
    QWidget *header;
    QLabel *wasteguardhead;
    QLabel *responsable;
    QLabel *rep;
    QLineEdit *recherche;
    QPushButton *nvclient;
    QTableWidget *tableWidget;
    QWidget *sidepanel;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *pilotage;
    QPushButton *facture;
    QPushButton *score;
    QPushButton *exportclient;
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
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setEnabled(true);
        sidebar->setGeometry(QRect(0, 0, 171, 751));
        sidebar->setMouseTracking(false);
        sidebar->setStyleSheet(QString::fromUtf8("background-color: #0f2c4f;"));
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
        clients->setGeometry(QRect(50, 340, 63, 20));
        clients->setFont(font);
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
        recherche = new QLineEdit(centralwidget);
        recherche->setObjectName("recherche");
        recherche->setGeometry(QRect(180, 150, 340, 28));
        nvclient = new QPushButton(centralwidget);
        nvclient->setObjectName("nvclient");
        nvclient->setGeometry(QRect(1070, 110, 171, 41));
        nvclient->setStyleSheet(QString::fromUtf8("background-color: #45a049;"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
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
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(190, 230, 801, 211));
        tableWidget->setShowGrid(true);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(140);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(50);
        tableWidget->verticalHeader()->setHighlightSections(true);
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
        label->setGeometry(QRect(40, 20, 61, 21));
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(nvclient, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::show));

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
        recherche->setPlaceholderText(QCoreApplication::translate("MainWindow", "Rechercher un client\342\200\246", nullptr));
        nvclient->setText(QCoreApplication::translate("MainWindow", "+Nouveau Client", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Entreprise / Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Bacs Actifs", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Paiement", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Fidelit\303\251", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "+12.4%", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Croissance Mensuelle", nullptr));
        pilotage->setText(QCoreApplication::translate("MainWindow", "Pilotage Commercial", nullptr));
        facture->setText(QCoreApplication::translate("MainWindow", "Facturation Globale", nullptr));
        score->setText(QCoreApplication::translate("MainWindow", "Scoring Fidelit\303\251", nullptr));
        exportclient->setText(QCoreApplication::translate("MainWindow", "Export Clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
