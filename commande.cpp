#include "commande.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>
#include <QDateTime>

Commande::Commande()
    : m_id(0), m_idClient(0), m_qte(0), m_prixTotal(0.0)
{
}

Commande::Commande(int id, int idClient, int qte, const QString &priorite,
                   const QString &statut, const QDate &dateCommande,
                   const QDate &dateLivraison, double prixTotal)
    : m_id(id), m_idClient(idClient), m_qte(qte), m_priorite(priorite),
      m_statut(statut), m_dateCommande(dateCommande),
      m_dateLivraison(dateLivraison), m_prixTotal(prixTotal), m_adresse("")
{
}

int Commande::id() const { return m_id; }
int Commande::idClient() const { return m_idClient; }
int Commande::qte() const { return m_qte; }
QString Commande::priorite() const { return m_priorite; }
QString Commande::statut() const { return m_statut; }
QDate Commande::dateCommande() const { return m_dateCommande; }
QDate Commande::dateLivraison() const { return m_dateLivraison; }
double Commande::prixTotal() const { return m_prixTotal; }
QString Commande::adresse() const { return m_adresse; }
QString Commande::reference() const { return m_reference; }

void Commande::setId(int id) { m_id = id; }
void Commande::setIdClient(int idClient) { m_idClient = idClient; }
void Commande::setQte(int qte) { m_qte = qte; }
void Commande::setPriorite(const QString &priorite) { m_priorite = priorite; }
void Commande::setStatut(const QString &statut) { m_statut = statut; }
void Commande::setDateCommande(const QDate &date) { m_dateCommande = date; }
void Commande::setDateLivraison(const QDate &date) { m_dateLivraison = date; }
void Commande::setPrixTotal(double prix) { m_prixTotal = prix; }
void Commande::setAdresse(const QString &adresse) { m_adresse = adresse; }
void Commande::setReference(const QString &reference) { m_reference = reference; }

