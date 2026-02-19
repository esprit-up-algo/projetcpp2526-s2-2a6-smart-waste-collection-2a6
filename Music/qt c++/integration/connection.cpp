#include "connection.h"
#include <QSqlError>
#include <QDebug>

// Initialisation du pointeur d'instance
Connection* Connection::p_instance = nullptr;

// Constructeur privé
Connection::Connection()
{
    // Initialisation de la base de données
    db = QSqlDatabase::addDatabase("QODBC");
}

// Méthode statique pour obtenir l'instance unique
Connection* Connection::instance()
{
    if (p_instance == nullptr) {
        p_instance = new Connection();
    }
    return p_instance;
}

// Méthode pour établir la connexion
bool Connection::createConnect()
{
    if (!QSqlDatabase::isDriverAvailable("QODBC")) {
        qCritical() << "Driver QODBC introuvable. Drivers disponibles:" << QSqlDatabase::drivers();
        return false;
    }

    if (!db.isValid()) {
        qCritical() << "La connexion SQL n'est pas valide.";
        return false;
    }

    db.setDatabaseName("Source_Projet2A"); // Inserer le nom de la source de donnees
    db.setUserName("wasteguard");          // Inserer nom de l'utilisateur
    db.setPassword("123");                 // Inserer mot de passe de cet utilisateur

    if (db.open()) {
        qInfo() << "Connexion a la base de donnees reussie";
        return true;
    }

    qCritical() << "Erreur de connexion:" << db.lastError().text();
    return false;
}

// Fermer la connexion
void Connection::closeConnection()
{
    if (db.isOpen()) {
        db.close();
    }
}

QString Connection::lastError() const
{
    return db.lastError().text();
}

// Destructeur privé
Connection::~Connection()
{
    closeConnection();
}





