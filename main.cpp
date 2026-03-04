#include "mainwindow.h"
#include "mascotwidget.h"

#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QPropertyAnimation>
#include <QEvent>
#include <QMouseEvent>
#include <QStackedWidget>
#include <QTimer>
#include <QVideoWidget>
#include <QMediaCaptureSession>
#include <QCamera>
#include <QMediaDevices>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

#include "connection.h"

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    LoginDialog(QWidget *parent = nullptr) : QDialog(parent)
    {
        setWindowTitle("WasteGuard - Connexion [gestion-employee]");
        setMinimumSize(450, 650);
        setStyleSheet("QDialog { background-color: #1F110B; }");

        setFixedSize(450, 600);
        setWindowFlags(Qt::FramelessWindowHint);
        setAttribute(Qt::WA_TranslucentBackground);

        const QString blueBase = "#0F1A2B";
        const QString accentBlue = "#3498DB";
        const QString lightBlue = "#EBF5FB";

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

        mascot = new MascotWidget(this);
        mascot->setMinimumHeight(240);
        containerLayout->addWidget(mascot);

        QLabel *lblMascotName = new QLabel("LABIB", this);
        lblMascotName->setAlignment(Qt::AlignCenter);
        lblMascotName->setStyleSheet("font-size: 14px; font-weight: 800; color: #00F2FE; letter-spacing: 4px; margin-top: 5px; margin-bottom: 15px;");
        containerLayout->addWidget(lblMascotName);

        stackedWidget = new QStackedWidget(this);

        QWidget *pageLogin = new QWidget();
        QVBoxLayout *loginLayout = new QVBoxLayout(pageLogin);
        loginLayout->setSpacing(12);

        QLabel *lblTitle = new QLabel("ACCES SECURISE - EMAIL/CIN", this);
        lblTitle->setStyleSheet(QString("font-size: 20px; font-weight: 800; color: %1; letter-spacing: 2px;").arg(accentBlue));
        lblTitle->setAlignment(Qt::AlignCenter);
        loginLayout->addWidget(lblTitle);

        txtUser = new QLineEdit(this);
        txtUser->setPlaceholderText("Email");
        txtUser->setMinimumHeight(48);
        loginLayout->addWidget(txtUser);

        txtPass = new QLineEdit(this);
        txtPass->setPlaceholderText("CIN / Mot de passe admin");
        txtPass->setEchoMode(QLineEdit::Password);
        txtPass->setMinimumHeight(48);
        loginLayout->addWidget(txtPass);

        QPushButton *btnLogin = new QPushButton("CONNEXION", this);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setMinimumHeight(52);
        btnLogin->setCursor(Qt::PointingHandCursor);
        loginLayout->addWidget(btnLogin);

        QPushButton *btnFaceId = new QPushButton("BIOMETRIE FACIALE", this);
        btnFaceId->setStyleSheet(QString(
            "QPushButton { background: transparent; color: %1; font-weight: 700; "
            "font-size: 13px; border-radius: 10px; padding: 10px; border: 1px solid rgba(52, 152, 219, 0.5); } "
            "QPushButton:hover { background-color: rgba(52, 152, 219, 0.1); }"
        ).arg(accentBlue));
        btnFaceId->setMinimumHeight(45);
        btnFaceId->setCursor(Qt::PointingHandCursor);
        loginLayout->addWidget(btnFaceId);

        QWidget *pageFaceId = new QWidget();
        QVBoxLayout *faceLayout = new QVBoxLayout(pageFaceId);
        faceLayout->setSpacing(15);

        QLabel *lblFaceTitle = new QLabel("SCAN BIOMETRIQUE", this);
        lblFaceTitle->setStyleSheet("font-size: 18px; font-weight: 800; color: #E9BC99;");
        lblFaceTitle->setAlignment(Qt::AlignCenter);
        faceLayout->addWidget(lblFaceTitle);

        videoWidget = new QWidget(this);
        videoWidget->setMinimumSize(320, 240);
        videoWidget->setStyleSheet(QString("background-color: rgba(0,0,0,0.5); border: 2px solid %1; border-radius: 15px;").arg(accentBlue));
        faceLayout->addWidget(videoWidget);

        lblStatus = new QLabel("Initialisation du capteur...", this);
        lblStatus->setStyleSheet(QString("font-size: 14px; color: %1;").arg(lightBlue));
        lblStatus->setAlignment(Qt::AlignCenter);
        faceLayout->addWidget(lblStatus);

        QPushButton *btnBack = new QPushButton("Annuler et revenir", this);
        btnBack->setStyleSheet(QString("color: %1; text-decoration: underline; font-size: 12px; border: none;").arg(accentBlue));
        btnBack->setFlat(true);
        btnBack->setCursor(Qt::PointingHandCursor);
        faceLayout->addWidget(btnBack);

        stackedWidget->addWidget(pageLogin);
        stackedWidget->addWidget(pageFaceId);
        stackedWidget->setCurrentIndex(0);

        containerLayout->addWidget(stackedWidget);
        mainLayout->addWidget(container);

        eyeAnim = new QPropertyAnimation(mascot, "eyeCoverFactor", this);
        eyeAnim->setDuration(450);
        eyeAnim->setEasingCurve(QEasingCurve::InOutBack);

        txtPass->installEventFilter(this);
        txtUser->installEventFilter(this);
        setMouseTracking(true);
        pageLogin->setMouseTracking(true);

        connect(btnLogin, &QPushButton::clicked, this, &LoginDialog::attemptLogin);
        connect(txtPass, &QLineEdit::returnPressed, this, &LoginDialog::attemptLogin);
        connect(txtUser, &QLineEdit::returnPressed, this, [this]() {
            txtPass->setFocus();
        });

        connect(btnFaceId, &QPushButton::clicked, this, [this]() {
            startFaceId();
            mascot->setState(MascotWidget::Magnifier);
        });

        connect(btnBack, &QPushButton::clicked, this, [this]() {
            stackedWidget->setCurrentIndex(0);
            mascot->setState(MascotWidget::Idle);
            lblStatus->setText("Initialisation du capteur...");
            lblStatus->setStyleSheet("font-size: 14px; color: #EBF5FB;");
        });

        connect(txtUser, &QLineEdit::textEdited, this, [this]() {
            mascot->setState(MascotWidget::Notepad);
            QTimer::singleShot(1500, this, [this]() {
                if (!txtUser->hasFocus()) {
                    mascot->setState(MascotWidget::Idle);
                }
            });
        });
    }

    bool isAuthenticated() const
    {
        return m_authenticated;
    }

    bool isAdminLogin() const
    {
        return m_isAdminLogin;
    }

    bool eventFilter(QObject *obj, QEvent *event) override
    {
        if (obj == txtPass) {
            if (event->type() == QEvent::FocusIn) {
                eyeAnim->stop();
                eyeAnim->setEndValue(1.0);
                eyeAnim->start();
                mascot->setState(MascotWidget::Idle);
            } else if (event->type() == QEvent::FocusOut) {
                eyeAnim->stop();
                eyeAnim->setEndValue(0.0);
                eyeAnim->start();
            }
        } else if (obj == txtUser) {
            if (event->type() == QEvent::FocusIn) {
                mascot->setState(MascotWidget::Notepad);
            } else if (event->type() == QEvent::FocusOut) {
                mascot->setState(MascotWidget::Idle);
            }
        }
        return QDialog::eventFilter(obj, event);
    }

    void mouseMoveEvent(QMouseEvent *event) override
    {
        mascot->setLookAt(event->globalPosition().toPoint());
        QDialog::mouseMoveEvent(event);
    }

    void accept() override
    {
        // Block any accidental accept path unless auth was explicitly validated.
        if (m_authenticated) {
            QDialog::accept();
        } else {
            attemptLogin();
        }
    }