bool Commande::ajouter()
{
    // Check if the default database connection is open
    QSqlDatabase dbDefault = QSqlDatabase::database();
    if (!dbDefault.isOpen()) {
        m_lastError = "Database error: connection is not open. Check your ODBC configuration.";
        qDebug() << m_lastError;
        return false;
    }

    QSqlQuery idQuery;
    int nextId = m_id;
    if (nextId <= 0) {
        // Log attempts for diagnosis
        qDebug() << "Generating ID...";
        if (idQuery.exec("SELECT NVL(MAX(ID_COMMANDE), 0) + 1 FROM COMMANDE") && idQuery.next()) {
            nextId = idQuery.value(0).toInt();
        } else {
            QSqlError idErr = idQuery.lastError();
            qDebug() << "NVL fail:" << idErr.text();
            
            if (idQuery.exec("SELECT COALESCE(MAX(ID_COMMANDE), 0) + 1 FROM COMMANDE") && idQuery.next()) {
                nextId = idQuery.value(0).toInt();
            } else {
                qDebug() << "COALESCE fail:" << idQuery.lastError().text();
                // Last resort: timestamp
                nextId = static_cast<int>(QDateTime::currentSecsSinceEpoch() % 1000000);
            }
        }
    }
    qDebug() << "Using ID:" << nextId;

    int finalClientId = m_idClient;
    if (finalClientId <= 0) {
        // Find FIRST available client since ID_CLIENT is NOT NULL in the database
        QSqlQuery clientQ("SELECT ID_CLIENT FROM CLIENT FETCH FIRST 1 ROWS ONLY");
        if (clientQ.exec() && clientQ.next()) {
            finalClientId = clientQ.value(0).toInt();
        } else {
            // No client exists at all? This might cause a different error later, but we try
            // or just fallback to 1 as common dummy ID
            finalClientId = 1; 
        }
    }

    QSqlQuery q;
    q.prepare("INSERT INTO COMMANDE (ID_COMMANDE, ID_CLIENT, QTE, PRIORITE, STATUT, "
              "DATE_COMMANDE, DATE_LIVRAISON, PRIX_TOTAL, ADRESSE, REFERENCE) "
              "VALUES (:id, :client, :qte, :prio, :stat, :dcmd, :dliv, :prix, :adresse, :ref)");
    q.bindValue(":id",      nextId);
    q.bindValue(":client",  finalClientId);
    q.bindValue(":qte",     m_qte);
    q.bindValue(":prio",    m_priorite);
    q.bindValue(":stat",    m_statut);
    q.bindValue(":dcmd",    m_dateCommande);
    q.bindValue(":dliv",    m_dateLivraison);
    q.bindValue(":prix",    m_prixTotal);
    q.bindValue(":adresse", m_adresse);
    q.bindValue(":ref",     m_reference);

    if (q.exec()) {
        m_id = nextId;
        return true;
    }

    // Comprehensive error capture
    QSqlError error = q.lastError();
    QString diagText = QString("Step: INSERT | Code: %1 | Error: %2 | Driver: %3 | DB: %4")
                       .arg(error.nativeErrorCode())
                       .arg(error.text().isEmpty() ? "(Empty)" : error.text())
                       .arg(error.driverText().isEmpty() ? "(Empty)" : error.driverText())
                       .arg(error.databaseText().isEmpty() ? "(Empty)" : error.databaseText());
                       
    qDebug() << diagText;

    // Retry logic if REFERENCE is missing
    if (diagText.contains("REFERENCE", Qt::CaseInsensitive) || 
        diagText.contains("00904", Qt::CaseInsensitive)) { // ORA-00904 is Invalid Identifier (likely missing col)
        
        QSqlQuery q2;
        q2.prepare("INSERT INTO COMMANDE (ID_COMMANDE, ID_CLIENT, QTE, PRIORITE, STATUT, "
                   "DATE_COMMANDE, DATE_LIVRAISON, PRIX_TOTAL, ADRESSE) "
                   "VALUES (:id, :client, :qte, :prio, :stat, :dcmd, :dliv, :prix, :adresse)");
        q2.bindValue(":id",      nextId);
        q2.bindValue(":client",  finalClientId);
        q2.bindValue(":qte",     m_qte);
        q2.bindValue(":prio",    m_priorite);
        q2.bindValue(":stat",    m_statut);
        q2.bindValue(":dcmd",    m_dateCommande);
        q2.bindValue(":dliv",    m_dateLivraison);
        q2.bindValue(":prix",    m_prixTotal);
        q2.bindValue(":adresse", m_adresse);

        if (q2.exec()) {
            m_id = nextId;
            return true;
        }
        error = q2.lastError();
    }

    m_lastError = QString("[%1] %2").arg(error.nativeErrorCode()).arg(error.text());
    if (m_lastError.trimmed() == "[]") {
         m_lastError = "Erreur SQL inconnue. Vérifiez le nom de la table COMMANDE.";
    }
    return false;
}

