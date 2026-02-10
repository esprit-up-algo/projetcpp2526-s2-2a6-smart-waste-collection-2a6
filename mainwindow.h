#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void goAffichage();
    void goAjout();
    void goModification();
    void goStatistiques();

    void handleEditClicked();
    void handleDeleteClicked();

private:
    Ui::MainWindow *ui;

    void applyStyleFix();          // <-- IMPORTANT: fixes QSS not applying
    void refreshActionButtons();
    void buildStatsCharts();

    void addExampleRow();
    void installActionButtonsForRow(int row);
};

#endif // MAINWINDOW_H
