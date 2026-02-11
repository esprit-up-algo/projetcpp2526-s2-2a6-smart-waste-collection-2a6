/********************************************************************************
** Form generated from reading UI file 'modifierclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIERCLIENT_H
#define UI_MODIFIERCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifierClient
{
public:
    QHBoxLayout *horizontalLayout_main;
    QWidget *sidebar;
    QLabel *logo;
    QLabel *acceuil;
    QLabel *produits;
    QLabel *clients;
    QLabel *employes;
    QLabel *maintenance;
    QLabel *vente;
    QWidget *rightContainer;
    QVBoxLayout *verticalLayout_right;
    QWidget *header;
    QHBoxLayout *horizontalLayout_header;
    QLabel *wasteguardhead;
    QSpacerItem *horizontalSpacer;
    QLabel *responsable;
    QWidget *contentArea;
    QHBoxLayout *horizontalLayout_content;
    QSpacerItem *horizontalSpacer_2;
    QFrame *formCard;
    QVBoxLayout *verticalLayout_card;
    QLabel *titleLabel;
    QGridLayout *gridLayout_form;
    QLabel *label_matricule;
    QLineEdit *input_matricule;
    QLabel *label_nom;
    QLineEdit *input_nom;
    QLabel *label_email;
    QLineEdit *input_email;
    QLabel *label_bacs;
    QSpinBox *input_bacs;
    QLabel *label_score;
    QSpinBox *input_score;
    QLabel *label_paiement;
    QComboBox *input_paiement;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_buttons;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_annuler;
    QPushButton *btn_modifier;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *ModifierClient)
    {
        if (ModifierClient->objectName().isEmpty())
            ModifierClient->setObjectName("ModifierClient");
        ModifierClient->resize(1280, 720);
        ModifierClient->setStyleSheet(QString::fromUtf8("background-color: #f4f6f9;"));
        horizontalLayout_main = new QHBoxLayout(ModifierClient);
        horizontalLayout_main->setSpacing(0);
        horizontalLayout_main->setObjectName("horizontalLayout_main");
        horizontalLayout_main->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(ModifierClient);
        sidebar->setObjectName("sidebar");
        sidebar->setMinimumSize(QSize(171, 0));
        sidebar->setMaximumSize(QSize(171, 16777215));
        sidebar->setStyleSheet(QString::fromUtf8("background-color: #0f2c4f;"));
        logo = new QLabel(sidebar);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 121));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/waste-logo.png")));
        logo->setScaledContents(true);
        acceuil = new QLabel(sidebar);
        acceuil->setObjectName("acceuil");
        acceuil->setGeometry(QRect(50, 180, 71, 21));
        QFont font;
        font.setPointSize(10);
        acceuil->setFont(font);
        acceuil->setStyleSheet(QString::fromUtf8("color: white;"));
        produits = new QLabel(sidebar);
        produits->setObjectName("produits");
        produits->setGeometry(QRect(50, 260, 63, 20));
        produits->setFont(font);
        produits->setStyleSheet(QString::fromUtf8("color: white;"));
        clients = new QLabel(sidebar);
        clients->setObjectName("clients");
        clients->setGeometry(QRect(0, 330, 171, 35));
        clients->setFont(font);
        clients->setStyleSheet(QString::fromUtf8("background-color: #2a4a6e; color: white; padding-left: 50px;"));
        employes = new QLabel(sidebar);
        employes->setObjectName("employes");
        employes->setGeometry(QRect(50, 420, 81, 31));
        employes->setFont(font);
        employes->setStyleSheet(QString::fromUtf8("color: white;"));
        maintenance = new QLabel(sidebar);
        maintenance->setObjectName("maintenance");
        maintenance->setGeometry(QRect(50, 500, 111, 31));
        maintenance->setFont(font);
        maintenance->setStyleSheet(QString::fromUtf8("color: white;"));
        vente = new QLabel(sidebar);
        vente->setObjectName("vente");
        vente->setGeometry(QRect(50, 580, 71, 31));
        vente->setFont(font);
        vente->setStyleSheet(QString::fromUtf8("color: white;"));

        horizontalLayout_main->addWidget(sidebar);

        rightContainer = new QWidget(ModifierClient);
        rightContainer->setObjectName("rightContainer");
        verticalLayout_right = new QVBoxLayout(rightContainer);
        verticalLayout_right->setSpacing(0);
        verticalLayout_right->setObjectName("verticalLayout_right");
        verticalLayout_right->setContentsMargins(0, 0, 0, 0);
        header = new QWidget(rightContainer);
        header->setObjectName("header");
        header->setMinimumSize(QSize(0, 80));
        header->setMaximumSize(QSize(16777215, 80));
        header->setStyleSheet(QString::fromUtf8("background-color: #1A365D; color: white;"));
        horizontalLayout_header = new QHBoxLayout(header);
        horizontalLayout_header->setObjectName("horizontalLayout_header");
        wasteguardhead = new QLabel(header);
        wasteguardhead->setObjectName("wasteguardhead");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        font1.setPointSize(14);
        font1.setBold(true);
        wasteguardhead->setFont(font1);

        horizontalLayout_header->addWidget(wasteguardhead);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_header->addItem(horizontalSpacer);

        responsable = new QLabel(header);
        responsable->setObjectName("responsable");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat")});
        font2.setPointSize(10);
        responsable->setFont(font2);

        horizontalLayout_header->addWidget(responsable);


        verticalLayout_right->addWidget(header);

        contentArea = new QWidget(rightContainer);
        contentArea->setObjectName("contentArea");
        horizontalLayout_content = new QHBoxLayout(contentArea);
        horizontalLayout_content->setObjectName("horizontalLayout_content");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_content->addItem(horizontalSpacer_2);

        formCard = new QFrame(contentArea);
        formCard->setObjectName("formCard");
        formCard->setMinimumSize(QSize(900, 500));
        formCard->setStyleSheet(QString::fromUtf8("\n"
"             QFrame#formCard {\n"
"              background-color: white;\n"
"              border-radius: 15px;\n"
"              border: 1px solid #e0e0e0;\n"
"             }\n"
"             QLabel { color: #333; font-size: 14px; font-weight: bold; }\n"
"             QLineEdit, QComboBox, QSpinBox {\n"
"              padding: 10px; border: 1px solid #ccc; border-radius: 5px; font-size: 14px; background-color: #fafafa; color: black;\n"
"             }\n"
"             QLineEdit:focus, QComboBox:focus, QSpinBox:focus { border: 1px solid #3498db; background-color: white; }\n"
"             QPushButton#btn_modifier {\n"
"              background-color: #007bff; color: white; font-weight: bold; border-radius: 5px; padding: 12px; font-size: 14px;\n"
"             }\n"
"             QPushButton#btn_modifier:hover { background-color: #0069d9; }\n"
"             QPushButton#btn_annuler {\n"
"              background-color: #6c757d; color: white; font-weight: bold; border-radius: 5px; padding: 12px; font-size: 1"
                        "4px;\n"
"             }\n"
"             QPushButton#btn_annuler:hover { background-color: #5a6268; }\n"
"            "));
        verticalLayout_card = new QVBoxLayout(formCard);
        verticalLayout_card->setSpacing(25);
        verticalLayout_card->setObjectName("verticalLayout_card");
        verticalLayout_card->setContentsMargins(40, 30, 40, 30);
        titleLabel = new QLabel(formCard);
        titleLabel->setObjectName("titleLabel");
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        titleLabel->setFont(font3);
        titleLabel->setStyleSheet(QString::fromUtf8("color: #1A365D; border-bottom: 2px solid #3498db; padding-bottom: 15px;"));
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_card->addWidget(titleLabel);

        gridLayout_form = new QGridLayout();
        gridLayout_form->setObjectName("gridLayout_form");
        gridLayout_form->setHorizontalSpacing(40);
        gridLayout_form->setVerticalSpacing(30);
        label_matricule = new QLabel(formCard);
        label_matricule->setObjectName("label_matricule");

        gridLayout_form->addWidget(label_matricule, 0, 0, 1, 1);

        input_matricule = new QLineEdit(formCard);
        input_matricule->setObjectName("input_matricule");

        gridLayout_form->addWidget(input_matricule, 0, 1, 1, 1);

        label_nom = new QLabel(formCard);
        label_nom->setObjectName("label_nom");

        gridLayout_form->addWidget(label_nom, 0, 2, 1, 1);

        input_nom = new QLineEdit(formCard);
        input_nom->setObjectName("input_nom");

        gridLayout_form->addWidget(input_nom, 0, 3, 1, 1);

        label_email = new QLabel(formCard);
        label_email->setObjectName("label_email");

        gridLayout_form->addWidget(label_email, 1, 0, 1, 1);

        input_email = new QLineEdit(formCard);
        input_email->setObjectName("input_email");

        gridLayout_form->addWidget(input_email, 1, 1, 1, 1);

        label_bacs = new QLabel(formCard);
        label_bacs->setObjectName("label_bacs");

        gridLayout_form->addWidget(label_bacs, 1, 2, 1, 1);

        input_bacs = new QSpinBox(formCard);
        input_bacs->setObjectName("input_bacs");
        input_bacs->setMaximum(999);

        gridLayout_form->addWidget(input_bacs, 1, 3, 1, 1);

        label_score = new QLabel(formCard);
        label_score->setObjectName("label_score");

        gridLayout_form->addWidget(label_score, 2, 0, 1, 1);

        input_score = new QSpinBox(formCard);
        input_score->setObjectName("input_score");
        input_score->setMaximum(9999);

        gridLayout_form->addWidget(input_score, 2, 1, 1, 1);

        label_paiement = new QLabel(formCard);
        label_paiement->setObjectName("label_paiement");

        gridLayout_form->addWidget(label_paiement, 2, 2, 1, 1);

        input_paiement = new QComboBox(formCard);
        input_paiement->addItem(QString());
        input_paiement->addItem(QString());
        input_paiement->addItem(QString());
        input_paiement->addItem(QString());
        input_paiement->setObjectName("input_paiement");

        gridLayout_form->addWidget(input_paiement, 2, 3, 1, 1);


        verticalLayout_card->addLayout(gridLayout_form);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_card->addItem(verticalSpacer);

        horizontalLayout_buttons = new QHBoxLayout();
        horizontalLayout_buttons->setSpacing(20);
        horizontalLayout_buttons->setObjectName("horizontalLayout_buttons");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_buttons->addItem(horizontalSpacer_3);

        btn_annuler = new QPushButton(formCard);
        btn_annuler->setObjectName("btn_annuler");
        btn_annuler->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_annuler->setMinimumSize(QSize(160, 45));

        horizontalLayout_buttons->addWidget(btn_annuler);

        btn_modifier = new QPushButton(formCard);
        btn_modifier->setObjectName("btn_modifier");
        btn_modifier->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_modifier->setMinimumSize(QSize(220, 45));

        horizontalLayout_buttons->addWidget(btn_modifier);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_buttons->addItem(horizontalSpacer_4);


        verticalLayout_card->addLayout(horizontalLayout_buttons);


        horizontalLayout_content->addWidget(formCard);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_content->addItem(horizontalSpacer_5);


        verticalLayout_right->addWidget(contentArea);


        horizontalLayout_main->addWidget(rightContainer);


        retranslateUi(ModifierClient);

        QMetaObject::connectSlotsByName(ModifierClient);
    } // setupUi

    void retranslateUi(QWidget *ModifierClient)
    {
        ModifierClient->setWindowTitle(QCoreApplication::translate("ModifierClient", "Modifier un Client", nullptr));
        acceuil->setText(QCoreApplication::translate("ModifierClient", "Acceuil", nullptr));
        produits->setText(QCoreApplication::translate("ModifierClient", "Produits", nullptr));
        clients->setText(QCoreApplication::translate("ModifierClient", "Clients", nullptr));
        employes->setText(QCoreApplication::translate("ModifierClient", "Employ\303\251s", nullptr));
        maintenance->setText(QCoreApplication::translate("ModifierClient", "Maintenance", nullptr));
        vente->setText(QCoreApplication::translate("ModifierClient", "Vente", nullptr));
        wasteguardhead->setText(QCoreApplication::translate("ModifierClient", "WasteGuard - Gestion de Clients", nullptr));
        responsable->setText(QCoreApplication::translate("ModifierClient", "Responsable Commercial", nullptr));
        titleLabel->setText(QCoreApplication::translate("ModifierClient", "Modifier les Informations du Client", nullptr));
        label_matricule->setText(QCoreApplication::translate("ModifierClient", "Matricule Client :", nullptr));
        input_matricule->setPlaceholderText(QCoreApplication::translate("ModifierClient", "Ex: CL-001", nullptr));
        label_nom->setText(QCoreApplication::translate("ModifierClient", "Nom / Entreprise :", nullptr));
        input_nom->setPlaceholderText(QCoreApplication::translate("ModifierClient", "Nom du client ou entreprise", nullptr));
        label_email->setText(QCoreApplication::translate("ModifierClient", "Adresse Email :", nullptr));
        input_email->setPlaceholderText(QCoreApplication::translate("ModifierClient", "email@exemple.com", nullptr));
        label_bacs->setText(QCoreApplication::translate("ModifierClient", "Nombre de Bacs :", nullptr));
        label_score->setText(QCoreApplication::translate("ModifierClient", "Score Fid\303\251lit\303\251 :", nullptr));
        label_paiement->setText(QCoreApplication::translate("ModifierClient", "Statut Paiement :", nullptr));
        input_paiement->setItemText(0, QCoreApplication::translate("ModifierClient", "\303\200 Jour", nullptr));
        input_paiement->setItemText(1, QCoreApplication::translate("ModifierClient", "En Retard", nullptr));
        input_paiement->setItemText(2, QCoreApplication::translate("ModifierClient", "En Attente", nullptr));
        input_paiement->setItemText(3, QCoreApplication::translate("ModifierClient", "Pay\303\251", nullptr));

        btn_annuler->setText(QCoreApplication::translate("ModifierClient", "Annuler (Retour)", nullptr));
        btn_modifier->setText(QCoreApplication::translate("ModifierClient", "Enregistrer Modifications", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifierClient: public Ui_ModifierClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIERCLIENT_H
