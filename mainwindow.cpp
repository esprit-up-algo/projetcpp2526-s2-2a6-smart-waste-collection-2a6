#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHBoxLayout>
#include <QPushButton>
#include <QHeaderView>
#include <QBrush>
#include <QTimer>
#include <QFrame>
#include <QVBoxLayout>
#include <QApplication>
#include <QStyle>

#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>
#include <QtCharts/QLineSeries>
#include <QtCharts/QSplineSeries> // Added for Spline Chart
#include <QtCharts/QAreaSeries>   // Added for Area Chart

static constexpr int ACTIONS_COL = 7;

// ------------------------------------------------------------
// ✅ FIX: force Qt to paint styled backgrounds & re-apply QSS
// ------------------------------------------------------------
static void enableStyledBgRecursive(QWidget *root)
{
    if (!root) return;

    // Make QSS backgrounds work on QWidget/QFrame
    root->setAttribute(Qt::WA_StyledBackground, true);

    const auto childs = root->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
    for (QWidget *c : childs)
        enableStyledBgRecursive(c);
}

static void repolishRecursive(QWidget *root)
{
    if (!root) return;

    root->style()->unpolish(root);
    root->style()->polish(root);
    root->update();

    const auto childs = root->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
    for (QWidget *c : childs)
        repolishRecursive(c);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->leftSidebar->setAttribute(Qt::WA_StyledBackground, true);
    ui->rightSidebar->setAttribute(Qt::WA_StyledBackground, true);

    // ✅ MUST be right after setupUi
    applyStyleFix();

    // ---------- Navigation (StackedWidget) ----------
    goAffichage();

    if (ui->btnAddProduct)
        connect(ui->btnAddProduct, &QPushButton::clicked, this, &MainWindow::goAjout);

    if (auto *btnStats = findChild<QPushButton*>("btnOpenStats"))
        connect(btnStats, &QPushButton::clicked, this, &MainWindow::goStatistiques);

    if (auto *b = findChild<QPushButton*>("btnCancel_Add"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    if (auto *b = findChild<QPushButton*>("btnCancel_Mod"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    if (auto *b = findChild<QPushButton*>("btnRetourStats"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);
    if (auto *b = findChild<QPushButton*>("btnReturnStats"))
        connect(b, &QPushButton::clicked, this, &MainWindow::goAffichage);

    // ---------- Table ----------
    if (ui->tableProduits) {
        QTableWidget *t = ui->tableProduits;

        if (t->columnCount() < 8)
            t->setColumnCount(8);

        t->verticalHeader()->setDefaultSectionSize(36);
        t->setWordWrap(false);

        t->horizontalHeader()->setStretchLastSection(false);
        t->horizontalHeader()->setSectionResizeMode(ACTIONS_COL, QHeaderView::Fixed);
        t->setColumnWidth(ACTIONS_COL, 90);

        addExampleRow();

        QTimer::singleShot(0, this, [this]() {
            refreshActionButtons();
        });
    }

    // ---------- Charts ----------
    buildStatsCharts();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ✅ style fix implementation
void MainWindow::applyStyleFix()
{
    // 1) Ensure backgrounds in QSS actually paint
    enableStyledBgRecursive(ui->centralwidget);

    // 2) If your stylesheet is set on centralwidget, re-apply it to MainWindow (so it cascades everywhere)
    //    (If you already set it on MainWindow in Designer, this won’t hurt.)
    const QString qssCentral = ui->centralwidget ? ui->centralwidget->styleSheet() : QString();
    if (!qssCentral.isEmpty())
        this->setStyleSheet(qssCentral);

    // 3) Force re-polish so the new pages in stacked widget pick up style
    repolishRecursive(ui->centralwidget);
}

// ---------- Stacked navigation ----------
void MainWindow::goAffichage()
{
    if (!ui || !ui->stackedWidget) return;
    if (ui->affichage) ui->stackedWidget->setCurrentWidget(ui->affichage);
}

void MainWindow::goAjout()
{
    if (!ui || !ui->stackedWidget) return;
    if (ui->ajout) ui->stackedWidget->setCurrentWidget(ui->ajout);

    // Ensure style applies when switching pages
    applyStyleFix();
}

void MainWindow::goModification()
{
    if (!ui || !ui->stackedWidget) return;
    if (ui->modification) ui->stackedWidget->setCurrentWidget(ui->modification);

    applyStyleFix();
}

void MainWindow::goStatistiques()
{
    if (!ui || !ui->stackedWidget) return;
    if (ui->statistiques) ui->stackedWidget->setCurrentWidget(ui->statistiques);

    buildStatsCharts();
    applyStyleFix();
}

// ---------- Table content ----------
void MainWindow::addExampleRow()
{
    QTableWidget *t = ui->tableProduits;
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
    QTableWidget *t = ui->tableProduits;
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

    auto *btnEdit = new QPushButton(QString::fromUtf8("✏️"), cell);
    auto *btnDel  = new QPushButton(QString::fromUtf8("🗑️"), cell);

    btnEdit->setFixedSize(24, 24);
    btnDel->setFixedSize(24, 24);
    btnEdit->setFlat(true);
    btnDel->setFlat(true);
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
    if (!ui || !ui->tableProduits) return;

    for (int r = 0; r < ui->tableProduits->rowCount(); ++r)
        installActionButtonsForRow(r);
}

void MainWindow::handleEditClicked()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn || !ui->tableProduits) return;

    int row = btn->property("row").toInt();
    if (row < 0 || row >= ui->tableProduits->rowCount()) return;

    goModification();
}

void MainWindow::handleDeleteClicked()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn || !ui->tableProduits) return;

    int row = btn->property("row").toInt();
    if (row < 0 || row >= ui->tableProduits->rowCount()) return;

    ui->tableProduits->removeRow(row);
    refreshActionButtons();
}

// ---------- Stats charts ----------
void MainWindow::buildStatsCharts()
{
    QFrame *chart1Host = findChild<QFrame*>("graphFrame1Plot");
    QFrame *chart2Host = findChild<QFrame*>("graphFrame2Plot");
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

    // --- 1. DONUT CHART (Creative Replacement for Pie) ---
    auto *donutSeries = new QPieSeries();
    donutSeries->setHoleSize(0.35); // Key feature for Donut chart
    donutSeries->append("Produits", 45);
    donutSeries->append("Stock", 30);
    donutSeries->append("Maintenance", 15);
    donutSeries->append("Commandes", 10);

    // Style the slices
    for (auto *slice : donutSeries->slices()) {
        slice->setLabelVisible(true);
        slice->setLabelColor(Qt::white);
        slice->setLabelPosition(QPieSlice::LabelInsideHorizontal);
        slice->setBorderWidth(2);
        slice->setBorderColor(Qt::white);
    }
    // Highlight one slice
    if (!donutSeries->slices().isEmpty()) {
        auto *s = donutSeries->slices().at(0);
        s->setExploded(true);
        s->setLabelVisible(true);
        s->setLabelPosition(QPieSlice::LabelOutside);
        s->setLabelColor(Qt::black); // Dark text for outside label
    }

    auto *donutChart = new QChart();
    donutChart->addSeries(donutSeries);
    donutChart->setTitle("Répartition Globale (Donut)");
    donutChart->setTheme(QChart::ChartThemeBlueCerulean); // Modern theme
    donutChart->setAnimationOptions(QChart::AllAnimations); // Animate!
    donutChart->legend()->setAlignment(Qt::AlignRight);
    donutChart->legend()->setFont(QFont("Segoe UI", 9));
    donutChart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));

    auto *donutView = new QChartView(donutChart);
    donutView->setRenderHint(QPainter::Antialiasing);

    // --- 2. SPLINE AREA CHART (Creative Replacement for Line) ---
    // Create a smooth spline series
    auto *splineSeries = new QSplineSeries();
    splineSeries->setName("Croissance");
    splineSeries->append(1, 10);
    splineSeries->append(2, 22);
    splineSeries->append(3, 18); // slight dip
    splineSeries->append(4, 32);
    splineSeries->append(5, 28);
    splineSeries->append(6, 45);
    
    // Create a gradient area series under the spline
    auto *areaSeries = new QAreaSeries(splineSeries);
    areaSeries->setName("Zone de Croissance");
    
    // Gradient fill
    QLinearGradient gradient(QPointF(0, 0), QPointF(0, 1));
    gradient.setColorAt(0.0, QColor(0x3498db));
    gradient.setColorAt(1.0, QColor(0xecf0f1));
    areaSeries->setBrush(gradient);
    
    // Pen style for the border line
    QPen pen(0x2980b9);
    pen.setWidth(3);
    areaSeries->setPen(pen);

    auto *areaChart = new QChart();
    areaChart->addSeries(areaSeries);
    areaChart->setTitle("Évolution Dynamique");
    areaChart->setTheme(QChart::ChartThemeLight); // Clean theme
    areaChart->setAnimationOptions(QChart::SeriesAnimations);
    areaChart->legend()->setAlignment(Qt::AlignBottom);
    areaChart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));

    // Axes
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

    // Add checks for layouts (crash prevention)
    if (!chart1Host->layout()) new QVBoxLayout(chart1Host);
    if (!chart2Host->layout()) new QVBoxLayout(chart2Host);

    chart1Host->layout()->addWidget(donutView);
    chart2Host->layout()->addWidget(areaView);
}
