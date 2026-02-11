#include "modifierclient.h"
#include "ui_modifierclient.h"
#include <QMessageBox>

ModifierClient::ModifierClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifierClient)
{
    ui->setupUi(this);

    // Connect Annuler button to close window
    connect(ui->btn_annuler, &QPushButton::clicked, this, &ModifierClient::close);

    // Connect Modifier button to validation and simulated update
    connect(ui->btn_modifier, &QPushButton::clicked, this, [this](){
        emit clientModified(currentRow, ui->input_matricule->text(), ui->input_nom->text(), 
                            ui->input_email->text(), QString::number(ui->input_bacs->value()),
                            QString::number(ui->input_score->value()), 
                            ui->input_paiement->currentText());
        QMessageBox::information(this, "Succès", "Informations du client modifiées avec succès.");
        this->close();
    });
}

ModifierClient::~ModifierClient()
{
    delete ui;
}

void ModifierClient::setClientData(QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement, int row)
{
    currentRow = row;
    ui->input_matricule->setText(matricule);
    ui->input_nom->setText(nom);
    ui->input_email->setText(email);
    ui->input_bacs->setValue(bacs.toInt());
    ui->input_score->setValue(score.toInt());
    ui->input_paiement->setCurrentText(paiement);
}

void ModifierClient::on_btn_modifier_clicked()
{
    emit clientModified(currentRow, ui->input_matricule->text(), ui->input_nom->text(), 
                        ui->input_email->text(), QString::number(ui->input_bacs->value()),
                        QString::number(ui->input_score->value()), 
                        ui->input_paiement->currentText());
    QMessageBox::information(this, "Succès", "Informations du client modifiées avec succès.");
    this->close();
}
