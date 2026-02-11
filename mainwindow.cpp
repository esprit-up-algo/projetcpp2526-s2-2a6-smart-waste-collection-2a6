#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>
#include <QTime>
#include <QMessageBox>
#include <QInputDialog>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QBrush>
#include <QTimer>
#include <QFrame>
#include <QVBoxLayout>
#include <QApplication>
#include <QStyle>
#include <QStackedWidget>
#include <QLinearGradient>
#include <QPen>
#include <QPixmap>

#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>
#include <QtCharts/QLineSeries>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QAreaSeries>

static constexpr int ACTIONS_COL = 7;

namespace {
void enableStyledBgRecursive(QWidget *root)
{
    if (!root) return;

    root->setAttribute(Qt::WA_StyledBackground, true);

    const auto childs = root->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
    for (QWidget *c : childs)
        enableStyledBgRecursive(c);
}

void repolishRecursive(QWidget *root)
{
    if (!root) return;

    root->style()->unpolish(root);
    root->style()->polish(root);
    root->update();

    const auto childs = root->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
    for (QWidget *c : childs)
        repolishRecursive(c);
}
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , sidebarGroup(nullptr)
{
    ui->setupUi(this);

    // --- SIDEBAR NAVIGATION LOGIC ---
    sidebarGroup = new QButtonGroup(this);
    sidebarGroup->setExclusive(true);

    QList<QPushButton*> sidebarButtons = {
        ui->btnAccueil, ui->btnClient, ui->btnStock, ui->btnProduits,
        ui->btnEmployes, ui->btnStatistiques, ui->btnMaintenance,
        this->findChild<QPushButton*>("btnCommandes")
    };

    for (QPushButton* btn : sidebarButtons) {
        if (!btn) continue;
        btn->setCheckable(true);
        sidebarGroup->addButton(btn);
    }

    if (ui->btnEmployes)
        ui->btnEmployes->setChecked(true);

    connect(ui->btnEmployes, &QPushButton::clicked, this, [this](){
        if (auto *sw = mainStacked()) sw->setCurrentIndex(0);
    });
    connect(ui->btnAccueil, &QPushButton::clicked, this, [this](){
        if (auto *sw = mainStacked()) sw->setCurrentIndex(0);
    });
    connect(ui->btnProduits, &QPushButton::clicked, this, [this](){
        if (auto *sw = mainStacked()) {
            if (auto *page = sw->findChild<QWidget*>("pageProduit", Qt::FindDirectChildrenOnly)) {
                sw->setCurrentWidget(page);
                ensureProduitModuleVisible();
                // Always open the product dashboard when entering the module
                goAffichage();
            }
        }
    });
    connect(ui->btnStock, &QPushButton::clicked, this, [this](){
        if (auto *sw = mainStacked()) {
            if (auto *page = sw->findChild<QWidget*>("pageStock", Qt::FindDirectChildrenOnly)) {
                sw->setCurrentWidget(page);
            }
        }
    });

    connect(ui->btnClient, &QPushButton::clicked, this, &MainWindow::on_btnClient_clicked);

    // --- MAINTENANCE INTEGRATION ---
    connect(ui->btnMaintenance, &QPushButton::clicked, this, [this](){
        if (auto *sw = mainStacked()) {
            if (auto *page = sw->findChild<QWidget*>("page_Maintenance_Tab", Qt::FindDirectChildrenOnly)) {
                sw->setCurrentWidget(page);
            }
        }
    });

    // --- COMMANDES INTEGRATION ---
    // Note: Using findChild for safety against outdated ui headers during hot-reload
    QPushButton* btnCmd = this->findChild<QPushButton*>("btnCommandes");
    if (btnCmd) {
        sidebarGroup->addButton(btnCmd);
        btnCmd->setCheckable(true);
        connect(btnCmd, &QPushButton::clicked, this, [this](){
            if (auto *sw = mainStacked()) {
                if (auto *page = sw->findChild<QWidget*>("pageCmdDashboard", Qt::FindDirectChildrenOnly)) {
                    sw->setCurrentWidget(page);
                }
            }
        });
    }

    // Internal Navigation for Commandes
    auto safeConnectCmd = [this](const QString& btnName, const QString& targetPageName){
        QPushButton* btn = findChild<QPushButton*>(btnName); 
        QWidget* target = findChild<QWidget*>(targetPageName);
        if (btn && target && mainStacked()) {
             connect(btn, &QPushButton::clicked, this, [this, target](){
                 mainStacked()->setCurrentWidget(target);
             });
        }
    };
    
    safeConnectCmd("btnAddDashboard", "pageCmdAjout");
    safeConnectCmd("btnTempToModifier", "pageCmdModifier");
    safeConnectCmd("btnCancel_Mod", "pageCmdDashboard");
    safeConnectCmd("btnCancel_Mod_3", "pageCmdDashboard");

    // Internal Navigation for Maintenance
    // Note: Assuming these objects exist in the UI now
    // If not, these lines should be commented out or verified after uic build.
    // Logic: Connect Dashboard buttons to Stack switching
    auto safeConnect = [this](QPushButton* btn, QWidget* targetPage){
        if (btn && targetPage && ui->stackedWidget_Maintenance) {
             connect(btn, &QPushButton::clicked, this, [this, targetPage](){
                 ui->stackedWidget_Maintenance->setCurrentWidget(targetPage);
             });
        }
    };

    safeConnect(ui->btnGotoAjout, ui->page_Maint_Ajout);
    safeConnect(ui->btnGotoModifier, ui->page_Maint_Modif);
    
    // Back / Cancel buttons -> Return to Dashboard
    QList<QPushButton*> backButtons = {
        ui->btnBack_Ajout, ui->btnBack_Modif, 
        ui->btnCancel_Add, ui->btnCancel_Mod
    };
    for(auto* btn : backButtons) {
        safeConnect(btn, ui->page_Maint_Dash);
    }

    // --- REMPLISSAGE DU TABLEAU ---
    if (ui->tableEmployes) {
        ui->tableEmployes->setRowCount(0);

        for (int i = 1; i <= 5; ++i) {
            int row = ui->tableEmployes->rowCount();
            ui->tableEmployes->insertRow(row);

            ui->tableEmployes->setItem(row, 0, new QTableWidgetItem("EMP-00" + QString::number(i)));
            ui->tableEmployes->setItem(row, 1, new QTableWidgetItem("Employé Test " + QString::number(i)));
            ui->tableEmployes->setItem(row, 2, new QTableWidgetItem("Mécanicien"));
            ui->tableEmployes->setItem(row, 3, new QTableWidgetItem("Disponible"));

            QWidget* pWidget = new QWidget();
            QPushButton* btnEdit = new QPushButton("Modifier");
            btnEdit->setCursor(Qt::PointingHandCursor);
            btnEdit->setStyleSheet("QPushButton { background-color: #3498db; color: white; border-radius: 4px; padding: 4px 8px; font-weight: bold; }");

            QPushButton* btnDelete = new QPushButton("X");
            btnDelete->setCursor(Qt::PointingHandCursor);
            btnDelete->setStyleSheet("QPushButton { background-color: #e74c3c; color: white; border-radius: 4px; padding: 4px 8px; font-weight: bold; }");

            connect(btnEdit, &QPushButton::clicked, this, &MainWindow::on_btnModifier_clicked);
            connect(btnDelete, &QPushButton::clicked, this, &MainWindow::on_btnSupprimer_clicked);

            QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
            pLayout->addWidget(btnEdit);
            pLayout->addWidget(btnDelete);
            pLayout->setAlignment(Qt::AlignCenter);
            pLayout->setContentsMargins(0, 0, 0, 0);
            pWidget->setLayout(pLayout);

            ui->tableEmployes->setCellWidget(row, 4, pWidget);
        }
    }

    // Connexions
    connect(ui->btnAnalyser, &QPushButton::clicked, this, &MainWindow::on_btnAnalyser_clicked);
    connect(ui->btnSimulerBadge, &QPushButton::clicked, this, &MainWindow::on_btnSimulerBadge_clicked);
    connect(ui->btnNouveau, &QPushButton::clicked, this, &MainWindow::on_btnNouveau_clicked);
    connect(ui->btnAnnuler_Ajout, &QPushButton::clicked, this, &MainWindow::on_btnAnnuler_Ajout_clicked);
    connect(ui->btnAnnuler, &QPushButton::clicked, this, [this](){ if (auto *sw = mainStacked()) sw->setCurrentIndex(0); });
    connect(ui->btnFichePaie, &QPushButton::clicked, this, &MainWindow::on_btnFichePaie_clicked);

    // --- NAVIGATION DASHBOARD (ACTIONS RAPIDES) ---
    connect(ui->btnGoMission, &QPushButton::clicked, this, [this](){ if (auto *sw = mainStacked()) sw->setCurrentIndex(3); });
    connect(ui->btnGoPointage, &QPushButton::clicked, this, [this](){ if (auto *sw = mainStacked()) sw->setCurrentIndex(4); });
    connect(ui->btnGoStats, &QPushButton::clicked, this, [this](){ if (auto *sw = mainStacked()) sw->setCurrentIndex(5); });

    // --- BOUTONS ANNULER / RETOUR ---
    connect(ui->btnAnnulerMission, &QPushButton::clicked, this, [this](){ if (auto *sw = mainStacked()) sw->setCurrentIndex(0); });
    connect(ui->btnAnnulerPointage, &QPushButton::clicked, this, [this](){ if (auto *sw = mainStacked()) sw->setCurrentIndex(0); });
    connect(ui->btnAnnulerStats, &QPushButton::clicked, this, [this](){ if (auto *sw = mainStacked()) sw->setCurrentIndex(0); });

    // Connexion ComboBox Projet Stats
    connect(ui->cbProjetStats, &QComboBox::currentTextChanged, this, &MainWindow::updateTaskChart);

    // --- SLIDERS DYNAMIQUES (SALAIRE) ---
    connect(ui->sliderSalaire_Ajout, &QSlider::valueChanged, [=](int value){
        ui->lblValSalaire_Ajout->setText(QString::number(value) + " DT");
    });
    ui->lblValSalaire_Ajout->setText(QString::number(ui->sliderSalaire_Ajout->value()) + " DT");

    connect(ui->sliderSalaire_Modif, &QSlider::valueChanged, [=](int value){
        ui->lblValSalaire_Modif->setText(QString::number(value) + " DT");
    });
    ui->lblValSalaire_Modif->setText(QString::number(ui->sliderSalaire_Modif->value()) + " DT");

    // --- CLIENT INITIALIZATION ---
    if (ui->tableWidget_Client) {
        ui->tableWidget_Client->setColumnCount(7);
        QStringList headers = { "Matricule", "Nom", "Email", "Bacs", "Score", "Paiement", "Actions" };
        ui->tableWidget_Client->setHorizontalHeaderLabels(headers);
        ui->tableWidget_Client->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        
        // Add default example client
        int row = ui->tableWidget_Client->rowCount();
        ui->tableWidget_Client->insertRow(row);
        ui->tableWidget_Client->setItem(row, 0, new QTableWidgetItem("CL-001"));
        ui->tableWidget_Client->setItem(row, 1, new QTableWidgetItem("Jean Dupont"));
        ui->tableWidget_Client->setItem(row, 2, new QTableWidgetItem("jean.dupont@email.com"));
        ui->tableWidget_Client->setItem(row, 3, new QTableWidgetItem("5"));
        ui->tableWidget_Client->setItem(row, 4, new QTableWidgetItem("85"));
        ui->tableWidget_Client->setItem(row, 5, new QTableWidgetItem("Mensuel"));
        addClientActionButtons(row);
    }
    if (ui->btn_save_ajouter) connect(ui->btn_save_ajouter, &QPushButton::clicked, this, &MainWindow::on_btn_ajouter_client_clicked);
    if (ui->btn_annuler_ajouter) connect(ui->btn_annuler_ajouter, &QPushButton::clicked, this, &MainWindow::on_btn_annuler_client_clicked);
    if (ui->btn_save_modifier) connect(ui->btn_save_modifier, &QPushButton::clicked, this, &MainWindow::on_btn_modifier_client_clicked);
    if (ui->btn_annuler_modifier) connect(ui->btn_annuler_modifier, &QPushButton::clicked, this, &MainWindow::on_btn_annuler_client_clicked);
    if (ui->btnNouveau_Client) connect(ui->btnNouveau_Client, &QPushButton::clicked, this, &MainWindow::on_btnNouveau_client_clicked);

    setupStatistics();
    setupProduitModule();
    setupStockModule();
    setupMaintenanceModule();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// --- NAVIGATION ---
void MainWindow::on_btnNouveau_clicked() { if (auto *sw = mainStacked()) sw->setCurrentIndex(2); }
void MainWindow::on_btnAnnuler_Ajout_clicked() { if (auto *sw = mainStacked()) sw->setCurrentIndex(0); }
void MainWindow::on_btnModifier_clicked() { if (auto *sw = mainStacked()) sw->setCurrentIndex(1); }

// --- SUPPRESSION ---
void MainWindow::on_btnSupprimer_clicked()
{
    QMessageBox::question(this, "Supprimer", "Voulez-vous vraiment supprimer cet employé ?", QMessageBox::Yes|QMessageBox::No);
}

// --- MISSION IA ---
void MainWindow::on_btnAnalyser_clicked()
{
    ui->tableResultat->setRowCount(0);
    ui->tableResultat->insertRow(0);
    ui->tableResultat->setItem(0, 0, new QTableWidgetItem("EMP-001"));
    ui->tableResultat->setItem(0, 1, new QTableWidgetItem("Ali Ben Salah"));
    ui->tableResultat->setItem(0, 2, new QTableWidgetItem("🔧 Moteur Diesel"));
    QTableWidgetItem* score1 = new QTableWidgetItem("99%");
    score1->setForeground(QBrush(QColor("#27ae60")));
    ui->tableResultat->setItem(0, 3, score1);
}

// --- POINTAGE ---
void MainWindow::on_btnSimulerBadge_clicked()
{
    ui->lblStatutRFID->setText("✅ BADGE ACCEPTÉ");
    ui->lblStatutRFID->setStyleSheet("background-color: #2ecc71; color: white; font-size: 24px; font-weight: bold; border-radius: 10px; padding: 20px; border: 2px solid #27ae60;");

    int row = ui->tablePointage->rowCount();
    ui->tablePointage->insertRow(row);
    ui->tablePointage->setItem(row, 0, new QTableWidgetItem(QTime::currentTime().toString("HH:mm:ss")));
    ui->tablePointage->setItem(row, 1, new QTableWidgetItem("BADGE-123"));
    ui->tablePointage->setItem(row, 2, new QTableWidgetItem("Ali Ben Salah"));

    QTableWidgetItem* status = new QTableWidgetItem("PRÉSENT");
    status->setForeground(QBrush(QColor("#27ae60")));
    ui->tablePointage->setItem(row, 3, status);
}

void MainWindow::on_btnFichePaie_clicked()
{
    QInputDialog dialog(this);
    dialog.setWindowTitle("Fiche de Paie");
    dialog.setLabelText("Veuillez entrer le matricule de l'employé :");
    dialog.setTextValue("");
    dialog.setInputMode(QInputDialog::TextInput);
    dialog.resize(400, 200);

    dialog.setStyleSheet(
        "QDialog { background-color: white; }"
        "QLabel { color: #333333; font-weight: bold; font-size: 14px; }"
        "QLineEdit { border: 1px solid #ccc; border-radius: 5px; padding: 5px; color: black; }"
        "QPushButton { "
        "   background-color: #0f2b4c; "
        "   color: white; "
        "   border: none; "
        "   border-radius: 5px; "
        "   padding: 8px 15px; "
        "   font-weight: bold; "
        "   min-width: 70px; "
        "}"
        "QPushButton:hover { background-color: #1a4270; }"
    );

    if (dialog.exec() == QDialog::Accepted) {
        QString matricule = dialog.textValue();
        if (!matricule.isEmpty()) {
            QMessageBox::information(this, "Génération en cours",
                                     "✅ Génération de la fiche de paie pour le matricule : " + matricule);
        }
    }
}

void MainWindow::setupStatistics()
{
    QPieSeries *absenceSeries = new QPieSeries();
    absenceSeries->append("Présent", 85);
    absenceSeries->append("Absent", 15);

    QPieSlice *presentSlice = absenceSeries->slices().at(0);
    presentSlice->setLabelVisible(true);
    presentSlice->setBrush(QColor("#27ae60"));
    presentSlice->setLabelColor(Qt::black);

    QPieSlice *absentSlice = absenceSeries->slices().at(1);
    absentSlice->setLabelVisible(true);
    absentSlice->setExploded(true);
    absentSlice->setBrush(QColor("#c0392b"));
    absentSlice->setLabelColor(Qt::black);

    QChart *absenceChart = new QChart();
    absenceChart->addSeries(absenceSeries);
    absenceChart->setTitle("Taux de Présence Global");
    absenceChart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));
    absenceChart->legend()->setAlignment(Qt::AlignBottom);
    absenceChart->setAnimationOptions(QChart::SeriesAnimations);

