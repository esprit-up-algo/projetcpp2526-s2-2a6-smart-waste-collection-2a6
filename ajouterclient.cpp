#include "ajouterclient.h"
#include "ui_ajouterclient.h"
#include <QMessageBox>

AjouterClient::AjouterClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AjouterClient)
{
    ui->setupUi(this);

    // Connect Annuler button to close window
    connect(ui->btn_annuler, &QPushButton::clicked, this, &AjouterClient::close);

    // Connect Ajouter button to validation and simulated addition
    connect(ui->btn_ajouter, &QPushButton::clicked, this, [this](){
        if(ui->input_matricule->text().isEmpty() || ui->input_nom->text().isEmpty()) {
             QMessageBox::warning(this, "Champs Manquants", "Veuillez remplir au moins le Matricule et le Nom.");
             return;
        }
        
        QMessageBox::information(this, "Succès", "Client ajouté avec succès.");
        emit clientAdded(ui->input_matricule->text(), ui->input_nom->text(), 
                         ui->input_email->text(), QString::number(ui->input_bacs->value()),
                         QString::number(ui->input_score->value()), 
                         ui->input_paiement->currentText());
        this->close();
    });
}

AjouterClient::~AjouterClient()
{
    delete ui;
}
