#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    /* 
     * Note: To trigger the "Modifier" overlay, you will need to connect 
     * a signal from your table widget (e.g., cellDoubleClicked or a specific button in a row)
     * to a slot that:
     * 1. Retrieves the data for that row
     * 2. Populates the "modifier" page fields
     * 3. Calls ui->overlayModifier->setVisible(true);
     */
}

MainWindow::~MainWindow()
{
    delete ui;
}
