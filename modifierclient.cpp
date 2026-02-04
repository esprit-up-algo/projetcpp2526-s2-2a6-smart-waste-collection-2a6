#include "modifierclient.h"
#include "ui_modifierclient.h"

ModifierClient::ModifierClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifierClient)
{
    ui->setupUi(this);
}

ModifierClient::~ModifierClient()
{
    delete ui;
}
