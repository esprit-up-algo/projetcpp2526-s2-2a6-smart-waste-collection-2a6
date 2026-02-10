#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup> // AJOUTÉ

#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnNouveau_clicked();
    void on_btnAnnuler_Ajout_clicked();
    void on_btnModifier_clicked();
    void on_btnAnalyser_clicked();
    void on_btnSimulerBadge_clicked();

    // On garde le bouton supprimer car il est utile
    void on_btnSupprimer_clicked();
    void on_cbProjetStats_currentIndexChanged(const QString &arg1);
    void on_btnFichePaie_clicked();

private:
    void setupStatistics();
    Ui::MainWindow *ui;
    //void setupCharts(); // Seems unused or removed in previous steps? but I will keep it consistent with the file content if it was there.
    // Wait, the file content shows setupCharts() in line 41. I should keep it.
    // Actually, to be safe, I will just target the specific lines I want to change.
    QButtonGroup *sidebarGroup; // AJOUTÉ
    void setupCharts(); 
    void updateTaskChart(const QString &projectName);
};

#endif // MAINWINDOW_H
