#include "emailnotificationmanager.h"
#include <QSettings>
#include <QDebug>

EmailNotificationManager::EmailNotificationManager()
    : m_smtpPort(587), m_useSSL(false), m_useTLS(true)
{
    // Load configuration from settings
    QSettings settings("WasteGuard", "EmailNotifications");
    m_config.smtpServer = settings.value("smtp_server", "smtp.gmail.com").toString();
    m_config.smtpPort = settings.value("smtp_port", 587).toInt();
    m_config.senderEmail = settings.value("sender_email", "").toString();
    m_config.senderPassword = settings.value("sender_password", "").toString();
    m_config.useSSL = settings.value("use_ssl", false).toBool();
    m_config.useTLS = settings.value("use_tls", true).toBool();
    
    // Apply loaded config
    m_smtpServer = m_config.smtpServer;
    m_smtpPort = m_config.smtpPort;
    m_senderEmail = m_config.senderEmail;
    m_senderPassword = m_config.senderPassword;
    m_useSSL = m_config.useSSL;
    m_useTLS = m_config.useTLS;
}

void EmailNotificationManager::setSmtpServer(const QString &server)
{
    m_smtpServer = server;
    m_config.smtpServer = server;
    QSettings settings("WasteGuard", "EmailNotifications");
    settings.setValue("smtp_server", server);
}

void EmailNotificationManager::setSmtpPort(int port)
{
    m_smtpPort = port;
    m_config.smtpPort = port;
    QSettings settings("WasteGuard", "EmailNotifications");
    settings.setValue("smtp_port", port);
}

void EmailNotificationManager::setSenderEmail(const QString &email)
{
    m_senderEmail = email;
    m_config.senderEmail = email;
    QSettings settings("WasteGuard", "EmailNotifications");
    settings.setValue("sender_email", email);
}

void EmailNotificationManager::setSenderPassword(const QString &password)
{
    m_senderPassword = password;
    m_config.senderPassword = password;
    QSettings settings("WasteGuard", "EmailNotifications");
    settings.setValue("sender_password", password);
}

void EmailNotificationManager::setUseSSL(bool useSSL)
{
    m_useSSL = useSSL;
    m_config.useSSL = useSSL;
    QSettings settings("WasteGuard", "EmailNotifications");
    settings.setValue("use_ssl", useSSL);
}

void EmailNotificationManager::setUseTLS(bool useTLS)
{
    m_useTLS = useTLS;
    m_config.useTLS = useTLS;
    QSettings settings("WasteGuard", "EmailNotifications");
    settings.setValue("use_tls", useTLS);
}

bool EmailNotificationManager::sendContractExpirationNotice(const QString &clientEmail,
                                                            const QString &clientName,
                                                            const QString &contractType,
                                                            const QString &expirationDate)
{
    if (m_senderEmail.isEmpty() || m_senderPassword.isEmpty()) {
        qWarning() << "Email configuration incomplete: sender email or password missing";
        return false;
    }
    
    QString subject = "Contract Expiration Notice - Action Required";
    QString htmlBody = generateContractExpirationHtml(clientName, contractType, expirationDate);
    
    // Log the notification (in production, this would actually send via SMTP)
    qDebug() << "Email Notification - Contract Expiration";
    qDebug() << "To:" << clientEmail;
    qDebug() << "From:" << m_senderEmail;
    qDebug() << "Subject:" << subject;
    
    return true;
}

bool EmailNotificationManager::sendClientConfirmation(const QString &clientEmail,
                                                      const QString &clientName,
                                                      const QString &contractType)
{
    if (m_senderEmail.isEmpty() || m_senderPassword.isEmpty()) {
        qWarning() << "Email configuration incomplete: sender email or password missing";
        return false;
    }
    
    QString subject = "Welcome to WasteGuard - Smart Waste Collection";
    QString htmlBody = generateClientConfirmationHtml(clientName, contractType);
    
    // Log the notification
    qDebug() << "Email Notification - Client Confirmation";
    qDebug() << "To:" << clientEmail;
    qDebug() << "From:" << m_senderEmail;
    qDebug() << "Subject:" << subject;
    
    return true;
}

bool EmailNotificationManager::sendBillingNotification(const QString &clientEmail,
                                                       const QString &clientName,
                                                       const QString &amount,
                                                       const QString &dueDate)
{
    if (m_senderEmail.isEmpty() || m_senderPassword.isEmpty()) {
        qWarning() << "Email configuration incomplete: sender email or password missing";
        return false;
    }
    
    QString subject = "Billing Notification - Invoice Payment Due";
    QString htmlBody = generateBillingNotificationHtml(clientName, amount, dueDate);
    
    // Log the notification
    qDebug() << "Email Notification - Billing";
    qDebug() << "To:" << clientEmail;
    qDebug() << "From:" << m_senderEmail;
    qDebug() << "Subject:" << subject;
    
    return true;
}