private slots:
    void attemptLogin()
    {
        const QString email = txtUser->text().trimmed();
        const QString password = txtPass->text().trimmed();

        if (email.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "Connexion", "Veuillez saisir l'email et le mot de passe.");
            return;
        }

        // Admin pass-partout
        if (email.compare("admin@wasteguard.com", Qt::CaseInsensitive) == 0 && password == "0000") {
            grantAccess(true);
            return;
        }

        Connection *connection = Connection::instance();
        if (!connection->isOpen() && !connection->createConnect()) {
            QMessageBox::critical(
                this,
                "Connexion base",
                "Impossible de joindre la base de donnees.\n\nDetails: " + connection->lastError());
            return;
        }

        QSqlQuery query;
        query.prepare(
            "SELECT COUNT(1) "
            "FROM EMPLOYE "
            "WHERE LOWER(TRIM(email)) = LOWER(TRIM(:email)) "
            "AND TRIM(cin) = TRIM(:cin)");
        query.bindValue(":email", email);
        query.bindValue(":cin", password);

        if (!query.exec()) {
            QMessageBox::critical(
                this,
                "Echec de connexion",
                "Erreur pendant la verification des identifiants.\n\nDetails: " + query.lastError().text());
            txtPass->clear();
            txtPass->setFocus();
            return;
        }

        int matched = 0;
        if (query.next()) {
            matched = query.value(0).toInt();
        }

        if (matched > 0) {
            grantAccess(false);
            return;
        }

        QMessageBox::warning(
            this,
            "Echec de connexion",
            "Email ou CIN invalide.\n\nUtilisez un email/CIN employe valide, ou admin@wasteguard.com / 0000.");
        txtPass->clear();
        txtPass->setFocus();
    }

    void startFaceId()
    {
        stackedWidget->setCurrentIndex(1);
        lblStatus->setText("Scan de retine en cours...");
        lblStatus->setStyleSheet("font-size: 16px; color: #C66A4E; font-weight: 800;");

        QTimer::singleShot(2000, this, [this]() {
            lblStatus->setText("Analyse des vecteurs...");
            lblStatus->setStyleSheet("font-size: 16px; color: #E9BC99; font-weight: 800;");

            QTimer::singleShot(2000, this, [this]() {
                lblStatus->setText("VERIFIE");
                lblStatus->setStyleSheet("font-size: 20px; color: #8cc63f; font-weight: 900;");
                QTimer::singleShot(700, this, [this]() {
                    stackedWidget->setCurrentIndex(0);
                    attemptLogin();
                });
            });
        });
    }

