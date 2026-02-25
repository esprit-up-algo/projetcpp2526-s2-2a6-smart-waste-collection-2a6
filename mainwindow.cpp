#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>
#include <QMessageBox>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // --- SETUP TABLE COLUMNS ---
    ui->tableWidget->setColumnCount(7);
    QStringList headers = { "Matricule", "Nom", "Email", "Bacs", "Score", "Paiement", "Actions" };
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // --- TABLE STYLING ---
    ui->tableWidget->setStyleSheet(
        "QTableWidget {"
        "   background-color: #ffffff;"
        "   alternate-background-color: #f5f7fa;"
        "   color: #333333;"
        "   gridline-color: #e0e4e8;"
        "   border: 1px solid #d0d5dd;"
        "   border-radius: 8px;"
        "   font-size: 11px;"
        "}"
        "QTableWidget::item {"
        "   padding: 8px;"
        "   border-bottom: 1px solid #e8ecf0;"
        "}"
        "QTableWidget::item:selected {"
        "   background-color: #dbeafe;"
        "   color: #1e3a5f;"
        "}"
        "QHeaderView::section {"
        "   background-color: #1A365D;"
        "   color: white;"
        "   font-weight: bold;"
        "   padding: 10px 6px;"
        "   border: none;"
        "   font-size: 11px;"
        "}"
    );

    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(40);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    // Connect form buttons
    connect(ui->btn_save_ajouter, &QPushButton::clicked, this, &MainWindow::on_btn_ajouter_clicked);
    connect(ui->btn_annuler_ajouter, &QPushButton::clicked, this, &MainWindow::on_btn_annuler_clicked);
    connect(ui->btn_save_modifier, &QPushButton::clicked, this, &MainWindow::on_btn_modifier_clicked);
    connect(ui->btn_annuler_modifier, &QPushButton::clicked, this, &MainWindow::on_btn_annuler_clicked);

    // Ensure we start on repertoire page
    ui->stackedWidget->setCurrentIndex(0);


    // --- Add action buttons to any pre-existing rows ---
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        addActionButtons(i);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnNouveau_clicked()
{
    // Clear inputs and switch to add page
    ui->input_matricule_ajouter->clear();
    ui->input_nom_ajouter->clear();
    ui->input_email_ajouter->clear();
    ui->input_bacs_ajouter->setValue(0);
    ui->input_score_ajouter->setValue(0);
    
    ui->stackedWidget->setCurrentIndex(1); // Page 1: Ajouter
}

void MainWindow::on_btn_annuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // Back to repertoire
}

void MainWindow::on_btn_ajouter_clicked()
{
    if(ui->input_matricule_ajouter->text().isEmpty() || ui->input_nom_ajouter->text().isEmpty()) {
         QMessageBox::warning(this, "Champs Manquants", "Veuillez remplir au moins le Matricule et le Nom.");
         return;
    }

    onClientAdded(ui->input_matricule_ajouter->text(), 
                  ui->input_nom_ajouter->text(), 
                  ui->input_email_ajouter->text(), 
                  QString::number(ui->input_bacs_ajouter->value()),
                  QString::number(ui->input_score_ajouter->value()), 
                  ui->input_paiement_ajouter->currentText());

    QMessageBox::information(this, "Succès", "Client ajouté avec succès.");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btn_modifier_clicked()
{
    if(ui->input_matricule_modifier->text().isEmpty() || ui->input_nom_modifier->text().isEmpty()) {
         QMessageBox::warning(this, "Champs Manquants", "Veuillez remplir au moins le Matricule et le Nom.");
         return;
    }

    onClientModified(currentRow,
                     ui->input_matricule_modifier->text(), 
                     ui->input_nom_modifier->text(), 
                     ui->input_email_modifier->text(), 
                     QString::number(ui->input_bacs_modifier->value()),
                     QString::number(ui->input_score_modifier->value()), 
                     ui->input_paiement_modifier->currentText());

    QMessageBox::information(this, "Succès", "Informations du client modifiées avec succès.");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::onClientAdded(QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement)
{
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(matricule));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(nom));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(email));
    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(bacs));
    ui->tableWidget->setItem(row, 4, new QTableWidgetItem(score));
    ui->tableWidget->setItem(row, 5, new QTableWidgetItem(paiement));

    addActionButtons(row);
}

void MainWindow::onClientModified(int row, QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement)
{
    if(row < ui->tableWidget->rowCount()) {
        ui->tableWidget->item(row, 0)->setText(matricule);
        ui->tableWidget->item(row, 1)->setText(nom);
        ui->tableWidget->item(row, 2)->setText(email);
        ui->tableWidget->item(row, 3)->setText(bacs);
        ui->tableWidget->item(row, 4)->setText(score);
        ui->tableWidget->item(row, 5)->setText(paiement);
    }
}

void MainWindow::addActionButtons(int row)
{
    QWidget* actionWidget = new QWidget();
    QHBoxLayout* layout = new QHBoxLayout(actionWidget);
    layout->setContentsMargins(4, 2, 4, 2);
    layout->setSpacing(6);

    QPushButton* btnEdit = new QPushButton("✏️");
    btnEdit->setStyleSheet("background-color: #f39c12; color: white; border-radius: 4px; padding: 4px;");
    
    QPushButton* btnDelete = new QPushButton("🗑️");
    btnDelete->setStyleSheet("background-color: #e74c3c; color: white; border-radius: 4px; padding: 4px;");

    layout->addWidget(btnEdit);
    layout->addWidget(btnDelete);
    layout->addStretch();

    ui->tableWidget->setCellWidget(row, 6, actionWidget);

    connect(btnEdit, &QPushButton::clicked, this, [this, actionWidget](){
        int r = getRowForWidget(actionWidget);
        if (r < 0) return;
        
        currentRow = r;
        ui->input_matricule_modifier->setText(ui->tableWidget->item(r, 0)->text());
        ui->input_nom_modifier->setText(ui->tableWidget->item(r, 1)->text());
        ui->input_email_modifier->setText(ui->tableWidget->item(r, 2)->text());
        ui->input_bacs_modifier->setValue(ui->tableWidget->item(r, 3)->text().toInt());
        ui->input_score_modifier->setValue(ui->tableWidget->item(r, 4)->text().toInt());
        ui->input_paiement_modifier->setCurrentText(ui->tableWidget->item(r, 5)->text());
        
        ui->stackedWidget->setCurrentIndex(2); // Page 2: Modifier
    });

    connect(btnDelete, &QPushButton::clicked, this, [this, actionWidget](){
        int r = getRowForWidget(actionWidget);
        if (r < 0) return;
        if (QMessageBox::question(this, "Supprimer", "Voulez-vous supprimer ce client ?") == QMessageBox::Yes) {
            ui->tableWidget->removeRow(r);
        }
    });
}

int MainWindow::getRowForWidget(QWidget *widget)
{
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        if (ui->tableWidget->cellWidget(i, 6) == widget) return i;
    }
    return -1;
}

