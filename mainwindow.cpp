#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>
#include <QTime>
#include <QMessageBox>
#include <QInputDialog>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // --- REMPLISSAGE DU TABLEAU ---
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
        // Connexions
        connect(ui->btnAnalyser, &QPushButton::clicked, this, &MainWindow::on_btnAnalyser_clicked);
        connect(ui->btnSimulerBadge, &QPushButton::clicked, this, &MainWindow::on_btnSimulerBadge_clicked);
        connect(ui->btnNouveau, &QPushButton::clicked, this, &MainWindow::on_btnNouveau_clicked);
        connect(ui->btnAnnuler_Ajout, &QPushButton::clicked, this, &MainWindow::on_btnAnnuler_Ajout_clicked);

        // --- AJOUTEZ CETTE LIGNE ---
       // connect(ui->btnFichePaie, &QPushButton::clicked, this, &MainWindow::on_btnFichePaie_clicked);


        QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
        pLayout->addWidget(btnEdit);
        pLayout->addWidget(btnDelete);
        pLayout->setAlignment(Qt::AlignCenter);
        pLayout->setContentsMargins(0, 0, 0, 0);
        pWidget->setLayout(pLayout);

        ui->tableEmployes->setCellWidget(row, 4, pWidget);
    }

    // Connexions
    connect(ui->btnAnalyser, &QPushButton::clicked, this, &MainWindow::on_btnAnalyser_clicked);
    connect(ui->btnSimulerBadge, &QPushButton::clicked, this, &MainWindow::on_btnSimulerBadge_clicked);
    connect(ui->btnNouveau, &QPushButton::clicked, this, &MainWindow::on_btnNouveau_clicked);
    connect(ui->btnAnnuler_Ajout, &QPushButton::clicked, this, &MainWindow::on_btnAnnuler_Ajout_clicked);
    // Connexion du bouton Annuler de la page Modification
    connect(ui->btnAnnuler, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(0); });
    connect(ui->btnFichePaie, &QPushButton::clicked, this, &MainWindow::on_btnFichePaie_clicked);


    // --- NAVIGATION DASHBOARD (ACTIONS RAPIDES) ---
    connect(ui->btnGoMission, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(3); });
    connect(ui->btnGoPointage, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(4); });
    connect(ui->btnGoStats, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(5); });

    // --- BOUTONS ANNULER / RETOUR ---
    connect(ui->btnAnnulerMission, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(0); });
    connect(ui->btnAnnulerPointage, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(0); });
    connect(ui->btnAnnulerStats, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(0); });
    // --- BOUTONS ANNULER / RETOUR (Navigation) ---
    // Ces lignes disent : "Quand on clique sur Annuler, revenir à la page 0 (Tableau de bord)"
    connect(ui->btnAnnulerMission, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(0); });
    connect(ui->btnAnnulerPointage, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(0); });
    connect(ui->btnAnnulerStats, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(0); });
    
    // Connexion ComboBox Projet Stats
    connect(ui->cbProjetStats, &QComboBox::currentTextChanged, this, &MainWindow::updateTaskChart);

    // --- SLIDERS DYNAMIQUES (SALAIRE) ---
    connect(ui->sliderSalaire_Ajout, &QSlider::valueChanged, [=](int value){
        ui->lblValSalaire_Ajout->setText(QString::number(value) + " DT");
    });

    connect(ui->sliderSalaire_Modif, &QSlider::valueChanged, [=](int value){
        ui->lblValSalaire_Modif->setText(QString::number(value) + " DT");
    });

    setupStatistics();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// --- NAVIGATION ---