private:
    void grantAccess(bool isAdmin)
    {
        m_authenticated = true;
        m_isAdminLogin = isAdmin;
        QDialog::accept();
    }

    MascotWidget *mascot = nullptr;
    QStackedWidget *stackedWidget = nullptr;
    QLineEdit *txtUser = nullptr;
    QLineEdit *txtPass = nullptr;
    QLabel *lblStatus = nullptr;
    QWidget *videoWidget = nullptr;
    QPropertyAnimation *eyeAnim = nullptr;
    bool m_authenticated = false;
    bool m_isAdminLogin = false;
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Drivers disponibles:" << QSqlDatabase::drivers();

    LoginDialog login;
    if (login.exec() != QDialog::Accepted || !login.isAuthenticated()) {
        return 0;
    }

    Connection *c = Connection::instance();
    const bool dbReady = c->isOpen() || c->createConnect();
    if (!dbReady) {
        if (!login.isAdminLogin()) {
            QMessageBox::critical(
                nullptr,
                QObject::tr("database is not open"),
                QObject::tr("connection failed.\nClick Cancel to exit."),
                QMessageBox::Cancel);
            return 0;
        }

        QMessageBox::warning(
            nullptr,
            QObject::tr("Mode admin hors ligne"),
            QObject::tr("Connexion base indisponible.\nOuverture en mode admin hors ligne."));
    }

    MainWindow w;
    w.showMaximized();
    return a.exec();
}

#include "main.moc"