    ui->chartViewAbsence->setChart(absenceChart);
    ui->chartViewAbsence->setRenderHint(QPainter::Antialiasing);

    QBarSet *set0 = new QBarSet("Heures Travaillées");
    *set0 << 40 << 35 << 42 << 38 << 45;
    set0->setColor(QColor("#3498db"));

    QBarSeries *workloadSeries = new QBarSeries();
    workloadSeries->append(set0);

    QChart *workloadChart = new QChart();
    workloadChart->addSeries(workloadSeries);
    workloadChart->setTitle("Charge de Travail par Employé (Semaine)");
    workloadChart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));
    workloadChart->setAnimationOptions(QChart::SeriesAnimations);
    workloadChart->legend()->setVisible(false);

    QStringList categories;
    categories << "Ali" << "Sara" << "Mohamed" << "Rania" << "Karim";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    workloadChart->addAxis(axisX, Qt::AlignBottom);
    workloadSeries->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 50);
    axisY->setTitleText("Heures / Semaine");
    workloadChart->addAxis(axisY, Qt::AlignLeft);
    workloadSeries->attachAxis(axisY);

    ui->chartViewWorkload->setChart(workloadChart);
    ui->chartViewWorkload->setRenderHint(QPainter::Antialiasing);

    updateTaskChart("Projet A");
}

