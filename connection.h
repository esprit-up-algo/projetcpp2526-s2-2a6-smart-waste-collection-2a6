#ifndef CONNECTION_H
#define CONNECTION_H

<<<<<<< HEAD
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
=======
#include <QSqlDatabase>
>>>>>>> origin/gestion-employee

class Connection
{
public:
<<<<<<< HEAD
    static Connection* instance(); // Accès à l'instance unique
    bool createConnect(); // Méthode pour créer la connexion
    void closeConnection(); // Fermer la connexion

private:
    Connection(); // Constructeur privé
    ~Connection(); // Destructeur privé
    Connection(const Connection&) = delete; // Supprimer le constructeur de copie
    Connection& operator=(const Connection&) = delete; // Supprimer l'opérateur d'affectation

    static Connection* p_instance; // Pointeur vers l'instance unique
    QSqlDatabase db;
};

#endif // CONNECTION_H

=======
    Connection();
    bool createConnection();
};

#endif // CONNECTION_H
>>>>>>> origin/gestion-employee
