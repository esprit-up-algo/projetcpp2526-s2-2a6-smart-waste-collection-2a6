#include "mainwindow.h"
<<<<<<< HEAD
#include "mascotwidget.h"
#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QPropertyAnimation>
#include <QEvent>
#include <QMouseEvent>
=======
<<<<<<< HEAD
<<<<<<< HEAD

#include <QApplication>
=======
#include <QApplication>
=======
#include <QApplication>
>>>>>>> a6aef5d (Ajout de l'interface de login et corrections)
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
>>>>>>> origin/gestion-employee
#include <QStackedWidget>
#include <QTimer>
#include <QVideoWidget>
#include <QMediaCaptureSession>
#include <QCamera>
#include <QMediaDevices>
#include <QMessageBox>
<<<<<<< HEAD
#include "connection.h"
#include <QSqlDatabase>
#include <QDebug>
=======
<<<<<<< HEAD
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
=======
>>>>>>> a6aef5d (Ajout de l'interface de login et corrections)

>>>>>>> origin/gestion-employee
// Simple Login Dialog
class LoginDialog : public QDialog
{
    Q_OBJECT
public:
    LoginDialog(QWidget *parent = nullptr) : QDialog(parent)
    {
        setWindowTitle("WasteGuard - Connexion");
<<<<<<< HEAD
        setMinimumSize(450, 650);
        setStyleSheet("QDialog { background-color: #1F110B; }"); // Terra Night
        
        this->setFixedSize(450, 600);
        this->setWindowFlags(Qt::FramelessWindowHint);
        this->setAttribute(Qt::WA_TranslucentBackground);

        // --- LUXE-BLUE PALETTE ---
        QString blueBase = "#0F1A2B";
        QString accentBlue = "#3498DB";
        QString lightBlue = "#EBF5FB";

        QVBoxLayout *mainLayout = new QVBoxLayout(this);
        mainLayout->setContentsMargins(0, 0, 0, 0);

        QFrame *container = new QFrame(this);
        container->setObjectName("loginContainer");
        container->setStyleSheet(QString(
            "QFrame#loginContainer {"
            "   background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 %1, stop:1 %2);"
            "   border: 2px solid rgba(52, 152, 219, 0.3);"
            "   border-radius: 40px;"
            "}"
            "QLineEdit {"
            "   background: rgba(255, 255, 255, 0.08);"
            "   border: 1px solid rgba(52, 152, 219, 0.4);"
            "   border-radius: 12px;"
            "   padding: 12px;"
            "   color: white;"
            "   font-size: 14px;"
            "}"
            "QLineEdit:focus {"
            "   border: 2px solid %3;"
            "   background: rgba(255, 255, 255, 0.12);"
            "}"
            "QPushButton#btnLogin {"
            "   background: %3;"
            "   color: white;"
            "   border-radius: 15px;"
            "   padding: 15px;"
            "   font-weight: 800;"
            "   font-size: 16px;"
            "}"
            "QPushButton#btnLogin:hover {"
            "   background: #2980B9;"
            "}"
        ).arg(blueBase).arg("#1A2F45").arg(accentBlue));
        
        QVBoxLayout *containerLayout = new QVBoxLayout(container);
        containerLayout->setContentsMargins(40, 20, 40, 40);
        containerLayout->setSpacing(15);
        
        // --- INNOVATIVE MASCOT ---
        mascot = new MascotWidget(this);
        mascot->setMinimumHeight(240);
        containerLayout->addWidget(mascot);

        // --- MASCOT NAME LABEL ---
        QLabel *lblMascotName = new QLabel("LABIB", this);
        lblMascotName->setAlignment(Qt::AlignCenter);
        // Added margin-bottom: 20px and increased container height to prevent clipping
        lblMascotName->setStyleSheet(QString("font-size: 14px; font-weight: 800; color: #00F2FE; letter-spacing: 4px; margin-top: 5px; margin-bottom: 15px;"));
        containerLayout->addWidget(lblMascotName);

=======
        setMinimumSize(450, 550);
        setStyleSheet("QDialog { background-color: #0f2c4f; }");
        
        QVBoxLayout *mainLayout = new QVBoxLayout(this);
        mainLayout->setContentsMargins(40, 40, 40, 40);
        mainLayout->setSpacing(20);
        
>>>>>>> origin/gestion-employee
        // Stacked widget for login/face ID pages
        stackedWidget = new QStackedWidget(this);
        
        // PAGE 0: Login form
        QWidget *pageLogin = new QWidget();
        QVBoxLayout *loginLayout = new QVBoxLayout(pageLogin);
<<<<<<< HEAD
        loginLayout->setSpacing(12);
        
        // Title
        QLabel *lblTitle = new QLabel("ACCÈS SÉCURISÉ", this);
        lblTitle->setStyleSheet(QString("font-size: 20px; font-weight: 800; color: %1; letter-spacing: 2px;").arg(accentBlue));
=======
        loginLayout->setSpacing(15);
        
        // Logo spacer
        loginLayout->addStretch();
        
        // Title
        QLabel *lblTitle = new QLabel("Bienvenue", this);
        lblTitle->setStyleSheet("font-size: 24px; font-weight: bold; color: white;");
>>>>>>> origin/gestion-employee
        lblTitle->setAlignment(Qt::AlignCenter);
        loginLayout->addWidget(lblTitle);
        
        // Username input
        txtUser = new QLineEdit(this);
<<<<<<< HEAD
        txtUser->setPlaceholderText("Identifiant");
        // Stylesheet handled by container
        txtUser->setMinimumHeight(48);
=======
        txtUser->setPlaceholderText("Nom d'utilisateur");
        txtUser->setStyleSheet(
            "QLineEdit { background-color: white; border: 1px solid #cfd8dc; "
            "border-radius: 8px; padding: 12px; color: #37474f; font-size: 14px; }"
        );
        txtUser->setMinimumHeight(45);
>>>>>>> origin/gestion-employee
        loginLayout->addWidget(txtUser);
        
        // Password input
        txtPass = new QLineEdit(this);
        txtPass->setPlaceholderText("Mot de passe");
        txtPass->setEchoMode(QLineEdit::Password);
<<<<<<< HEAD
        // Stylesheet handled by container
        txtPass->setMinimumHeight(48);
        loginLayout->addWidget(txtPass);
        
        // Login button
        QPushButton *btnLogin = new QPushButton("CONNEXION", this);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setMinimumHeight(52);
=======
        txtPass->setStyleSheet(txtUser->styleSheet());
        txtPass->setMinimumHeight(45);
        loginLayout->addWidget(txtPass);
        
        // Login button
        QPushButton *btnLogin = new QPushButton("SE CONNECTER", this);
        btnLogin->setStyleSheet(
            "QPushButton { background-color: #8cc63f; color: white; font-weight: bold; "
            "font-size: 15px; border-radius: 8px; padding: 12px; } "
            "QPushButton:hover { background-color: #7ab234; }"
        );
        btnLogin->setMinimumHeight(50);
>>>>>>> origin/gestion-employee
        btnLogin->setCursor(Qt::PointingHandCursor);
        loginLayout->addWidget(btnLogin);
        
        // Face ID button  
<<<<<<< HEAD
        QPushButton *btnFaceId = new QPushButton("BIOMÉTRIE FACIALE", this);
        btnFaceId->setStyleSheet(QString(
            "QPushButton { background: transparent; color: %1; font-weight: 700; "
            "font-size: 13px; border-radius: 10px; padding: 10px; border: 1px solid rgba(52, 152, 219, 0.5); } "
            "QPushButton:hover { background-color: rgba(52, 152, 219, 0.1); }"
        ).arg(accentBlue));
=======
        QPushButton *btnFaceId = new QPushButton("SE CONNECTER AVEC FACE ID", this);
        btnFaceId->setStyleSheet(
            "QPushButton { background-color: #3b6998; color: white; font-weight: bold; "
            "font-size: 14px; border-radius: 8px; padding: 10px; } "
            "QPushButton:hover { background-color: #2d5278; }"
        );
>>>>>>> origin/gestion-employee
        btnFaceId->setMinimumHeight(45);
        btnFaceId->setCursor(Qt::PointingHandCursor);
        loginLayout->addWidget(btnFaceId);
        
<<<<<<< HEAD
=======
        loginLayout->addStretch();
        
>>>>>>> origin/gestion-employee
        // PAGE 1: Face ID
        QWidget *pageFaceId = new QWidget();
        QVBoxLayout *faceLayout = new QVBoxLayout(pageFaceId);
        faceLayout->setSpacing(15);
        
<<<<<<< HEAD
        QLabel *lblFaceTitle = new QLabel("SCAN BIOMÉTRIQUE", this);
        lblFaceTitle->setStyleSheet("font-size: 18px; font-weight: 800; color: #E9BC99;");
=======
        QLabel *lblFaceTitle = new QLabel("Reconnaissance Faciale", this);
        lblFaceTitle->setStyleSheet("font-size: 18px; font-weight: bold; color: white;");
>>>>>>> origin/gestion-employee
        lblFaceTitle->setAlignment(Qt::AlignCenter);
        faceLayout->addWidget(lblFaceTitle);
        
        // Camera placeholder
        videoWidget = new QWidget(this);
        videoWidget->setMinimumSize(320, 240);
<<<<<<< HEAD
        videoWidget->setStyleSheet(QString("background-color: rgba(0,0,0,0.5); border: 2px solid %1; border-radius: 15px;").arg(accentBlue));
        faceLayout->addWidget(videoWidget);
        
        lblStatus = new QLabel("Initialisation du capteur...", this);
        lblStatus->setStyleSheet(QString("font-size: 14px; color: %1;").arg(lightBlue));
        lblStatus->setAlignment(Qt::AlignCenter);
        faceLayout->addWidget(lblStatus);
        
        QPushButton *btnBack = new QPushButton("Annuler et revenir", this);
        btnBack->setStyleSheet(QString("color: %1; text-decoration: underline; font-size: 12px; border: none;").arg(accentBlue));
=======
        videoWidget->setStyleSheet("background-color: black; border-radius: 10px;");
        faceLayout->addWidget(videoWidget);
        
        lblStatus = new QLabel("Initialisation...", this);
        lblStatus->setStyleSheet("font-size: 14px; color: white;");
        lblStatus->setAlignment(Qt::AlignCenter);
        faceLayout->addWidget(lblStatus);
        
        QPushButton *btnBack = new QPushButton("Retour au mot de passe", this);
        btnBack->setStyleSheet("color: #8cc63f; text-decoration: underline; font-size: 13px; border: none;");
>>>>>>> origin/gestion-employee
        btnBack->setFlat(true);
        btnBack->setCursor(Qt::PointingHandCursor);
        faceLayout->addWidget(btnBack);
        
        // Add pages to stacked widget
        stackedWidget->addWidget(pageLogin);
        stackedWidget->addWidget(pageFaceId);
        stackedWidget->setCurrentIndex(0);
        
<<<<<<< HEAD
        containerLayout->addWidget(stackedWidget);
        mainLayout->addWidget(container);
        
        // --- MASCOT INTERACTION LOGIC ---
        // Animation for covering eyes
        eyeAnim = new QPropertyAnimation(mascot, "eyeCoverFactor", this);
        eyeAnim->setDuration(450);
        eyeAnim->setEasingCurve(QEasingCurve::InOutBack);

        // Event filter for password focus
        txtPass->installEventFilter(this);
        txtUser->installEventFilter(this); // Install filter on username too
        setMouseTracking(true);
        pageLogin->setMouseTracking(true);
=======
        mainLayout->addWidget(stackedWidget);
>>>>>>> origin/gestion-employee
        
        // Connections
        connect(btnLogin, &QPushButton::clicked, this, &QDialog::accept);
        connect(txtPass, &QLineEdit::returnPressed, this, &QDialog::accept);
<<<<<<< HEAD
        connect(btnFaceId, &QPushButton::clicked, this, [this](){
            startFaceId();
            mascot->setState(MascotWidget::Magnifier); // Trigger Magnifier
        });
        connect(btnBack, &QPushButton::clicked, [this](){ 
            stackedWidget->setCurrentIndex(0); 
            mascot->setState(MascotWidget::Idle); // Reset to Idle
        });
        
        // Notepad interactions
        connect(txtUser, &QLineEdit::textEdited, this, [this](){
             mascot->setState(MascotWidget::Notepad);
             // Revert to idle after 1.5s of no typing
             QTimer::singleShot(1500, this, [this](){
                 if (!txtUser->hasFocus()) mascot->setState(MascotWidget::Idle);
             });
        });
    }

    bool eventFilter(QObject *obj, QEvent *event) override {
        if (obj == txtPass) {
            if (event->type() == QEvent::FocusIn) {
                eyeAnim->stop();
                eyeAnim->setEndValue(1.0);
                eyeAnim->start();
                mascot->setState(MascotWidget::Idle); // Ensure no props when hiding eyes
            } else if (event->type() == QEvent::FocusOut) {
                eyeAnim->stop();
                eyeAnim->setEndValue(0.0);
                eyeAnim->start();
            }
        }
        else if (obj == txtUser) {
            if (event->type() == QEvent::FocusIn) {
                mascot->setState(MascotWidget::Notepad);
            } else if (event->type() == QEvent::FocusOut) {
                mascot->setState(MascotWidget::Idle);
            }
        }
        return QDialog::eventFilter(obj, event);
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        mascot->setLookAt(event->globalPosition().toPoint());
        QDialog::mouseMoveEvent(event);
=======
        connect(btnFaceId, &QPushButton::clicked, this, &LoginDialog::startFaceId);
        connect(btnBack, &QPushButton::clicked, [this](){ stackedWidget->setCurrentIndex(0); });
>>>>>>> origin/gestion-employee
    }
    
private slots:
    void startFaceId() {
        stackedWidget->setCurrentIndex(1);
<<<<<<< HEAD
        lblStatus->setText("Scan de rétine en cours...");
        lblStatus->setStyleSheet("font-size: 16px; color: #C66A4E; font-weight: 800;");
        
        QTimer::singleShot(2000, this, [this](){
            lblStatus->setText("Analyse des vecteurs...");
            lblStatus->setStyleSheet("font-size: 16px; color: #E9BC99; font-weight: 800;");
            
            QTimer::singleShot(2000, this, [this](){
                lblStatus->setText("VÉRIFIÉ");
                lblStatus->setStyleSheet("font-size: 20px; color: #8cc63f; font-weight: 900;");
                QTimer::singleShot(800, this, &QDialog::accept);
=======
        lblStatus->setText("Recherche de visage...");
        lblStatus->setStyleSheet("font-size: 16px; color: #e67e22; font-weight: bold;");
        
        // Simulate Face ID recognition
        QTimer::singleShot(2000, this, [this](){
            lblStatus->setText("Analyse biométrique...");
            lblStatus->setStyleSheet("font-size: 16px; color: #3498db; font-weight: bold;");
            
            QTimer::singleShot(2000, this, [this](){
                lblStatus->setText("Identité confirmée !");
                lblStatus->setStyleSheet("font-size: 18px; color: #2ecc71; font-weight: bold;");
                
                QTimer::singleShot(500, this, &QDialog::accept);
>>>>>>> origin/gestion-employee
            });
        });
    }
    
private:
<<<<<<< HEAD
    MascotWidget *mascot;
=======
>>>>>>> origin/gestion-employee
    QStackedWidget *stackedWidget;
    QLineEdit *txtUser;
    QLineEdit *txtPass;
    QLabel *lblStatus;
    QWidget *videoWidget;
<<<<<<< HEAD
    QPropertyAnimation *eyeAnim;
};
=======
};
<<<<<<< HEAD
>>>>>>> 2a1db57 (atelier connexion)
=======
>>>>>>> a6aef5d (Ajout de l'interface de login et corrections)
>>>>>>> origin/gestion-employee

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<< HEAD
    qDebug() << "Drivers disponibles:" << QSqlDatabase::drivers();

=======
<<<<<<< HEAD
<<<<<<< HEAD
=======
    
    // Show login dialog first
>>>>>>> origin/gestion-employee
    LoginDialog login;
    if (login.exec() != QDialog::Accepted) {
        return 0; // User cancelled
    }
<<<<<<< HEAD

    Connection* c = Connection::instance();
    bool test = c->createConnect();
    if (test)
    {
        MainWindow w;
        w.showMaximized();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                                 QObject::tr("connection successful.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        return a.exec();

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                              QObject::tr("connection failed.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        return 0;
    }

}

#include "main.moc"
=======
    
    // Login successful, show main window
>>>>>>> a6aef5d (Ajout de l'interface de login et corrections)
    MainWindow w;
    w.showMaximized();
    
    return a.exec();
}
<<<<<<< HEAD
=======
    
    // Show login dialog first
    LoginDialog login;
    if (login.exec() != QDialog::Accepted) {
        return 0; // User cancelled
    }
    QSqlDatabase db;

    if (QSqlDatabase::contains("oracle_conn"))
        db = QSqlDatabase::database("oracle_conn");
    else
        db = QSqlDatabase::addDatabase("QODBC", "oracle_conn");

    db.setDatabaseName("Source_Projet2A");
    db.setUserName("wasteguard");
    db.setPassword("123");

    if (!db.open())
        qDebug() << "Erreur connexion :" << db.lastError().text();
    else
        qDebug() << "Connexion réussie !";

    // Login successful, show main window
    MainWindow w;
    w.showMaximized();
    
    return a.exec();
}

#include "main.moc"
>>>>>>> 2a1db57 (atelier connexion)
=======

#include "main.moc"
>>>>>>> a6aef5d (Ajout de l'interface de login et corrections)
>>>>>>> origin/gestion-employee
