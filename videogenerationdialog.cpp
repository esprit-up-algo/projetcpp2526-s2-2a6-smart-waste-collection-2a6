#include "videogenerationdialog.h"
#include <QGraphicsOpacityEffect>
#include <QFontDatabase>
#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QCoreApplication>

VideoGenerationDialog::VideoGenerationDialog(const QString &productName, const QString &reference, int capacity, int battery, const QStringList &features, QWidget *parent)
    : QDialog(parent), 
      m_productName(productName), 
      m_reference(reference), 
      m_capacity(capacity), 
      m_battery(battery), 
      m_features(features)
{
    m_pythonProcess = new QProcess(this);
    connect(m_pythonProcess, &QProcess::readyReadStandardOutput, this, &VideoGenerationDialog::onProcessOutput);
    connect(m_pythonProcess, &QProcess::readyReadStandardError, this, &VideoGenerationDialog::onProcessOutput);
    connect(m_pythonProcess, &QProcess::finished, this, &VideoGenerationDialog::onProcessFinished);
    
    setupUi();
}

VideoGenerationDialog::~VideoGenerationDialog()
{
}

void VideoGenerationDialog::setupUi()
{
    this->setWindowTitle("Generative AI - Comfy Cloud");
    this->resize(700, 500);
    this->setStyleSheet("QDialog { background-color: #0f172a; color: white; }");
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(30, 30, 30, 30);
    mainLayout->setSpacing(20);

    // Title
    m_lblTitle = new QLabel("ComfyUI Cloud Generation", this);
    m_lblTitle->setStyleSheet("color: #38bdf8; font-size: 18px; font-weight: bold; font-family: 'Segoe UI';");
    m_lblTitle->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(m_lblTitle);
    
    // Google API Key Input (Veo)
    QHBoxLayout *apiLayout = new QHBoxLayout();
    QLabel *lblApi = new QLabel("Google API Key (Veo 3):", this);
    m_googleKeyInput = new QLineEdit(this);
    m_googleKeyInput->setEchoMode(QLineEdit::Password);
    m_googleKeyInput->setPlaceholderText("AIzaSy........................");
    m_googleKeyInput->setStyleSheet("QLineEdit { background-color: #334155; border: 1px solid #475569; border-radius: 4px; padding: 5px; color: white; }");
    apiLayout->addWidget(lblApi);
    apiLayout->addWidget(m_googleKeyInput);
    mainLayout->addLayout(apiLayout);

    // Console Log Area
    m_logConsole = new QPlainTextEdit(this);
    m_logConsole->setReadOnly(true);
    m_logConsole->setStyleSheet("background-color: #1e293b; border: 2px dashed #475569; border-radius: 12px; color: #a3e635; font-family: Consolas; padding: 10px;");
    m_logConsole->setPlainText("En attente de démarrage du navigateur automatisé...");
    
    m_lblStatus = new QLabel("Produit: " + m_productName, this);
    m_lblStatus->setStyleSheet("color: #94a3b8; font-size: 14px;");
    m_lblStatus->setAlignment(Qt::AlignCenter);
    
    mainLayout->addWidget(m_lblStatus);
    mainLayout->addWidget(m_logConsole, 1);

    // Progress Bar
    m_progressBar = new QProgressBar(this);
    m_progressBar->setRange(0, 0); // Indeterminate
    m_progressBar->hide();
    m_progressBar->setFixedHeight(6);
    m_progressBar->setStyleSheet(
        "QProgressBar { border: none; background-color: #334155; border-radius: 3px; }"
        "QProgressBar::chunk { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0ea5e9, stop:1 #38bdf8); border-radius: 3px; }"
    );
    mainLayout->addWidget(m_progressBar);

    // Buttons
    QHBoxLayout *btnLayout = new QHBoxLayout();
    m_btnGenerate = new QPushButton("Générer Vidéo", this);
    m_btnGenerate->setStyleSheet(
        "QPushButton { background-color: #0ea5e9; color: white; border: none; border-radius: 8px; padding: 10px; font-weight: bold; font-size: 14px; }"
        "QPushButton:hover { background-color: #38bdf8; }"
    );
    m_btnGenerate->setCursor(Qt::PointingHandCursor);
    connect(m_btnGenerate, &QPushButton::clicked, this, &VideoGenerationDialog::onGenerateClicked);
    
    m_btnClose = new QPushButton("Fermer", this);
    m_btnClose->setStyleSheet(
        "QPushButton { background-color: #475569; color: white; border: none; border-radius: 8px; padding: 10px; font-weight: bold; font-size: 14px; }"
        "QPushButton:hover { background-color: #64748b; }"
    );
    m_btnClose->setCursor(Qt::PointingHandCursor);
    connect(m_btnClose, &QPushButton::clicked, this, &VideoGenerationDialog::closeDialog);
    
    btnLayout->addWidget(m_btnClose);
    btnLayout->addWidget(m_btnGenerate);
    mainLayout->addLayout(btnLayout);

    // Fade in effect
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    this->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff, "opacity");
    a->setDuration(500);
    a->setStartValue(0);
    a->setEndValue(1);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);
}