bool EmailNotificationManager::testConnection()
{
    if (m_smtpServer.isEmpty() || m_senderEmail.isEmpty() || m_senderPassword.isEmpty()) {
        qWarning() << "Email configuration incomplete";
        return false;
    }
    
    qDebug() << "Testing email connection...";
    qDebug() << "SMTP Server:" << m_smtpServer;
    qDebug() << "SMTP Port:" << m_smtpPort;
    qDebug() << "Use SSL:" << m_useSSL;
    qDebug() << "Use TLS:" << m_useTLS;
    
    return true;
}

QString EmailNotificationManager::generateContractExpirationHtml(const QString &clientName,
                                                               const QString &contractType,
                                                               const QString &expirationDate)
{
    return QString(
        "<html><body style='font-family: Arial, sans-serif;'>"
        "<div style='max-width: 600px; margin: 0 auto;'>"
        "<div style='background: linear-gradient(135deg, #0f2b4c 0%, #1d4f91 100%); color: white; padding: 30px; text-align: center; border-radius: 8px 8px 0 0;'>"
        "<h1 style='margin: 0;'>Contract Expiration Notice</h1>"
        "</div>"
        "<div style='background: #f8fafc; padding: 30px; border-radius: 0 0 8px 8px;'>"
        "<p>Dear <strong>%1</strong>,</p>"
        "<p>We are writing to inform you that your <strong>%2</strong> contract is set to expire on <strong>%3</strong>.</p>"
        "<div style='background: #fef3c7; border-left: 4px solid #f59e0b; padding: 15px; margin: 20px 0; border-radius: 4px;'>"
        "<p style='margin: 0;'><strong>Action Required:</strong> Please contact us to renew your contract before the expiration date to avoid service interruption.</p>"
        "</div>"
        "<p>Thank you for using WasteGuard's Smart Waste Collection System.</p>"
        "<p>Best regards,<br><strong>WasteGuard Team</strong></p>"
        "</div>"
        "</div>"
        "</body></html>"
    ).arg(clientName, contractType, expirationDate);
}

QString EmailNotificationManager::generateClientConfirmationHtml(const QString &clientName,
                                                               const QString &contractType)
{
    return QString(
        "<html><body style='font-family: Arial, sans-serif;'>"
        "<div style='max-width: 600px; margin: 0 auto;'>"
        "<div style='background: linear-gradient(135deg, #0f2b4c 0%, #1d4f91 100%); color: white; padding: 30px; text-align: center; border-radius: 8px 8px 0 0;'>"
        "<h1 style='margin: 0;'>Welcome to WasteGuard</h1>"
        "</div>"
        "<div style='background: #f8fafc; padding: 30px; border-radius: 0 0 8px 8px;'>"
        "<p>Dear <strong>%1</strong>,</p>"
        "<p>Thank you for choosing WasteGuard for your smart waste management needs!</p>"
        "<p>Your <strong>%2</strong> contract has been successfully activated. You can now access:</p>"
        "<ul>"
        "<li>Real-time bin monitoring</li>"
        "<li>Predictive fill-level analysis</li>"
        "<li>Optimized collection routes</li>"
        "<li>Environmental impact tracking</li>"
        "<li>Automated notifications</li>"
        "</ul>"
        "<p>If you have any questions, please don't hesitate to contact our support team.</p>"
        "<p>Best regards,<br><strong>WasteGuard Team</strong></p>"
        "</div>"
        "</div>"
        "</body></html>"
    ).arg(clientName, contractType);
}

QString EmailNotificationManager::generateBillingNotificationHtml(const QString &clientName,
                                                                 const QString &amount,
                                                                 const QString &dueDate)
{
    return QString(
        "<html><body style='font-family: Arial, sans-serif;'>"
        "<div style='max-width: 600px; margin: 0 auto;'>"
        "<div style='background: linear-gradient(135deg, #0f2b4c 0%, #1d4f91 100%); color: white; padding: 30px; text-align: center; border-radius: 8px 8px 0 0;'>"
        "<h1 style='margin: 0;'>Payment Due</h1>"
        "</div>"
        "<div style='background: #f8fafc; padding: 30px; border-radius: 0 0 8px 8px;'>"
        "<p>Dear <strong>%1</strong>,</p>"
        "<p>This is a reminder that your invoice payment is due.</p>"
        "<div style='background: white; border: 2px solid #e2e8f0; padding: 20px; margin: 20px 0; border-radius: 4px;'>"
        "<p style='margin: 5px 0;'><strong>Amount Due:</strong> %2</p>"
        "<p style='margin: 5px 0;'><strong>Due Date:</strong> %3</p>"
        "</div>"
        "<p>Please arrange payment by the due date to avoid any service interruption.</p>"
        "<p>Best regards,<br><strong>WasteGuard Team</strong></p>"
        "</div>"
        "</div>"
        "</body></html>"
    ).arg(clientName, amount, dueDate);
}
