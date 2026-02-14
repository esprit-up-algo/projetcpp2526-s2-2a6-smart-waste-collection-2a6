#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
<<<<<<< HEAD
#include <QButtonGroup> // AJOUTÉ
=======
#include <QButtonGroup>
>>>>>>> 2a1db57 (atelier connexion)

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

<<<<<<< HEAD
=======
class QStackedWidget;
class QTableWidget;
class QWidget;

>>>>>>> 2a1db57 (atelier connexion)
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
<<<<<<< HEAD
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
=======
    // Employe
    void on_btnNouveau_clicked();
    void on_btnAjouter_clicked();
    void on_btnAnnuler_Ajout_clicked();
    void on_btnModifier_clicked();
    void on_btnSave_clicked();
    void on_btnAnalyser_clicked();
    void on_btnSimulerBadge_clicked();
    void on_btnSupprimer_clicked();
    void on_cbProjetStats_currentIndexChanged(const QString &arg1);
    void on_btnFichePaie_clicked();
    void on_btnCommsSend_clicked();

    // Client module slots (from mainwindowcl)
    void on_btnClient_clicked();
    void on_btn_ajouter_client_clicked();
    void on_btn_modifier_client_clicked();
    void on_btn_annuler_client_clicked();
    void on_btnNouveau_client_clicked();
    void onClientAdded(QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement);
    void onClientModified(int row, QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement);

    // Maintenance
    void on_btnSave_Add_clicked();
    void on_btnSave_Mod_clicked();
    void handleMaintEditClicked();
    void handleMaintDeleteClicked();

    // Produit
    void goAffichage();
    void goAjout();
    void goModification();
    void goStatistiques();

    void handleEditClicked();
    void handleDeleteClicked();

private:
    // Employe
    void setupStatistics();
    void setupAccueilDashboard();
    void setupDashboardCharts();
    void applyUnifiedTopBarStyle();
    void showDashboardHome();
    void showEmployesPage();
    void updateTaskChart(const QString &projectName);
    void installEmployeActionButtonsForRow(int row);
    void refreshEmployeActionButtons();

    // Produit
    void setupProduitModule();
    void applyStyleFix();
    void refreshActionButtons();
    void buildStatsCharts();
    void addExampleRow();
    void installActionButtonsForRow(int row);
    void ensureProduitModuleVisible();
    QString productStyleSheet() const;

    // Stock Module
    void setupStockModule();
    void setupStockTableData();
    void applyStockFilterAndSort();

    // Maintenance Module
    void setupMaintenanceModule();
    void refreshMaintActionButtons();
    void installMaintActionButtonsForRow(int row);
    QTableWidget* maintenanceTable() const;

    // Helpers for merged UI
    QStackedWidget *mainStacked() const;
    QWidget *produitRoot() const;
    QWidget *produitCentral() const;
    QStackedWidget *produitStacked() const;
    QWidget *produitPage(const char *objectName) const;
    QTableWidget *produitTable() const;

    Ui::MainWindow *ui;
    QButtonGroup *sidebarGroup;
    QWidget *homeDashboardPage;
    int currentEmployeRow; // To track which row is being modified in employee table
    int currentClientRow; // To track which row is being modified in client table
    int currentMaintRow;  // To track which row is being modified in maintenance table
    QWidget *globalStatsReturnPage;
    void addClientActionButtons(int row);
    int getRowForClientWidget(QWidget *widget);
    void forceApplySidebarStyles();
>>>>>>> 2a1db57 (atelier connexion)
};

#endif // MAINWINDOW_H
