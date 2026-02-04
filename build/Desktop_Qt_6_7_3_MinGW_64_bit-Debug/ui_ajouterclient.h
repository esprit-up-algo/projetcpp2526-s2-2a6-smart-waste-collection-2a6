/********************************************************************************
** Form generated from reading UI file 'ajouterclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERCLIENT_H
#define UI_AJOUTERCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjouterClient
{
public:
    QWidget *sidebar;
    QLabel *logo;
    QLabel *acceuil;
    QLabel *produits;
    QLabel *clients;
    QLabel *employes;
    QLabel *maintenance;
    QLabel *vente;
    QWidget *header;
    QLabel *wasteguardhead;
    QLabel *responsable;
    QLabel *titrePage;
    QWidget *formContainer;
    QFormLayout *formLayout;
    QLabel *labelEntreprise;
    QLineEdit *le_entreprise;
    QLabel *labelContact;
    QLineEdit *le_contact;
    QLabel *labelTelephone;
    QLineEdit *le_telephone;
    QLabel *labelEmail;
    QLineEdit *le_email;
    QPushButton *btn_ajouter;
    QPushButton *btn_annuler;

    void setupUi(QWidget *AjouterClient)
    {
        if (AjouterClient->objectName().isEmpty())
            AjouterClient->setObjectName("AjouterClient");
        AjouterClient->resize(1280, 720);
        AjouterClient->setStyleSheet(QString::fromUtf8("background-color: #F5F5F5;"));
        sidebar = new QWidget(AjouterClient);
        sidebar->setObjectName("sidebar");
        sidebar->setGeometry(QRect(0, 0, 171, 750));
        sidebar->setStyleSheet(QString::fromUtf8("background-color: #0f2c4f;"));
        logo = new QLabel(sidebar);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(-10, 0, 181, 121));
        logo->setPixmap(QPixmap(QString::fromUtf8("waste-logo.png")));
        logo->setScaledContents(true);
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
        header = new QWidget(AjouterClient);
        header->setObjectName("header");
        header->setGeometry(QRect(170, 0, 931, 80));
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
        responsable->setGeometry(QRect(690, 20, 231, 31));
        titrePage = new QLabel(AjouterClient);
        titrePage->setObjectName("titrePage");
        titrePage->setGeometry(QRect(210, 100, 301, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        titrePage->setFont(font1);
        titrePage->setStyleSheet(QString::fromUtf8("color: #1A365D;"));
        formContainer = new QWidget(AjouterClient);
        formContainer->setObjectName("formContainer");
        formContainer->setGeometry(QRect(210, 160, 600, 400));
        formContainer->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 10px;"));
        formLayout = new QFormLayout(formContainer);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::RowWrapPolicy::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        formLayout->setVerticalSpacing(20);
        formLayout->setContentsMargins(30, 30, 30, 30);
        labelEntreprise = new QLabel(formContainer);
        labelEntreprise->setObjectName("labelEntreprise");
        labelEntreprise->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelEntreprise);

        le_entreprise = new QLineEdit(formContainer);
        le_entreprise->setObjectName("le_entreprise");
        le_entreprise->setMinimumSize(QSize(0, 30));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_entreprise);

        labelContact = new QLabel(formContainer);
        labelContact->setObjectName("labelContact");
        labelContact->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelContact);

        le_contact = new QLineEdit(formContainer);
        le_contact->setObjectName("le_contact");
        le_contact->setMinimumSize(QSize(0, 30));

        formLayout->setWidget(1, QFormLayout::FieldRole, le_contact);

        labelTelephone = new QLabel(formContainer);
        labelTelephone->setObjectName("labelTelephone");
        labelTelephone->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelTelephone);

        le_telephone = new QLineEdit(formContainer);
        le_telephone->setObjectName("le_telephone");
        le_telephone->setMinimumSize(QSize(0, 30));

        formLayout->setWidget(2, QFormLayout::FieldRole, le_telephone);

        labelEmail = new QLabel(formContainer);
        labelEmail->setObjectName("labelEmail");
        labelEmail->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelEmail);

        le_email = new QLineEdit(formContainer);
        le_email->setObjectName("le_email");
        le_email->setMinimumSize(QSize(0, 30));

        formLayout->setWidget(3, QFormLayout::FieldRole, le_email);

        btn_ajouter = new QPushButton(AjouterClient);
        btn_ajouter->setObjectName("btn_ajouter");
        btn_ajouter->setGeometry(QRect(650, 580, 160, 40));
        btn_ajouter->setStyleSheet(QString::fromUtf8("background-color: #45a049; color: white; font-weight: bold; border-radius: 5px;"));
        btn_annuler = new QPushButton(AjouterClient);
        btn_annuler->setObjectName("btn_annuler");
        btn_annuler->setGeometry(QRect(470, 580, 160, 40));
        btn_annuler->setStyleSheet(QString::fromUtf8("background-color: #d9534f; color: white; font-weight: bold; border-radius: 5px;"));

        retranslateUi(AjouterClient);

        QMetaObject::connectSlotsByName(AjouterClient);
    } // setupUi

    void retranslateUi(QWidget *AjouterClient)
    {
        AjouterClient->setWindowTitle(QCoreApplication::translate("AjouterClient", "Ajouter un Client", nullptr));
        acceuil->setText(QCoreApplication::translate("AjouterClient", "Acceuil", nullptr));
        produits->setText(QCoreApplication::translate("AjouterClient", "Produits", nullptr));
        clients->setText(QCoreApplication::translate("AjouterClient", "Clients", nullptr));
        employes->setText(QCoreApplication::translate("AjouterClient", "Employ\303\251s", nullptr));
        maintenance->setText(QCoreApplication::translate("AjouterClient", "Maintenance", nullptr));
        vente->setText(QCoreApplication::translate("AjouterClient", "Vente", nullptr));
        wasteguardhead->setText(QCoreApplication::translate("AjouterClient", "WasteGuard - Gestion de Clients", nullptr));
        responsable->setText(QCoreApplication::translate("AjouterClient", "Responsable Commercial", nullptr));
        titrePage->setText(QCoreApplication::translate("AjouterClient", "Ajouter un Nouveau Client", nullptr));
        labelEntreprise->setText(QCoreApplication::translate("AjouterClient", "Entreprise / Nom :", nullptr));
        le_entreprise->setPlaceholderText(QCoreApplication::translate("AjouterClient", "Nom de l'entreprise", nullptr));
        labelContact->setText(QCoreApplication::translate("AjouterClient", "Contact :", nullptr));
        le_contact->setPlaceholderText(QCoreApplication::translate("AjouterClient", "Nom du contact", nullptr));
        labelTelephone->setText(QCoreApplication::translate("AjouterClient", "T\303\251l\303\251phone :", nullptr));
        le_telephone->setPlaceholderText(QCoreApplication::translate("AjouterClient", "Num\303\251ro de t\303\251l\303\251phone", nullptr));
        labelEmail->setText(QCoreApplication::translate("AjouterClient", "Email :", nullptr));
        le_email->setPlaceholderText(QCoreApplication::translate("AjouterClient", "Adresse email", nullptr));
        btn_ajouter->setText(QCoreApplication::translate("AjouterClient", "Ajouter Client", nullptr));
        btn_annuler->setText(QCoreApplication::translate("AjouterClient", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjouterClient: public Ui_AjouterClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERCLIENT_H