void VideoGenerationDialog::onGenerateClicked()
{
    m_btnGenerate->setEnabled(false);
    m_progressBar->show();
    m_lblStatus->setText("Lancement de l'Automatisation Python InVideo...");
    m_logConsole->clear();

    QString details = QString("- Modele: %1\n- Reference: %2\n- Capacite: %3 L\n- Batterie: %4%\n")
                      .arg(m_productName).arg(m_reference).arg(m_capacity).arg(m_battery);

    QString featuresText = m_features.isEmpty() ? "None" : m_features.join(", ");
    details += "- Capteurs / Options: " + featuresText + "\n";

    QString aiPrompt = "Create a cinematic, professional 3D product showcase video for a high-tech smart waste bin. The mood should be futuristic and clean, similar to an Apple ad. "
                       "Here are the exact product specifications to feature in text overlays and voiceover: \n" + details + 
                       "\nHighlight the smart capabilities, the large capacity, and the advanced battery life. ";

    if (m_features.contains("Détecteur de Flamme", Qt::CaseInsensitive)) {
        aiPrompt += "Crucially, show a close-up of a glowing red flame sensor integrated into the lid, demonstrating its safety capability.";
    }

    QString program = "py";
    QString scriptPath = "C:/Users/gigabyte/Downloads/projetcpp2526-s2-2a6-smart-waste-collection/projetcpp2526-s2-2a6-smart-waste-collection/google_veo_bot.py";
    QStringList arguments;
    arguments << scriptPath << "--prompt" << aiPrompt;
    
    QString googleKey = m_googleKeyInput->text().trimmed();
    if (!googleKey.isEmpty()) {
        arguments << "--google_key" << googleKey;
    }
    
    m_pythonProcess->setWorkingDirectory("C:/Users/gigabyte/Downloads/projetcpp2526-s2-2a6-smart-waste-collection/projetcpp2526-s2-2a6-smart-waste-collection");
    m_pythonProcess->start(program, arguments);
}

void VideoGenerationDialog::onProcessOutput()
{
    QByteArray output = m_pythonProcess->readAllStandardOutput();
    QByteArray error = m_pythonProcess->readAllStandardError();
    
    if(!output.isEmpty()) {
        m_logConsole->appendPlainText(QString::fromUtf8(output).trimmed());
    }
    if(!error.isEmpty()) {
        m_logConsole->appendPlainText("ERROR: " + QString::fromUtf8(error).trimmed());
    }
}

void VideoGenerationDialog::onProcessFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    m_progressBar->hide();
    m_btnGenerate->setEnabled(true);
    
    if (exitStatus == QProcess::NormalExit && exitCode == 0) {
        m_lblStatus->setText("Script terminé ! Vidéo générée sur InVideo.");
        QMessageBox::information(this, "Terminé", "L'automatisation du navigateur s'est terminée avec succès !");
    } else {
        m_lblStatus->setText("Erreur d'exécution du script d'Automatisation (Code " + QString::number(exitCode) + ")");
    }
}

void VideoGenerationDialog::closeDialog()
{
    if (m_pythonProcess && m_pythonProcess->state() == QProcess::Running) {
        m_pythonProcess->kill();
        m_pythonProcess->waitForFinished(3000);
    }
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    this->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff, "opacity");
    a->setDuration(300);
    a->setStartValue(1);
    a->setEndValue(0);
    a->setEasingCurve(QEasingCurve::OutBack);
    connect(a, &QPropertyAnimation::finished, this, &QDialog::accept);
    a->start(QPropertyAnimation::DeleteWhenStopped);
}
