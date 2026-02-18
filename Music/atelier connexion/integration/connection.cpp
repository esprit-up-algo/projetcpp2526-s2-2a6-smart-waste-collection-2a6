#include "connection.h"
#include "connection.h"
#include <QSqlError>
#include <QDebug>

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
