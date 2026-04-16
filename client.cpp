#include "client.h"
#include <QSqlError>
#include <QVariant>

Client::Client()
    : m_idClient(0)
{
}

Client::Client(int idClient, const QString &nom, const QString &matricule,
               const QString &email, const QString &typeContrat,
               const QString &statutPaiement, const QString &dateExpiration)
    : m_idClient(idClient), m_nom(nom), m_matricule(matricule),
      m_email(email), m_typeContrat(typeContrat),
      m_statutPaiement(statutPaiement), m_dateExpiration(dateExpiration)
{
}

// ---------- Getters ----------
int Client::getIdClient() const { return m_idClient; }
QString Client::getNom() const { return m_nom; }
QString Client::getMatricule() const { return m_matricule; }
QString Client::getEmail() const { return m_email; }
QString Client::getTypeContrat() const { return m_typeContrat; }
QString Client::getStatutPaiement() const { return m_statutPaiement; }
QString Client::getDateExpiration() const { return m_dateExpiration; }

// ---------- Setters ----------
void Client::setIdClient(int value) { m_idClient = value; }
void Client::setNom(const QString &value) { m_nom = value; }
void Client::setMatricule(const QString &value) { m_matricule = value; }
void Client::setEmail(const QString &value) { m_email = value; }
void Client::setTypeContrat(const QString &value) { m_typeContrat = value; }
void Client::setStatutPaiement(const QString &value) { m_statutPaiement = value; }
void Client::setDateExpiration(const QString &value) { m_dateExpiration = value; }

// ---------- CRUD ----------
bool Client::ajouter()
{
    QSqlQuery query;
    int nextId = m_idClient;
    if (nextId <= 0) {
        QSqlQuery idQuery;
        if (idQuery.exec("SELECT NVL(MAX(ID_CLIENT), 0) + 1 FROM CLIENT") && idQuery.next()) {
            nextId = idQuery.value(0).toInt();
        } else {
            m_lastError = "Erreur generation ID client.";
            return false;
        }
    }

    query.prepare(
        "INSERT INTO CLIENT (ID_CLIENT, NOM, MATRICULE, EMAIL, TYPE_CONTRAT, STATUT_PAIEMENT, DATE_EXPIRATION_CONTRAT) "
        "VALUES (:id, :nom, :matricule, :email, :type_contrat, :statut_paiement, TO_DATE(:date_expiration, 'YYYY-MM-DD'))"
    );
    query.bindValue(":id", nextId);
    query.bindValue(":nom", m_nom);
    query.bindValue(":matricule", m_matricule);
    query.bindValue(":email", m_email);
    query.bindValue(":type_contrat", m_typeContrat);
    query.bindValue(":statut_paiement", m_statutPaiement);
    query.bindValue(":date_expiration", m_dateExpiration);

    if (query.exec()) {
        m_idClient = nextId;
        m_lastError.clear();
        return true;
    }
    m_lastError = query.lastError().text();
    return false;
}

bool Client::modifier()
{
    QSqlQuery query;
    query.prepare(
        "UPDATE CLIENT SET "
        "NOM = :nom, MATRICULE = :matricule, EMAIL = :email, "
        "TYPE_CONTRAT = :type_contrat, STATUT_PAIEMENT = :statut_paiement, "
        "DATE_EXPIRATION_CONTRAT = TO_DATE(:date_expiration, 'YYYY-MM-DD') "
        "WHERE ID_CLIENT = :id"
    );
    query.bindValue(":id", m_idClient);
    query.bindValue(":nom", m_nom);
    query.bindValue(":matricule", m_matricule);
    query.bindValue(":email", m_email);
    query.bindValue(":type_contrat", m_typeContrat);
    query.bindValue(":statut_paiement", m_statutPaiement);
    query.bindValue(":date_expiration", m_dateExpiration);

    if (query.exec()) {
        m_lastError.clear();
        return true;
    }
    m_lastError = query.lastError().text();
    return false;
}

bool Client::supprimer(int idClient)
{
    QSqlQuery query;
    query.prepare("DELETE FROM CLIENT WHERE ID_CLIENT = :id");
    query.bindValue(":id", idClient);
    if (query.exec()) {
        m_lastError.clear();
        return true;
    }
    m_lastError = query.lastError().text();
    return false;
}

QSqlQueryModel *Client::afficher(const QString &searchField, const QString &searchValue, const QString &sortCriteria)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    
    // Validate sort criteria against whitelist to prevent SQL injection
    QStringList allowedSortColumns = {
        "id_client", "id_client ASC", "id_client DESC",
        "matricule", "matricule ASC", "matricule DESC",
        "nom", "nom ASC", "nom DESC",
        "email", "email ASC", "email DESC",
        "type_contrat", "type_contrat ASC", "type_contrat DESC",
        "statut_paiement", "statut_paiement ASC", "statut_paiement DESC",
        "date_expiration_contrat", "date_expiration_contrat ASC", "date_expiration_contrat DESC"
    };
    
    QString safeSortCriteria = "id_client ASC";
    if (!sortCriteria.isEmpty() && allowedSortColumns.contains(sortCriteria.trimmed().toLower())) {
        safeSortCriteria = sortCriteria.trimmed();
    }
    
    // Validate search field
    QStringList validSearchFields = {"matricule", "nom", "email", "type_contrat", "statut_paiement"};
    
    QString queryString = 
        "SELECT ID_CLIENT, MATRICULE, NOM, EMAIL, TYPE_CONTRAT, DATE_EXPIRATION_CONTRAT, STATUT_PAIEMENT "
        "FROM CLIENT ";
    
    if (!searchValue.isEmpty() && validSearchFields.contains(searchField.toLower())) {
        queryString += "WHERE UPPER(" + searchField + ") LIKE '%' || UPPER(:search) || '%' ";
        query.prepare(queryString + "ORDER BY " + safeSortCriteria);
        query.bindValue(":search", searchValue);
    } else {
        query.prepare(queryString + "ORDER BY " + safeSortCriteria);
    }
    
    query.exec();
    model->setQuery(std::move(query));
    m_lastError = model->lastError().isValid() ? model->lastError().text() : QString();
    return model;
}

bool Client::findIdByMatricule(const QString &matricule, int &idClient)
{
    idClient = -1;
    QSqlQuery query;
    query.prepare("SELECT ID_CLIENT FROM CLIENT WHERE UPPER(MATRICULE) = UPPER(:matricule)");
    query.bindValue(":matricule", matricule.trimmed());

    if (!query.exec()) {
        m_lastError = query.lastError().text();
        return false;
    }

    if (query.next()) {
        idClient = query.value(0).toInt();
        m_lastError.clear();
        return true;
    }

    m_lastError = "Client introuvable.";
    return false;
}

QString Client::lastError() const
{
    return m_lastError;
}
