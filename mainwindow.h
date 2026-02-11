#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ajouterclient.h"
#include "modifierclient.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnNouveau_clicked();
    void onClientAdded(QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement);
    void onClientModified(int row, QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement);

private:
    Ui::MainWindow *ui;
    AjouterClient *ajouterClientWindow;
    ModifierClient *modifierClientWindow;

    void addActionButtons(int row);
    int getRowForWidget(QWidget *widget);
};
#endif // MAINWINDOW_H
