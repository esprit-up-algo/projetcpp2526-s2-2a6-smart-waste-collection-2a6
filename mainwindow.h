#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>

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

class QStackedWidget;
class QTableWidget;
class QWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
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
    void onClientAdded(QString matricule, QString nom, QString email, QString type_contrat, QString status_payement);
    void onClientModified(int row, QString matricule, QString nom, QString email, QString type_contrat, QString status_payement);
    void on_exportclient_clicked();
    void setupEcoStats();

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

    // Card View Toggle (Produit)
    void slot_toggleView();

    // Pagination slots (Produit)
    void on_pagination_cbSize_currentIndexChanged(int index);
    void on_pagination_btnPrev_clicked();
    void on_pagination_btnNext_clicked();

    // Employee Card View
    void slot_toggleEmpView();
    void on_emp_pagination_cbSize_currentIndexChanged(int index);
    void on_emp_pagination_btnPrev_clicked();
    void on_emp_pagination_btnNext_clicked();

    // Stock Card View
    void slot_toggleStockView();
    void on_stock_pagination_cbSize_currentIndexChanged(int index);
    void on_stock_pagination_btnPrev_clicked();
    void on_stock_pagination_btnNext_clicked();

    // Client Card View
    void slot_toggleClientView();
    void on_client_pagination_cbSize_currentIndexChanged(int index);
    void on_client_pagination_btnPrev_clicked();
    void on_client_pagination_btnNext_clicked();

    // Maintenance Card View
    void slot_toggleMaintView();
    void on_maint_pagination_cbSize_currentIndexChanged(int index);
    void on_maint_pagination_btnPrev_clicked();
    void on_maint_pagination_btnNext_clicked();

    // Commande Card View
    void slot_toggleCmdView();
    void on_cmd_pagination_cbSize_currentIndexChanged(int index);
    void on_cmd_pagination_btnPrev_clicked();
    void on_cmd_pagination_btnNext_clicked();
    void applyEmpFilterAndSort();
    void applyClientFilterAndSort();
    void applyMaintFilterAndSort();
    void applyCmdFilterAndSort();
    void applyProduitFilterAndSort();

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

    // Card View implementation (Produit)
    void setupCardViewContainer();
    void refreshCardView();
    QWidget* createProductCard(int row);

    // Employee Card View implementation
    void setupEmpCardViewContainer();
    void refreshEmpCardView();
    QWidget* createEmployeeCard(int row);
    void setupEmployeModule();

    // Stock Module
    void setupStockModule();
    void setupStockTableData();
    void applyStockFilterAndSort();

    // Stock Card View implementation
    void setupStockCardViewContainer();
    void refreshStockCardView();
    QWidget* createStockCard(int row);

    // Client Card View implementation
    void setupClientCardViewContainer();
    void refreshClientCardView();
    QWidget* createClientCard(int row);

    // Maintenance Card View implementation
    void setupMaintCardViewContainer();
    void refreshMaintCardView();
    QWidget* createMaintCard(int row);

    // Commande Card View implementation
    void setupCmdCardViewContainer();
    void refreshCmdCardView();
    QWidget* createCmdCard(int row);

    // Maintenance Module
    void setupMaintenanceModule();
    void refreshMaintActionButtons();
    void installMaintActionButtonsForRow(int row);
    QTableWidget* maintenanceTable() const;

    // Commande Module
    void setupCommandesModule();
    void refreshCmdStats();
    void on_btnPdf_Cmd_clicked();


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

    // Card View state (Produit)
    bool m_isCardView = false;
    QGridLayout *m_cardLayout = nullptr;
    int m_currentPage = 0;
    int m_itemsPerPage = 6;

    // Card View state (Employe)
    bool m_isEmpCardView = false;
    QGridLayout *m_empCardLayout = nullptr;
    int m_empCurrentPage = 0;
    int m_empItemsPerPage = 6;

    // Card View state (Stock)
    bool m_isStockCardView = false;
    QGridLayout *m_stockCardLayout = nullptr;
    int m_stockCurrentPage = 0;
    int m_stockItemsPerPage = 6;

    // Card View state (Client)
    bool m_isClientCardView = false;
    QGridLayout *m_clientCardLayout = nullptr;
    int m_clientCurrentPage = 0;
    int m_clientItemsPerPage = 6;

    // Card View state (Maintenance)
    bool m_isMaintCardView = false;
    QGridLayout *m_maintCardLayout = nullptr;
    int m_maintCurrentPage = 0;
    int m_maintItemsPerPage = 6;

    // Card View state (Commande)
    bool m_isCmdCardView = false;
    QGridLayout *m_cmdCardLayout = nullptr;
    int m_cmdCurrentPage = 0;
    int m_cmdItemsPerPage = 6;

private slots:
    void on_btnToggleSidebar_clicked();

private:
   bool m_sidebarExpanded;
   void updateSidebarState();
};

#endif // MAINWINDOW_H
