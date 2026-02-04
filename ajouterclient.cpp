#include "ajouterclient.h"
#include "ui_ajouterclient.h"

AjouterClient::AjouterClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AjouterClient)
{
    ui->setupUi(this);
}

AjouterClient::~AjouterClient()
{
    delete ui;
}
