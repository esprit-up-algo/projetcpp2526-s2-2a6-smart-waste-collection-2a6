<<<<<<< HEAD




=======
#include "connection.h"
>>>>>>> origin/gestion-employee
#include "connection.h"
#include <QSqlError>
#include <QDebug>

<<<<<<< HEAD
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
    bool test = false;

    db.setDatabaseName("Source_Projet2A");//inserer le nom de la source de données
    db.setUserName("wasteguard");//inserer nom de l'utilisateur
    db.setPassword("123");//inserer mot de passe de cet utilisateur

    if (db.open()) {
        test = true;
        qDebug() << "Connexion à la base de données réussie";
    } else {
        qDebug() << "Erreur de connexion:" << db.lastError().text();
    }

    return test;
}

// Fermer la connexion
void Connection::closeConnection()
{
    if (db.isOpen()) {
        db.close();
    }
}

// Destructeur privé
Connection::~Connection()
{
    closeConnection();
}





=======
Connection::Connection()
{
}

bool Connection::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("Source_Projet2A");
    db.setUserName("wasteguard");      // ton username
    db.setPassword("123");     // ton password

    if (!db.open()) {
        qDebug() << "Erreur connexion :" << db.lastError().text();
        return false;
    }

    qDebug() << "Connexion réussie !";
    return true;
}
>>>>>>> origin/gestion-employee
