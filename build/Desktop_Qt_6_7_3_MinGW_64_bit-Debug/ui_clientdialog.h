/********************************************************************************
** Form generated from reading UI file 'clientdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDIALOG_H
#define UI_CLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *entrepriseEdit;
    QLabel *label_2;
    QLineEdit *contactEdit;
    QLabel *label_3;
    QLineEdit *telephoneEdit;
    QLabel *label_4;
    QLineEdit *emailEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClientDialog)
    {
        if (ClientDialog->objectName().isEmpty())
            ClientDialog->setObjectName("ClientDialog");
        ClientDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ClientDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(ClientDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        entrepriseEdit = new QLineEdit(ClientDialog);
        entrepriseEdit->setObjectName("entrepriseEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, entrepriseEdit);

        label_2 = new QLabel(ClientDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        contactEdit = new QLineEdit(ClientDialog);
        contactEdit->setObjectName("contactEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, contactEdit);

        label_3 = new QLabel(ClientDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        telephoneEdit = new QLineEdit(ClientDialog);
        telephoneEdit->setObjectName("telephoneEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, telephoneEdit);

        label_4 = new QLabel(ClientDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        emailEdit = new QLineEdit(ClientDialog);
        emailEdit->setObjectName("emailEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, emailEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(ClientDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClientDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ClientDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ClientDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ClientDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientDialog)
    {
        ClientDialog->setWindowTitle(QCoreApplication::translate("ClientDialog", "Gestion Client", nullptr));
        label->setText(QCoreApplication::translate("ClientDialog", "Entreprise / Nom :", nullptr));
        label_2->setText(QCoreApplication::translate("ClientDialog", "Contact :", nullptr));
        label_3->setText(QCoreApplication::translate("ClientDialog", "T\303\251l\303\251phone :", nullptr));
        label_4->setText(QCoreApplication::translate("ClientDialog", "Email :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientDialog: public Ui_ClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDIALOG_H