void MainWindow::updateTaskChart(const QString &projectName)
{
    QLineSeries *series = new QLineSeries();
    series->setName("Tâches accomplies - " + projectName);

    if (projectName == "Projet A") {
        series->append(0, 12);
        series->append(1, 18);
        series->append(2, 10);
        series->append(3, 22);
        series->append(4, 15);
    } else if (projectName == "Projet B") {
        series->append(0, 5);
        series->append(1, 8);
        series->append(2, 12);
        series->append(3, 10);
        series->append(4, 20);
    } else {
        series->append(0, 8);
        series->append(1, 15);
        series->append(2, 18);
        series->append(3, 12);
        series->append(4, 25);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Progression : " + projectName);
    chart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QValueAxis *axisX = new QValueAxis();
    axisX->setTitleText("Jours");
    axisX->setLabelFormat("%d");
    axisX->setTickCount(6);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Tâches");
    axisY->setLabelFormat("%d");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    ui->chartViewTasks->setChart(chart);
    ui->chartViewTasks->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::on_cbProjetStats_currentIndexChanged(const QString &arg1)
{
    updateTaskChart(arg1);
}

// ---------- Produit module helpers ----------
QStackedWidget *MainWindow::mainStacked() const
{
    if (!ui) return nullptr;

    QStackedWidget *candidate = ui->stackedWidget;
    if (candidate) {
        if (candidate->findChild<QWidget*>("pageProduit", Qt::FindDirectChildrenOnly))
            return candidate;
    }

    const auto stacks = this->findChildren<QStackedWidget*>();
    for (QStackedWidget *sw : stacks) {
        if (sw->findChild<QWidget*>("pageProduit", Qt::FindDirectChildrenOnly))
            return sw;
    }

    return candidate;
}

QWidget *MainWindow::produitRoot() const
{
    return ui ? ui->pageProduit : nullptr;
}

QWidget *MainWindow::produitCentral() const
{
    QWidget *root = produitRoot();
    return root ? root->findChild<QWidget*>("centralwidget") : nullptr;
}

QStackedWidget *MainWindow::produitStacked() const
{
    QWidget *root = produitRoot();
    if (!root) return nullptr;
    if (auto *sw = root->findChild<QStackedWidget*>("prod_stackedWidget"))
        return sw;
    return root->findChild<QStackedWidget*>("stackedWidget");
}

QWidget *MainWindow::produitPage(const char *objectName) const
{
    QWidget *root = produitRoot();
    return root ? root->findChild<QWidget*>(objectName) : nullptr;
}

QTableWidget *MainWindow::produitTable() const
{
    QWidget *root = produitRoot();
    if (!root) return nullptr;
    if (auto *t = root->findChild<QTableWidget*>("prod_tableProduits"))
        return t;
    return root->findChild<QTableWidget*>("tableProduits");
}

void MainWindow::setupProduitModule()
{
    QWidget *root = produitRoot();
    if (!root) return;

    ensureProduitModuleVisible();

    if (auto *left = root->findChild<QWidget*>("prod_leftSidebar"))
        left->setAttribute(Qt::WA_StyledBackground, true);
    else if (auto *left = root->findChild<QWidget*>("leftSidebar"))
        left->setAttribute(Qt::WA_StyledBackground, true);
    if (auto *right = root->findChild<QWidget*>("prod_rightSidebar"))
        right->setAttribute(Qt::WA_StyledBackground, true);
    if (auto *right = root->findChild<QFrame*>("prod_rightSidebar")) {
        right->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        right->setMinimumHeight(0);
    }
    else if (auto *right = root->findChild<QWidget*>("rightSidebar"))
        right->setAttribute(Qt::WA_StyledBackground, true);

    applyStyleFix();
    goAffichage();

    if (auto *btnAdd = root->findChild<QPushButton*>("prod_btnAddProduct"))
        connect(btnAdd, &QPushButton::clicked, this, &MainWindow::goAjout);
    else if (auto *btnAdd = root->findChild<QPushButton*>("btnAddProduct"))
        connect(btnAdd, &QPushButton::clicked, this, &MainWindow::goAjout);

    if (auto *btnStats = root->findChild<QPushButton*>("prod_btnOpenStats"))
        connect(btnStats, &QPushButton::clicked, this, &MainWindow::goStatistiques);
    else if (auto *btnStats = root->findChild<QPushButton*>("btnOpenStats"))
        connect(btnStats, &QPushButton::clicked, this, &MainWindow::goStatistiques);

    if (auto *b = root->findChild<QPushButton*>("prod_btnCancel_Add"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    else if (auto *b = root->findChild<QPushButton*>("btnCancel_Add"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    if (auto *b = root->findChild<QPushButton*>("prod_btnCancel_Mod"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    else if (auto *b = root->findChild<QPushButton*>("btnCancel_Mod"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    if (auto *b = root->findChild<QPushButton*>("prod_btnRetourStats"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    else if (auto *b = root->findChild<QPushButton*>("btnRetourStats"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    if (auto *b = root->findChild<QPushButton*>("prod_btnReturnStats"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    else if (auto *b = root->findChild<QPushButton*>("btnReturnStats"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);

    if (QTableWidget *t = produitTable()) {
        if (t->columnCount() < 8)
            t->setColumnCount(8);

        t->verticalHeader()->setDefaultSectionSize(36);
        t->setWordWrap(false);

        t->horizontalHeader()->setStretchLastSection(true);
        t->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        addExampleRow();

        QTimer::singleShot(0, this, [this]() {
            refreshActionButtons();
        });
    }

    buildStatsCharts();
}

void MainWindow::ensureProduitModuleVisible()
{
    QWidget *root = produitRoot();
    if (!root) return;

    if (auto *left = root->findChild<QWidget*>("prod_leftSidebar")) {
        left->setVisible(false);
        left->setMinimumWidth(0);
        left->setMaximumWidth(0);
    }

    if (auto *sw = root->findChild<QStackedWidget*>("SWSmartMarket")) {
        if (auto *page = root->findChild<QWidget*>("PModule2")) {
            sw->setCurrentWidget(page);
        } else if (auto *page = root->findChild<QWidget*>("PModule1")) {
            sw->setCurrentWidget(page);
        }
    }
}

void MainWindow::applyStyleFix()
{
    QWidget *root = produitCentral();
    if (!root)
        root = produitRoot();
    if (!root)
        return;

    enableStyledBgRecursive(root);

    const QString qss = productStyleSheet();
    if (!qss.isEmpty()) {
        if (auto *module = produitRoot() ? produitRoot()->findChild<QWidget*>("PModule2") : nullptr) {
            module->setStyleSheet(qss);
        } else if (auto *module = produitRoot() ? produitRoot()->findChild<QWidget*>("PModule1") : nullptr) {
            module->setStyleSheet(qss);
        } else {
            root->setStyleSheet(qss);
        }
    }

    repolishRecursive(root);
}

// ---------- Produit module navigation ----------
void MainWindow::goAffichage()
{
    if (auto *stack = produitStacked()) {
        if (auto *page = produitPage("prod_affichage"))
            stack->setCurrentWidget(page);
        else if (auto *page = produitPage("affichage"))
            stack->setCurrentWidget(page);
    }
    applyStyleFix();
}

void MainWindow::goAjout()
{
    if (auto *stack = produitStacked()) {
        if (auto *page = produitPage("prod_ajout"))
            stack->setCurrentWidget(page);
        else if (auto *page = produitPage("ajout"))
            stack->setCurrentWidget(page);
    }
    applyStyleFix();
}

void MainWindow::goModification()
{
    if (auto *stack = produitStacked()) {
        if (auto *page = produitPage("prod_modification"))
            stack->setCurrentWidget(page);
        else if (auto *page = produitPage("modification"))
            stack->setCurrentWidget(page);
    }
    applyStyleFix();
}

void MainWindow::goStatistiques()
{
    if (auto *stack = produitStacked()) {
        if (auto *page = produitPage("prod_statistiques"))
            stack->setCurrentWidget(page);
        else if (auto *page = produitPage("statistiques"))
            stack->setCurrentWidget(page);
    }

    buildStatsCharts();
    applyStyleFix();
}

// ---------- Produit module table ----------
void MainWindow::addExampleRow()
{
    QTableWidget *t = produitTable();
    if (!t) return;

    int row = t->rowCount();
    t->insertRow(row);

    QColor textColor = Qt::black;

    auto setCell = [&](int col, const QString &txt)
    {
        auto *it = new QTableWidgetItem(txt);
        it->setForeground(QBrush(textColor));
        t->setItem(row, col, it);
    };

    setCell(0, "WG-001");
    setCell(1, "SmartBin X1");
    setCell(2, "Intérieur");
    setCell(3, "60 L");
    setCell(4, "450");
    setCell(5, "12");
    setCell(6, "Actif");
}

void MainWindow::installActionButtonsForRow(int row)
{
    QTableWidget *t = produitTable();
    if (!t) return;
    if (row < 0 || row >= t->rowCount()) return;
    if (t->columnCount() <= ACTIONS_COL) return;

    if (QWidget *existing = t->cellWidget(row, ACTIONS_COL)) {
        const auto buttons = existing->findChildren<QPushButton*>();
        for (auto *b : buttons) b->setProperty("row", row);
        return;
    }

    QWidget *cell = new QWidget(t);
    auto *layout = new QHBoxLayout(cell);
    layout->setContentsMargins(6, 0, 6, 0);
    layout->setSpacing(6);
    layout->setAlignment(Qt::AlignCenter);

    auto *btnEdit = new QPushButton("Modifier", cell);
    auto *btnDel  = new QPushButton("Supprimer", cell);

    btnEdit->setStyleSheet("QPushButton { background-color: #3498db; color: white; border-radius: 4px; padding: 4px 8px; font-weight: bold; }");
    btnDel->setStyleSheet("QPushButton { background-color: #e74c3c; color: white; border-radius: 4px; padding: 4px 8px; font-weight: bold; }");

    btnEdit->setFixedHeight(24);
    btnDel->setFixedHeight(24);
    btnEdit->setFocusPolicy(Qt::NoFocus);
    btnDel->setFocusPolicy(Qt::NoFocus);
    btnEdit->setCursor(Qt::PointingHandCursor);
    btnDel->setCursor(Qt::PointingHandCursor);

    btnEdit->setToolTip("Modifier");
    btnDel->setToolTip("Supprimer");

    btnEdit->setProperty("row", row);
    btnDel->setProperty("row", row);

    layout->addWidget(btnEdit);
    layout->addWidget(btnDel);

    t->setCellWidget(row, ACTIONS_COL, cell);

    connect(btnEdit, &QPushButton::clicked, this, &MainWindow::handleEditClicked);
    connect(btnDel,  &QPushButton::clicked, this, &MainWindow::handleDeleteClicked);
}

void MainWindow::refreshActionButtons()
{
    QTableWidget *t = produitTable();
    if (!t) return;

    for (int r = 0; r < t->rowCount(); ++r)
        installActionButtonsForRow(r);
}

void MainWindow::handleEditClicked()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    QTableWidget *t = produitTable();
    if (!t) return;

    int row = btn->property("row").toInt();
    if (row < 0 || row >= t->rowCount()) return;

    goModification();
}

void MainWindow::handleDeleteClicked()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    QTableWidget *t = produitTable();
    if (!t) return;

    int row = btn->property("row").toInt();
    if (row < 0 || row >= t->rowCount()) return;

    t->removeRow(row);
    refreshActionButtons();
}

// ---------- Maintenance Module Implementation ----------

QTableWidget* MainWindow::maintenanceTable() const {
    return ui->tableMaintenance;
}

void MainWindow::setupMaintenanceModule() {
    if (auto* table = maintenanceTable()) {
        table->setColumnCount(7);
        QStringList headers = { "Reference", "Date", "Technicien", "Coût", "Durée", "Priorité", "Actions" };
        table->setHorizontalHeaderLabels(headers);
        table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        table->setRowCount(0);
        
        // Add example row
        int row = table->rowCount();
        table->insertRow(row);
        table->setItem(row, 0, new QTableWidgetItem("INT-001"));
        table->setItem(row, 1, new QTableWidgetItem("2024-02-11"));
        table->setItem(row, 2, new QTableWidgetItem("Ahmed Ali"));
        table->setItem(row, 3, new QTableWidgetItem("150.0 DT"));
        table->setItem(row, 4, new QTableWidgetItem("2h"));
        table->setItem(row, 5, new QTableWidgetItem("Normale"));
        
        refreshMaintActionButtons();
    }
    
    if (ui->btnSave_Add) connect(ui->btnSave_Add, &QPushButton::clicked, this, &MainWindow::on_btnSave_Add_clicked);
    if (ui->btnSave_Mod) connect(ui->btnSave_Mod, &QPushButton::clicked, this, &MainWindow::on_btnSave_Mod_clicked);
}

void MainWindow::refreshMaintActionButtons() {
    auto* table = maintenanceTable();
    if (!table) return;
    for (int i = 0; i < table->rowCount(); ++i) {
        installMaintActionButtonsForRow(i);
    }
}

void MainWindow::installMaintActionButtonsForRow(int row) {
    auto* table = maintenanceTable();
    if (!table) return;

    QWidget* pWidget = new QWidget();
    QPushButton* btnEdit = new QPushButton("Modifier");
    btnEdit->setCursor(Qt::PointingHandCursor);
    btnEdit->setStyleSheet("QPushButton { background-color: #3498db; color: white; border-radius: 4px; padding: 4px 8px; font-weight: bold; }");

    QPushButton* btnDelete = new QPushButton("Supprimer");
    btnDelete->setCursor(Qt::PointingHandCursor);
    btnDelete->setStyleSheet("QPushButton { background-color: #e74c3c; color: white; border-radius: 4px; padding: 4px 8px; font-weight: bold; }");

    btnEdit->setProperty("row", row);
    btnDelete->setProperty("row", row);

    connect(btnEdit, &QPushButton::clicked, this, &MainWindow::handleMaintEditClicked);
    connect(btnDelete, &QPushButton::clicked, this, &MainWindow::handleMaintDeleteClicked);

    QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
    pLayout->addWidget(btnEdit);
    pLayout->addWidget(btnDelete);
    pLayout->setAlignment(Qt::AlignCenter);
    pLayout->setContentsMargins(0, 0, 0, 0);
    pWidget->setLayout(pLayout);

    table->setCellWidget(row, 6, pWidget);
}

void MainWindow::on_btnSave_Add_clicked() {
    auto* table = maintenanceTable();
    if (!table) return;

    int row = table->rowCount();
    table->insertRow(row);
    table->setItem(row, 0, new QTableWidgetItem(ui->editRefAdd->text()));
    table->setItem(row, 1, new QTableWidgetItem(ui->dateAdd->date().toString("yyyy-MM-dd")));
    table->setItem(row, 2, new QTableWidgetItem(ui->editTechAdd->text()));
    table->setItem(row, 3, new QTableWidgetItem(QString::number(ui->spinCoutAdd->value()) + " DT"));
    table->setItem(row, 4, new QTableWidgetItem(ui->comboDurAdd->currentText()));
    table->setItem(row, 5, new QTableWidgetItem(ui->comboPrioAdd->currentText()));

    installMaintActionButtonsForRow(row);
    ui->stackedWidget_Maintenance->setCurrentWidget(ui->page_Maint_Dash);
    
    // Clear fields
    ui->editRefAdd->clear();
    ui->editTechAdd->clear();
    ui->spinCoutAdd->setValue(0);
}

void MainWindow::on_btnSave_Mod_clicked() {
    auto* table = maintenanceTable();
    if (!table || currentMaintRow < 0) return;

    table->item(currentMaintRow, 0)->setText(ui->editRefMod->text());
    table->item(currentMaintRow, 1)->setText(ui->dateMod->date().toString("yyyy-MM-dd"));
    table->item(currentMaintRow, 2)->setText(ui->editTechMod->text());
    table->item(currentMaintRow, 3)->setText(QString::number(ui->spinCoutMod->value()) + " DT");
    table->item(currentMaintRow, 4)->setText(ui->comboDurMod->currentText());
    table->item(currentMaintRow, 5)->setText(ui->comboPrioMod->currentText());

    ui->stackedWidget_Maintenance->setCurrentWidget(ui->page_Maint_Dash);
}

void MainWindow::handleMaintEditClicked() {
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;
    int row = btn->property("row").toInt();
    currentMaintRow = row;

    auto* table = maintenanceTable();
    ui->editRefMod->setText(table->item(row, 0)->text());
    ui->dateMod->setDate(QDate::fromString(table->item(row, 1)->text(), "yyyy-MM-dd"));
    ui->editTechMod->setText(table->item(row, 2)->text());
    
    QString coutStr = table->item(row, 3)->text().replace(" DT", "");
    ui->spinCoutMod->setValue(coutStr.toDouble());
    
    ui->comboDurMod->setCurrentText(table->item(row, 4)->text());
    ui->comboPrioMod->setCurrentText(table->item(row, 5)->text());

    ui->stackedWidget_Maintenance->setCurrentWidget(ui->page_Maint_Modif);
}

void MainWindow::handleMaintDeleteClicked() {
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;
    int row = btn->property("row").toInt();

    if (QMessageBox::question(this, "Supprimer", "Voulez-vous vraiment supprimer cette intervention ?", QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes) {
        maintenanceTable()->removeRow(row);
        refreshMaintActionButtons();
    }
}

// ---------- Produit module stats ----------
void MainWindow::buildStatsCharts()
{
    QWidget *root = produitRoot();
    if (!root) return;

    QFrame *chart1Host = root->findChild<QFrame*>("prod_graphFrame1Plot");
    if (!chart1Host)
        chart1Host = root->findChild<QFrame*>("graphFrame1Plot");
    QFrame *chart2Host = root->findChild<QFrame*>("prod_graphFrame2Plot");
    if (!chart2Host)
        chart2Host = root->findChild<QFrame*>("graphFrame2Plot");
    if (!chart1Host || !chart2Host) return;

    auto clearAndLayout = [](QWidget *w) {
        if (!w) return;
        if (w->layout()) {
            QLayoutItem *child;
            while ((child = w->layout()->takeAt(0)) != nullptr) {
                if (child->widget()) child->widget()->deleteLater();
                delete child;
            }
            delete w->layout();
        }
        auto *lay = new QVBoxLayout(w);
        lay->setContentsMargins(0,0,0,0);
        lay->setSpacing(0);
    };

    clearAndLayout(chart1Host);
    clearAndLayout(chart2Host);

    chart1Host->setMinimumHeight(260);
    chart2Host->setMinimumHeight(260);

    auto *donutSeries = new QPieSeries();
    donutSeries->setHoleSize(0.35);
    donutSeries->append("Produits", 45);
    donutSeries->append("Stock", 30);
    donutSeries->append("Maintenance", 15);
    donutSeries->append("Commandes", 10);

    for (auto *slice : donutSeries->slices()) {
        slice->setLabelVisible(true);
        slice->setLabelColor(Qt::white);
        slice->setLabelPosition(QPieSlice::LabelInsideHorizontal);
        slice->setBorderWidth(2);
        slice->setBorderColor(Qt::white);
    }
    if (!donutSeries->slices().isEmpty()) {
        auto *s = donutSeries->slices().at(0);
        s->setExploded(true);
        s->setLabelVisible(true);
        s->setLabelPosition(QPieSlice::LabelOutside);
        s->setLabelColor(Qt::black);
    }

    auto *donutChart = new QChart();
    donutChart->addSeries(donutSeries);
    donutChart->setTitle("Répartition Globale (Donut)");
    donutChart->setTheme(QChart::ChartThemeBlueCerulean);
    donutChart->setAnimationOptions(QChart::AllAnimations);
    donutChart->legend()->setAlignment(Qt::AlignRight);
    donutChart->legend()->setFont(QFont("Segoe UI", 9));
    donutChart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));

    auto *donutView = new QChartView(donutChart);
    donutView->setRenderHint(QPainter::Antialiasing);

    auto *splineSeries = new QSplineSeries();
    splineSeries->setName("Croissance");
    splineSeries->append(1, 10);
    splineSeries->append(2, 22);
    splineSeries->append(3, 18);
    splineSeries->append(4, 32);
    splineSeries->append(5, 28);
    splineSeries->append(6, 45);

    auto *areaSeries = new QAreaSeries(splineSeries);
    areaSeries->setName("Zone de Croissance");

    QLinearGradient gradient(QPointF(0, 0), QPointF(0, 1));
    gradient.setColorAt(0.0, QColor(0x3498db));
    gradient.setColorAt(1.0, QColor(0xecf0f1));
    areaSeries->setBrush(gradient);

    QPen pen(0x2980b9);
    pen.setWidth(3);
    areaSeries->setPen(pen);

    auto *areaChart = new QChart();
    areaChart->addSeries(areaSeries);
    areaChart->setTitle("Évolution Dynamique");
    areaChart->setTheme(QChart::ChartThemeLight);
    areaChart->setAnimationOptions(QChart::SeriesAnimations);
    areaChart->legend()->setAlignment(Qt::AlignBottom);
    areaChart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));

    auto *axisX = new QValueAxis();
    axisX->setRange(1, 6);
    axisX->setLabelFormat("%d");
    axisX->setTickCount(6);
    areaChart->addAxis(axisX, Qt::AlignBottom);
    areaSeries->attachAxis(axisX);

    auto *axisY = new QValueAxis();
    axisY->setRange(0, 50);
    areaChart->addAxis(axisY, Qt::AlignLeft);
    areaSeries->attachAxis(axisY);

    auto *areaView = new QChartView(areaChart);
    areaView->setRenderHint(QPainter::Antialiasing);

    if (!chart1Host->layout()) new QVBoxLayout(chart1Host);
    if (!chart2Host->layout()) new QVBoxLayout(chart2Host);

    chart1Host->layout()->addWidget(donutView);
    chart2Host->layout()->addWidget(areaView);
}

QString MainWindow::productStyleSheet() const
{
    QString qss = QStringLiteral(R"(
/* GLOBAL SETTINGS */

* { font-family: 'Segoe UI', Arial, sans-serif; }

QMainWindow, QWidget#centralwidget, QTabWidget::pane { background-color: #eff3f8; border: none; }

/* SIDEBAR */

QWidget#leftSidebar QPushButton {
    background-color: transparent;
    border: none;
    color: #bdc3c7;
    text-align: left;
    padding: 12px 20px;
    font-size: 14px;
    border-left: 3px solid transparent;
}

QWidget#leftSidebar QPushButton:hover, QWidget#leftSidebar QPushButton:checked {
    background-color: #1a4270;
    color: white;
    border-left: 3px solid #3498db;
}

/* TOP BAR */

QWidget#horizontalLayoutWidget_1, QWidget#horizontalLayoutWidget_2, QWidget#horizontalLayoutWidget_3 { background-color: #3b6998; }

QLabel#lb_1, QLabel#lb_2, QLabel#lb_3, QLabel#user_1, QLabel#user_2, QLabel#user_3 { color: white; font-weight: bold; font-size: 14px; }

QPushButton#btnnotif_1, QPushButton#btnprofil_1, QPushButton#btnnotif_2, QPushButton#btnprofil_2, QPushButton#btnnotif_3, QPushButton#btnprofil_3 { background-color: rgba(255, 255, 255, 0.2); border-radius: 4px; padding: 5px 15px; }

/* DASHBOARD TABLE & CONTROLS */

QTableWidget { background-color: white; border: 1px solid #dce1e8; border-radius: 8px; gridline-color: #f0f0f0; selection-background-color: #e3f2fd; selection-color: #333; }

QHeaderView::section { background-color: white; color: #333; font-weight: bold; border: none; border-bottom: 2px solid #3b6998; padding: 8px; }

QLineEdit#searchInput { background-color: white; border: 1px solid #ccc; padding: 5px; border-radius: 4px; }

QComboBox#cbSort { background-color: white; border: 1px solid #ccc; padding: 5px; border-radius: 4px; }

QPushButton#btnAddProduct { background-color: #3b6998; color: white; font-weight: bold; border-radius: 4px; padding: 5px 15px; }

/* COMMON FORM STYLES */

QFrame#cardAdd, QFrame#cardMod, QFrame#rightSidebar { background-color: white; border-radius: 15px; border: 1px solid #dce1e8; }

QLabel { color: #37474f; font-weight: 700; font-size: 13px; margin-bottom: 2px; }

QLineEdit, QComboBox, QSpinBox, QDoubleSpinBox { background-color: #f7f9fc; border: 1px solid #cfd8dc; border-radius: 6px; padding: 8px; color: #37474f; font-size: 13px; }

QLineEdit:focus, QComboBox:focus, QSpinBox:focus, QDoubleSpinBox:focus { border: 1px solid #3b6998; background-color: white; }

/* STAT CARDS (Dashboard) */

QFrame.statCard { background-color: #e3f2fd; border-radius: 8px; border: 1px solid #bbdefb; }

QLabel.statValue { font-size: 20px; font-weight: bold; color: #1565c0; }

QLabel.statLabel { font-size: 12px; color: #546e7a; }

QFrame.alertCard { background-color: #ffebee; border-radius: 8px; border: 1px solid #ffcdd2; }

QLabel.alertValue { font-size: 20px; font-weight: bold; color: #c62828; }

/* SLIDERS */

QSlider::groove:horizontal { background: #e0e0e0; height: 8px; border-radius: 4px; }

QSlider::handle:horizontal { background: #3b6998; width: 16px; margin: -5px 0; border-radius: 8px; }

QSlider::sub-page:horizontal { background: #64b5f6; border-radius: 4px; }

/* CREATIVE WAREHOUSE MAP */

QFrame#mapFrame, QFrame#depotMapFrame_mod { background-color: #263238; border-radius: 8px; border: 2px solid #455a64; }

QLabel.zoneLabel { color: #cfd8dc; font-size: 11px; font-weight: bold; letter-spacing: 1px; margin-top: 10px; }

QPushButton.slotBtn { background-color: #4caf50; border: 2px solid #388e3c; border-radius: 4px; color: white; font-weight: bold; }

QPushButton.slotBtn:checked { background-color: #2196f3; border: 2px solid #1976d2; }

QPushButton.slotBtn:disabled { background-color: #ef5350; border: 2px solid #c62828; color: #ffebee; text-decoration: line-through; }

/* ACTION BUTTONS */

QPushButton#btnSave_Add, QPushButton#btnSave_Mod { background-color: #4caf50; color: white; font-weight: bold; border-radius: 6px; }

QPushButton#btnCancel_Add, QPushButton#btnCancel_Mod { background-color: #b0bec5; color: white; font-weight: bold; border-radius: 6px; }

QLabel#lblImgPreview_Add, QLabel#imgBin { background-color: #eceff1; border: 2px dashed #cfd8dc; border-radius: 12px; color: #90a4ae; }

/* --- Fix sidebar/background containers --- */
#leftSidebar{background-color:#0f2c4f;}
#rightSidebar{min-width:0px; max-width:16777215px;}

/* Stats preview colors */
#statCard QWidget#statMiniFrame QLabel{color:#ffffff;}
QPushButton#btnOpenStats{color:#000000;}

/* Plain text / no gray backgrounds */
QTableWidget { alternate-background-color: white; }
QTableWidget::item { color: #333; background-color: white; }
QTableWidget::item:selected { background-color: #e3f2fd; color: #333; }
QLineEdit, QComboBox, QSpinBox, QDoubleSpinBox { color: #37474f; }

/* Force clean text colors in product module */
QWidget#PModule2 QLabel, QWidget#PModule1 QLabel { color: #37474f; background-color: transparent; }
QLabel#prod_lb_1, QLabel#prod_lb_2, QLabel#prod_lb_3, QLabel#prod_user_1, QLabel#prod_user_2, QLabel#prod_user_3 { color: #37474f; background-color: transparent; }
QLabel.statValue { color: #1565c0; }
QLabel.statLabel { color: #546e7a; }
QLabel.alertValue { color: #c62828; }

/* Product right sidebar visual (match reference) */
QLabel#prod_lblFunc, QLabel#prod_lblExport {
    color: #37474f;
    font-weight: 700;
    font-size: 13px;
}
QFrame#prod_stat1, QFrame#prod_stat2, QFrame#prod_statsPreview {
    background-color: #e3f2fd;
    border-radius: 10px;
    border: 1px solid #bbdefb;
}
QFrame#prod_stat3 {
    background-color: #ffebee;
    border-radius: 10px;
    border: 1px solid #ffcdd2;
}
QLabel#prod_st_val1, QLabel#prod_st_val2 {
    color: #1565c0;
    font-size: 20px;
    font-weight: bold;
}
QLabel#prod_st_val3 { color: #c62828; font-size: 20px; font-weight: bold; }
QLabel#prod_st_lbl1, QLabel#prod_st_lbl2, QLabel#prod_st_lbl3 { color: #546e7a; font-size: 12px; }
QFrame#prod_miniStatsFrame {
    background-color: #2f2f2f;
    border-radius: 8px;
    border: none;
}
QLabel#prod_lblMini1, QLabel#prod_lblMini2 { color: #ffffff; font-weight: 600; }
QProgressBar#prod_pbTrend, QProgressBar#prod_pbStock {
    background-color: #3e3e3e;
    border: none;
    border-radius: 3px;
    height: 6px;
}
QProgressBar#prod_pbTrend::chunk, QProgressBar#prod_pbStock::chunk {
    background-color: #1e88e5;
    border-radius: 3px;
}

/* Zone labels should be dark (not white) */
QLabel.zoneLabel { color: #37474f; }

/* Export buttons */
QPushButton#prod_btnPdf, QPushButton#prod_btnCsv {
    background-color: #3a3a3a;
    color: #ffffff;
    border: none;
    border-radius: 6px;
    padding: 6px 10px;
}
QPushButton#prod_btnPdf:hover, QPushButton#prod_btnCsv:hover {
    background-color: #2f2f2f;
}

/* Employe-style top bar for product */
QLabel#prod_label_Title { color: #0f2b4c; font-size: 18px; font-weight: 600; }
 QLabel#prod_lblUserName { font-size: 14px; font-weight: bold; color: #0f2b4c; }
 QLabel#prod_lblUserRole { font-size: 12px; font-weight: bold; color: #28a745; margin-top: -2px; }

/* Match employe add button style in product top bar */
QPushButton#prod_btnAddProduct {
    background-color: #0f2b4c;
    color: white;
    border-radius: 5px;
    padding: 8px 15px;
    font-weight: bold;
    border: none;
}
QPushButton#prod_btnAddProduct:hover {
    background-color: #1a4270;
}

/* Match employe control sizing on product search/filter/add row */
QLineEdit#prod_searchInput { min-height: 40px; }
QComboBox#prod_cbSort { min-height: 40px; min-width: 180px; }
QPushButton#prod_btnAddProduct { min-height: 40px; }

/* Match employe search/filter visual style */
QLineEdit#prod_searchInput {
    background-color: #ffffff;
    color: #000000;
    border: 1px solid #cccccc;
    border-radius: 5px;
    padding: 6px;
}
QLineEdit#prod_searchInput:focus { border: 1px solid #3498db; }
QComboBox#prod_cbSort {
    background-color: #ffffff;
    color: #333333;
    border: 1px solid #cccccc;
    border-radius: 5px;
    padding: 6px;
}
QComboBox#prod_cbSort:focus { border: 1px solid #3498db; }

/* Force Product + Stock sidebar button text to black */
QPushButton#prod_btnproduit_1, QPushButton#prod_btnstock_1 { color: #000000; }

/* Ensure product left sidebar buttons have no frames/borders */
QFrame#prod_leftSidebar QPushButton {
    background-color: transparent;
    border: none;
    text-align: left;
    padding: 12px 20px;
    font-size: 14px;
    border-left: 3px solid transparent;
}
QFrame#prod_leftSidebar QPushButton:hover, QFrame#prod_leftSidebar QPushButton:checked {
    background-color: #1a4270;
    color: white;
    border-left: 3px solid #3498db;
}
QFrame#prod_leftSidebar QPushButton:focus { outline: none; }

/* Product table styled like employe */
QTableWidget#prod_tableProduits {
    background-color: #f4f6f9;
    alternate-background-color: #e8ebf0;
    color: #000000;
    gridline-color: transparent;
    border: 1px solid #dce1e6;
    border-radius: 8px;
    font-size: 13px;
}
QTableWidget#prod_tableProduits::item {
    color: #000000;
    padding: 5px;
    border-bottom: 1px solid #e0e6ed;
}
QTableWidget#prod_tableProduits::item:selected {
    background-color: #e3f2fd;
    color: #0f2b4c;
}
QTableWidget#prod_tableProduits QHeaderView::section {
    background-color: #0f2b4c;
    color: white;
    padding: 8px;
    border: none;
    font-weight: bold;
    font-size: 13px;
}

)");

    qss.replace("QMainWindow, QWidget#centralwidget", "QWidget#PModule2, QWidget#PModule1, QWidget#pageProduit");
    qss.replace("QWidget#leftSidebar", "QWidget#prod_leftSidebar");
    qss.replace("QWidget#rightSidebar", "QWidget#prod_rightSidebar");
    qss.replace("QWidget#horizontalLayoutWidget_1", "QWidget#prod_horizontalLayoutWidget_1");
    qss.replace("QWidget#horizontalLayoutWidget_2", "QWidget#prod_horizontalLayoutWidget_2");
    qss.replace("QWidget#horizontalLayoutWidget_3", "QWidget#prod_horizontalLayoutWidget_3");
    qss.replace("QLabel#lb_1", "QLabel#prod_lb_1");
    qss.replace("QLabel#lb_2", "QLabel#prod_lb_2");
    qss.replace("QLabel#lb_3", "QLabel#prod_lb_3");
    qss.replace("QLabel#user_1", "QLabel#prod_user_1");
    qss.replace("QLabel#user_2", "QLabel#prod_user_2");
    qss.replace("QLabel#user_3", "QLabel#prod_user_3");
    qss.replace("QPushButton#btnnotif_1", "QPushButton#prod_btnnotif_1");
    qss.replace("QPushButton#btnprofil_1", "QPushButton#prod_btnprofil_1");
    qss.replace("QPushButton#btnnotif_2", "QPushButton#prod_btnnotif_2");
    qss.replace("QPushButton#btnprofil_2", "QPushButton#prod_btnprofil_2");
    qss.replace("QPushButton#btnnotif_3", "QPushButton#prod_btnnotif_3");
    qss.replace("QPushButton#btnprofil_3", "QPushButton#prod_btnprofil_3");
    qss.replace("QLineEdit#searchInput", "QLineEdit#prod_searchInput");
    qss.replace("QComboBox#cbSort", "QComboBox#prod_cbSort");
    qss.replace("QPushButton#btnAddProduct", "QPushButton#prod_btnAddProduct");
    qss.replace("QFrame#cardAdd", "QFrame#prod_cardAdd");
    qss.replace("QFrame#cardMod", "QFrame#prod_cardMod");
    qss.replace("QFrame#rightSidebar", "QFrame#prod_rightSidebar");
    qss.replace("QFrame#mapFrame", "QFrame#prod_mapFrame");
    qss.replace("QFrame#depotMapFrame_mod", "QFrame#prod_depotMapFrame_mod");
    qss.replace("QPushButton#btnSave_Add", "QPushButton#prod_btnSave_Add");
    qss.replace("QPushButton#btnSave_Mod", "QPushButton#prod_btnSave_Mod");
    qss.replace("QPushButton#btnCancel_Add", "QPushButton#prod_btnCancel_Add");
    qss.replace("QPushButton#btnCancel_Mod", "QPushButton#prod_btnCancel_Mod");
    qss.replace("QLabel#lblImgPreview_Add", "QLabel#prod_lblImgPreview_Add");
    qss.replace("QLabel#imgBin", "QLabel#prod_imgBin");
    qss.replace("QPushButton#btnOpenStats", "QPushButton#prod_btnOpenStats");
    qss.replace("#leftSidebar", "#prod_leftSidebar");
    qss.replace("#rightSidebar", "#prod_rightSidebar");

    return qss;
}

void MainWindow::setupStockModule()
{
    if (ui->stock_stackedWidget)
        ui->stock_stackedWidget->setCurrentIndex(0);

    setupStockTableData();

    // Connexions Sliders -> Inputs (Ajouter)
    if (ui->sliderStock_add && ui->inputStock_add)
        connect(ui->sliderStock_add, &QSlider::valueChanged, this, [=](int val){ ui->inputStock_add->setText(QString::number(val)); });
    if (ui->sliderPrix_add && ui->inputPrix_add)
        connect(ui->sliderPrix_add, &QSlider::valueChanged, this, [=](int val){ ui->inputPrix_add->setText(QString::number(val)); });

    // Connexions Sliders -> Inputs (Modifier)
    if (ui->sliderStock_mod && ui->inputStock_mod)
        connect(ui->sliderStock_mod, &QSlider::valueChanged, this, [=](int val){ ui->inputStock_mod->setText(QString::number(val)); });
    if (ui->sliderPrix_mod && ui->inputPrix_mod)
        connect(ui->sliderPrix_mod, &QSlider::valueChanged, this, [=](int val){ ui->inputPrix_mod->setText(QString::number(val) + " TND"); });

    // Navigation buttons
    if (ui->btnNew) {
        connect(ui->btnNew, &QPushButton::clicked, this, [this](){
            if (ui->stock_stackedWidget) ui->stock_stackedWidget->setCurrentIndex(1);
        });
    }
    if (ui->btnCancel_add) {
        connect(ui->btnCancel_add, &QPushButton::clicked, this, [this](){
            if (ui->stock_stackedWidget) ui->stock_stackedWidget->setCurrentIndex(0);
        });
    }
    if (ui->btnCancel_mod) {
        connect(ui->btnCancel_mod, &QPushButton::clicked, this, [this](){
            if (ui->stock_stackedWidget) ui->stock_stackedWidget->setCurrentIndex(0);
        });
    }
}

void MainWindow::setupStockTableData()
{
    if (!ui->tableWidget) return;

    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels({"REF", "NOM", "STOCK", "SEUIL", "PRIX", "FOURNISSEUR", "ACTIONS"});
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(6, QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(6, 180);

    struct Product { QString ref, nom, stock, seuil, prix, fournisseur; };
    QList<Product> items = {
        {"REF-001", "Capteur Ultrason", "150", "OK", "25 TND", "TechSupply"},
        {"REF-002", "Batterie Lithium", "15", "CRITIQUE", "45 TND", "PowerPack"},
        {"REF-003", "Module GPS", "80", "MOYEN", "30 TND", "GeoTrack"}
    };

    double totalValue = 0;
    int criticalCount = 0;

    ui->tableWidget->setRowCount(items.size());

    for(int i = 0; i < items.size(); ++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(items[i].ref));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(items[i].nom));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(items[i].stock));

        QLabel* badge = new QLabel(items[i].seuil);
        badge->setAlignment(Qt::AlignCenter);
        badge->setFixedSize(90, 25);
        QString style = "border-radius: 5px; font-weight: bold;";

        if(items[i].seuil == "CRITIQUE") {
            style += "background-color: #dc3545; color: white;";
            criticalCount++;
        }
        else if(items[i].seuil == "MOYEN") style += "background-color: #ffc107; color: #333;";
        else style += "background-color: #28a745; color: white;";

        badge->setStyleSheet(style);

        QWidget* badgeWidget = new QWidget();
        QHBoxLayout* badgeLayout = new QHBoxLayout(badgeWidget);
        badgeLayout->addWidget(badge);
        badgeLayout->setAlignment(Qt::AlignCenter);
        badgeLayout->setContentsMargins(0,0,0,0);
        ui->tableWidget->setCellWidget(i, 3, badgeWidget);

        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(items[i].prix));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(items[i].fournisseur));

        double price = items[i].prix.split(" ")[0].toDouble();
        totalValue += items[i].stock.toInt() * price;

        QWidget* container = new QWidget();
        QHBoxLayout* layout = new QHBoxLayout(container);
        QPushButton* editBtn = new QPushButton("Modifier");
        QPushButton* delBtn = new QPushButton("Supprimer");

        editBtn->setStyleSheet("color: #3182CE; border: none; font-weight: bold;");
        delBtn->setStyleSheet("color: #E53E3E; border: none; font-weight: bold;");

        connect(editBtn, &QPushButton::clicked, this, [=]() {
            if (ui->inputRef_mod) ui->inputRef_mod->setText(ui->tableWidget->item(i, 0)->text());
            if (ui->inputNom_mod) ui->inputNom_mod->setText(ui->tableWidget->item(i, 1)->text());
            if (ui->inputStock_mod) ui->inputStock_mod->setText(ui->tableWidget->item(i, 2)->text());
            if (ui->inputPrix_mod) ui->inputPrix_mod->setText(ui->tableWidget->item(i, 4)->text());
            if (ui->inputFournisseur_mod) ui->inputFournisseur_mod->setText(ui->tableWidget->item(i, 5)->text());

            if (ui->sliderStock_mod) ui->sliderStock_mod->setValue(ui->tableWidget->item(i, 2)->text().toInt());
            if (ui->sliderPrix_mod) ui->sliderPrix_mod->setValue(ui->tableWidget->item(i, 4)->text().split(" ")[0].toInt());

            if (ui->stock_stackedWidget) ui->stock_stackedWidget->setCurrentIndex(2);
        });

        layout->addWidget(editBtn);
        layout->addWidget(delBtn);
        layout->setContentsMargins(0,0,0,0);
        ui->tableWidget->setCellWidget(i, 6, container);
    }

    if (ui->totalStock) ui->totalStock->setText(QString::number(totalValue, 'f', 3) + " TND");
    if (ui->lblCriticalStock) ui->lblCriticalStock->setText(QString("⚠ %1 Produits Critiques").arg(criticalCount));

    if (ui->lblOrderSummary) {
        if(criticalCount > 0) {
            ui->lblOrderSummary->setText(QString("Urgent : %1 articles à commander").arg(criticalCount));
            ui->lblOrderSummary->setStyleSheet("font-size: 13px; color: #E53E3E; font-weight: bold; margin-bottom: 5px;");
        } else {
            ui->lblOrderSummary->setText("Stock suffisant");
            ui->lblOrderSummary->setStyleSheet("font-size: 13px; color: #28a745; margin-bottom: 5px;");
        }
    }
}

// --- CLIENT MODULE (Integrated from mainwindowcl) ---
void MainWindow::on_btnClient_clicked() {
    if (auto *sw = mainStacked()) {
        if (auto *page = sw->findChild<QWidget*>("pageClient", Qt::FindDirectChildrenOnly)) {
            sw->setCurrentWidget(page);
        }
    }
}

void MainWindow::on_btnNouveau_client_clicked() {
    if (ui->stackedWidget_Client) {
        ui->input_matricule_ajouter->clear();
        ui->input_nom_ajouter->clear();
        ui->input_email_ajouter->clear();
        ui->input_bacs_ajouter->setValue(0);
        ui->input_score_ajouter->setValue(0);
        ui->stackedWidget_Client->setCurrentIndex(1);
    }
}

void MainWindow::on_btn_annuler_client_clicked() {
    if (ui->stackedWidget_Client) ui->stackedWidget_Client->setCurrentIndex(0);
}

void MainWindow::on_btn_ajouter_client_clicked() {
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
    if (ui->stackedWidget_Client) ui->stackedWidget_Client->setCurrentIndex(0);
}

void MainWindow::on_btn_modifier_client_clicked() {
    if(ui->input_matricule_modifier->text().isEmpty() || ui->input_nom_modifier->text().isEmpty()) {
         QMessageBox::warning(this, "Champs Manquants", "Veuillez remplir au moins le Matricule et le Nom.");
         return;
    }
    onClientModified(currentClientRow,
                     ui->input_matricule_modifier->text(), 
                     ui->input_nom_modifier->text(), 
                     ui->input_email_modifier->text(), 
                     QString::number(ui->input_bacs_modifier->value()),
                     QString::number(ui->input_score_modifier->value()), 
                     ui->input_paiement_modifier->currentText());
    QMessageBox::information(this, "Succès", "Informations du client modifiées avec succès.");
    if (ui->stackedWidget_Client) ui->stackedWidget_Client->setCurrentIndex(0);
}

void MainWindow::onClientAdded(QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement) {
    int row = ui->tableWidget_Client->rowCount();
    ui->tableWidget_Client->insertRow(row);
    ui->tableWidget_Client->setItem(row, 0, new QTableWidgetItem(matricule));
    ui->tableWidget_Client->setItem(row, 1, new QTableWidgetItem(nom));
    ui->tableWidget_Client->setItem(row, 2, new QTableWidgetItem(email));
    ui->tableWidget_Client->setItem(row, 3, new QTableWidgetItem(bacs));
    ui->tableWidget_Client->setItem(row, 4, new QTableWidgetItem(score));
    ui->tableWidget_Client->setItem(row, 5, new QTableWidgetItem(paiement));
    addClientActionButtons(row);
}

void MainWindow::onClientModified(int row, QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement) {
    if(row < ui->tableWidget_Client->rowCount()) {
        ui->tableWidget_Client->item(row, 0)->setText(matricule);
        ui->tableWidget_Client->item(row, 1)->setText(nom);
        ui->tableWidget_Client->item(row, 2)->setText(email);
        ui->tableWidget_Client->item(row, 3)->setText(bacs);
        ui->tableWidget_Client->item(row, 4)->setText(score);
        ui->tableWidget_Client->item(row, 5)->setText(paiement);
    }
}

void MainWindow::addClientActionButtons(int row) {
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
    ui->tableWidget_Client->setCellWidget(row, 6, actionWidget);
    connect(btnEdit, &QPushButton::clicked, this, [this, actionWidget](){
        int r = getRowForClientWidget(actionWidget);
        if (r < 0) return;
        currentClientRow = r;
        ui->input_matricule_modifier->setText(ui->tableWidget_Client->item(r, 0)->text());
        ui->input_nom_modifier->setText(ui->tableWidget_Client->item(r, 1)->text());
        ui->input_email_modifier->setText(ui->tableWidget_Client->item(r, 2)->text());
        ui->input_bacs_modifier->setValue(ui->tableWidget_Client->item(r, 3)->text().toInt());
        ui->input_score_modifier->setValue(ui->tableWidget_Client->item(r, 4)->text().toInt());
        ui->input_paiement_modifier->setCurrentText(ui->tableWidget_Client->item(r, 5)->text());
        if (ui->stackedWidget_Client) ui->stackedWidget_Client->setCurrentIndex(2);
    });
    connect(btnDelete, &QPushButton::clicked, this, [this, actionWidget](){
        int r = getRowForClientWidget(actionWidget);
        if (r < 0) return;
        if (QMessageBox::question(this, "Supprimer", "Voulez-vous supprimer ce client ?") == QMessageBox::Yes) {
            ui->tableWidget_Client->removeRow(r);
        }
    });
}

int MainWindow::getRowForClientWidget(QWidget *widget) {
    for (int i = 0; i < ui->tableWidget_Client->rowCount(); i++) {
        if (ui->tableWidget_Client->cellWidget(i, 6) == widget) return i;
    }
    return -1;
}