void MainWindow::on_btnNouveau_clicked() { ui->stackedWidget->setCurrentIndex(2); }
void MainWindow::on_btnAnnuler_Ajout_clicked() { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::on_btnModifier_clicked() { ui->stackedWidget->setCurrentIndex(1); }

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
    // 1. Création de l'objet QInputDialog
    QInputDialog dialog(this);
    dialog.setWindowTitle("Fiche de Paie");
    dialog.setLabelText("Veuillez entrer le matricule de l'employé :");
    dialog.setTextValue(""); // Champ vide par défaut
    dialog.setInputMode(QInputDialog::TextInput);
    dialog.resize(400, 200); // Taille confortable

    // 2. CORRECTION DU STYLE (Pour rendre les boutons visibles)
    // On force un fond bleu (#0f2b4c) et un texte blanc
    dialog.setStyleSheet(
        "QDialog { background-color: white; }"
        "QLabel { color: #333333; font-weight: bold; font-size: 14px; }"
        "QLineEdit { border: 1px solid #ccc; border-radius: 5px; padding: 5px; color: black; }"
        "QPushButton { "
        "   background-color: #0f2b4c; "  // Bleu foncé
        "   color: white; "               // Texte blanc
        "   border: none; "
        "   border-radius: 5px; "
        "   padding: 8px 15px; "
        "   font-weight: bold; "
        "   min-width: 70px; "
        "}"
        "QPushButton:hover { background-color: #1a4270; }" // Bleu plus clair au survol
        );

    // 3. Affichage et récupération de la réponse
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
    // --- GRAPHIQUE 1 : Taux d'Absence (Pie Chart) ---
    QPieSeries *absenceSeries = new QPieSeries();
    absenceSeries->append("Présent", 85);
    absenceSeries->append("Absent", 15);

    // Personnalisation des tranches
    QPieSlice *presentSlice = absenceSeries->slices().at(0);
    presentSlice->setLabelVisible(true);
    presentSlice->setBrush(QColor("#27ae60")); // Vert
    presentSlice->setLabelColor(Qt::black);

    QPieSlice *absentSlice = absenceSeries->slices().at(1);
    absentSlice->setLabelVisible(true);
    absentSlice->setExploded(true);
    absentSlice->setBrush(QColor("#c0392b")); // Rouge
    absentSlice->setLabelColor(Qt::black);

    QChart *absenceChart = new QChart();
    absenceChart->addSeries(absenceSeries);
    absenceChart->setTitle("Taux de Présence Global");
    absenceChart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));
    absenceChart->legend()->setAlignment(Qt::AlignBottom);
    absenceChart->setAnimationOptions(QChart::SeriesAnimations);

    // Assigner à la vue
    ui->chartViewAbsence->setChart(absenceChart);
    ui->chartViewAbsence->setRenderHint(QPainter::Antialiasing);

    // --- GRAPHIQUE 2 : Charge de Travail (Bar Chart) ---
    QBarSet *set0 = new QBarSet("Heures Travaillées");
    *set0 << 40 << 35 << 42 << 38 << 45; // Données fictives pour 5 employés
    set0->setColor(QColor("#3498db")); // Bleu

    QBarSeries *workloadSeries = new QBarSeries();
    workloadSeries->append(set0);

    QChart *workloadChart = new QChart();
    workloadChart->addSeries(workloadSeries);
    workloadChart->setTitle("Charge de Travail par Employé (Semaine)");
    workloadChart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));
    workloadChart->setAnimationOptions(QChart::SeriesAnimations);
    workloadChart->legend()->setVisible(false); // Pas besoin de légende pour une seule série

    // Axe des Catégories (Noms des employés)
    QStringList categories;
    categories << "Ali" << "Sara" << "Mohamed" << "Rania" << "Karim";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    workloadChart->addAxis(axisX, Qt::AlignBottom);
    workloadSeries->attachAxis(axisX);

    // Axe des Valeurs (Heures)
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 50); // Max 50 heures
    axisY->setTitleText("Heures / Semaine");
    workloadChart->addAxis(axisY, Qt::AlignLeft);
    workloadSeries->attachAxis(axisY);

    // Assigner à la vue
    ui->chartViewWorkload->setChart(workloadChart);
    ui->chartViewWorkload->setRenderHint(QPainter::Antialiasing);

    // --- GRAPHIQUE 3 : Courbe "Tâches accomplies" (Line Chart) ---
    // Initialisation avec le premier projet par défaut ou vide
    updateTaskChart("Projet A"); 
}

void MainWindow::updateTaskChart(const QString &projectName)
{
    // Création de la série de données (Courbe)
    QLineSeries *series = new QLineSeries();
    series->setName("Tâches accomplies - " + projectName);

    // Données fictives selon le projet sélectionné
    if (projectName == "Projet A") {
        series->append(0, 12); // Jour 0, 12 tâches
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

    // Création du graphique
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Progression : " + projectName);
    chart->setTitleFont(QFont("Segoe UI", 12, QFont::Bold));
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // Axe X (Jours)
    QValueAxis *axisX = new QValueAxis();
    axisX->setTitleText("Jours");
    axisX->setLabelFormat("%d");
    axisX->setTickCount(6);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Axe Y (Tâches)
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Tâches");
    axisY->setLabelFormat("%d");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Assigner à la vue
    ui->chartViewTasks->setChart(chart);
    ui->chartViewTasks->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::on_cbProjetStats_currentIndexChanged(const QString &arg1)
{
    updateTaskChart(arg1);
}