bool Commande::modifier()
{
    int finalClientId = m_idClient;
    if (finalClientId <= 0) {
        // Fallback to searching first client if somehow missing
        QSqlQuery clientQ("SELECT ID_CLIENT FROM CLIENT FETCH FIRST 1 ROWS ONLY");
        if (clientQ.exec() && clientQ.next()) {
            finalClientId = clientQ.value(0).toInt();
        } else {
            finalClientId = 1;
        }
    }

    QSqlQuery query;
    query.prepare("UPDATE COMMANDE SET ID_CLIENT=:client, QTE=:qte, PRIORITE=:prio, STATUT=:stat, "
                  "DATE_COMMANDE=:dcmd, DATE_LIVRAISON=:dliv, PRIX_TOTAL=:prix, ADRESSE=:adresse, REFERENCE=:ref "
                  "WHERE ID_COMMANDE=:id");
    query.bindValue(":id",      m_id);
    query.bindValue(":client",  finalClientId);
    query.bindValue(":qte",     m_qte);
    query.bindValue(":prio",    m_priorite);
    query.bindValue(":stat",    m_statut);
    query.bindValue(":dcmd",    m_dateCommande);
    query.bindValue(":dliv",    m_dateLivraison);
    query.bindValue(":prix",    m_prixTotal);
    query.bindValue(":adresse", m_adresse);
    query.bindValue(":ref",     m_reference);

    if (query.exec()) return true;
    m_lastError = query.lastError().text();
    
    // Retry without REFERENCE if missing column error (ORA-00904 or string mention)
    if (m_lastError.contains("REFERENCE", Qt::CaseInsensitive) || m_lastError.contains("00904")) {
        QSqlQuery q2;
        q2.prepare("UPDATE COMMANDE SET ID_CLIENT=:client, QTE=:qte, PRIORITE=:prio, STATUT=:stat, "
                   "DATE_COMMANDE=:dcmd, DATE_LIVRAISON=:dliv, PRIX_TOTAL=:prix, ADRESSE=:adresse "
                   "WHERE ID_COMMANDE=:id");
        q2.bindValue(":id",      m_id);
        q2.bindValue(":client",  finalClientId);
        q2.bindValue(":qte",     m_qte);
        q2.bindValue(":prio",    m_priorite);
        q2.bindValue(":stat",    m_statut);
        q2.bindValue(":dcmd",    m_dateCommande);
        q2.bindValue(":dliv",    m_dateLivraison);
        q2.bindValue(":prix",    m_prixTotal);
        q2.bindValue(":adresse", m_adresse);
        if (q2.exec()) return true;
        m_lastError = q2.lastError().text();
    }
    return false;
}

bool Commande::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM COMMANDE WHERE ID_COMMANDE = :id");
    query.bindValue(":id", id);
    if (query.exec()) return true;
    m_lastError = query.lastError().text();
    return false;
}

QSqlQueryModel *Commande::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    // Joining with CLIENT to show Matricule
    model->setQuery("SELECT c.ID_COMMANDE, cl.MATRICULE, c.QTE, c.PRIORITE, c.STATUT, "
                    "c.DATE_COMMANDE, c.DATE_LIVRAISON, c.PRIX_TOTAL, c.ID_CLIENT, c.ADRESSE, c.REFERENCE "
                    "FROM COMMANDE c "
                    "LEFT JOIN CLIENT cl ON c.ID_CLIENT = cl.ID_CLIENT "
                    "ORDER BY c.ID_COMMANDE");
    
    if (model->lastError().isValid()) {
        QString err = model->lastError().text();
        if (err.contains("REFERENCE", Qt::CaseInsensitive) || err.contains("00904")) {
            // Fallback: Query WITHOUT Reference and use safe aliases
             model->setQuery("SELECT c.ID_COMMANDE, cl.MATRICULE, c.QTE, c.PRIORITE, c.STATUT, "
                            "c.DATE_COMMANDE, c.DATE_LIVRAISON, c.PRIX_TOTAL, c.ID_CLIENT, c.ADRESSE, NULL as \"REFERENCE\" "
                            "FROM COMMANDE c "
                            "LEFT JOIN CLIENT cl ON c.ID_CLIENT = cl.ID_CLIENT "
                            "ORDER BY c.ID_COMMANDE");
        }
        m_lastError = model->lastError().text();
    }
    return model;
}

int Commande::findClientByMatricule(const QString &matricule)
{
    QSqlQuery query;
    // Uses UPPER() to match regardless of how the data was typed into Oracle
    query.prepare("SELECT ID_CLIENT FROM CLIENT WHERE UPPER(MATRICULE) = UPPER(:mat)");
    query.bindValue(":mat", matricule.trimmed());

    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    }
    return -1;
}

QString Commande::getClientMatricule(int idClient)
{
    QSqlQuery query;
    query.prepare("SELECT MATRICULE FROM CLIENT WHERE ID_CLIENT = :id");
    query.bindValue(":id", idClient);
    if (query.exec() && query.next()) {
        return query.value(0).toString();
    }
    return QString();
}

QString Commande::lastError() const
{
    return m_lastError;
}
