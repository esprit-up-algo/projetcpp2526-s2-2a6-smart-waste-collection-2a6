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

    // Initialize windows as null
    ajouterClientWindow = nullptr;
    modifierClientWindow = nullptr;

    // --- SETUP TABLE COLUMNS ---
    QStringList headers = { "Matricule", "Nom", "Email", "Bacs", "Score", "Paiement", "Actions" };
    ui->tableWidget->setColumnCount(7);
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

    // Enable alternating row colors
    ui->tableWidget->setAlternatingRowColors(true);

    // Adjust column widths
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Set default row height for more spacing
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(40);

    // Hide vertical header (row numbers)
    ui->tableWidget->verticalHeader()->setVisible(false);

    // Selection behavior
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    // --- Add action buttons to any pre-existing rows from the .ui file ---
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        if (ui->tableWidget->cellWidget(i, 6) == nullptr) {
            addActionButtons(i);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    if(ajouterClientWindow) delete ajouterClientWindow;
    if(modifierClientWindow) delete modifierClientWindow;
}

void MainWindow::on_btnNouveau_clicked()
{
    if(ajouterClientWindow == nullptr) {
        ajouterClientWindow = new AjouterClient();
        connect(ajouterClientWindow, &AjouterClient::clientAdded, this, &MainWindow::onClientAdded);
    }
    ajouterClientWindow->show();
}

// Helper: find which row a button belongs to
int MainWindow::getRowForWidget(QWidget *widget)
{
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        if (ui->tableWidget->cellWidget(i, 6) == widget) {
            return i;
        }
    }
    return -1;
}

// Helper: add Modifier + Supprimer buttons to a given row
void MainWindow::addActionButtons(int row)
{
    QWidget* actionWidget = new QWidget();
    QHBoxLayout* layout = new QHBoxLayout(actionWidget);
    layout->setContentsMargins(4, 2, 4, 2);
    layout->setSpacing(6);

    QPushButton* btnEdit = new QPushButton("✏️");
    btnEdit->setToolTip("Modifier");
    btnEdit->setCursor(Qt::PointingHandCursor);
    btnEdit->setFixedSize(32, 32);
    btnEdit->setStyleSheet(
        "QPushButton {"
        "   background-color: #f39c12;"
        "   color: white;"
        "   border: none;"
        "   border-radius: 4px;"
        "   font-size: 14px;"
        "}"
        "QPushButton:hover {"
        "   background-color: #e67e22;"
        "}"
    );

    QPushButton* btnDelete = new QPushButton("🗑️");
    btnDelete->setToolTip("Supprimer");
    btnDelete->setCursor(Qt::PointingHandCursor);
    btnDelete->setFixedSize(32, 32);
    btnDelete->setStyleSheet(
        "QPushButton {"
        "   background-color: #e74c3c;"
        "   color: white;"
        "   border: none;"
        "   border-radius: 4px;"
        "   font-size: 14px;"
        "}"
        "QPushButton:hover {"
        "   background-color: #c0392b;"
        "}"
    );

    layout->addWidget(btnEdit);
    layout->addWidget(btnDelete);
    layout->addStretch();

    ui->tableWidget->setCellWidget(row, 6, actionWidget);

    // Connect Edit button — dynamically finds the correct row
    connect(btnEdit, &QPushButton::clicked, this, [this, actionWidget](){
        int currentRow = getRowForWidget(actionWidget);
        if (currentRow < 0) return;

        if(modifierClientWindow == nullptr) {
            modifierClientWindow = new ModifierClient();
            connect(modifierClientWindow, &ModifierClient::clientModified, this, &MainWindow::onClientModified);
        }

        // Get data from row
        QString m = ui->tableWidget->item(currentRow, 0)->text();
        QString n = ui->tableWidget->item(currentRow, 1)->text();
        QString e = ui->tableWidget->item(currentRow, 2)->text();
        QString b = ui->tableWidget->item(currentRow, 3)->text();
        QString s = ui->tableWidget->item(currentRow, 4)->text();
        QString p = ui->tableWidget->item(currentRow, 5)->text();

        modifierClientWindow->setClientData(m, n, e, b, s, p, currentRow);
        modifierClientWindow->show();
    });

    // Connect Delete button — dynamically finds the correct row
    connect(btnDelete, &QPushButton::clicked, this, [this, actionWidget](){
        int currentRow = getRowForWidget(actionWidget);
        if (currentRow < 0) return;

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmer Suppression",
                                      "Voulez-vous vraiment supprimer ce client ?",
                                      QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            ui->tableWidget->removeRow(currentRow);
        }
    });
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

    // Set row height
    ui->tableWidget->setRowHeight(row, 40);

    // Add action buttons
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
