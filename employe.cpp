#include "employe.h"
#include <QSqlError>
#include <QVariant>

namespace {
bool isMissingPhotoColumnError(const QString &errorText)
{
    const QString upper = errorText.toUpper();
    return upper.contains("ORA-00904")
        || upper.contains("INVALID IDENTIFIER")
        || upper.contains("NO SUCH COLUMN")
        || upper.contains("UNKNOWN COLUMN");
}

void bindPhotoValue(QSqlQuery &query, const QByteArray &photo)
{
    if (photo.isEmpty()) {
        query.bindValue(":photo", QVariant());
    } else {
        query.bindValue(":photo", photo);
    }
}
}

Employe::Employe()
{
    id_emp = 0;
}

Employe::Employe(int id_emp, QString matricule, QString cin, QString nom,
                 QString email, QString specialite, QString disponibilite,
                 const QByteArray &photo)
{
    this->id_emp = id_emp;
    this->matricule = matricule;
    this->cin = cin;
    this->nom = nom;
    this->email = email;
    this->specialite = specialite;
    this->disponibilite = disponibilite;
    this->photo = photo;
}


int Employe::getIdEmp() const { return id_emp; }
QString Employe::getMatricule() const { return matricule; }
QString Employe::getCin() const { return cin; }
QString Employe::getNom() const { return nom; }
QString Employe::getEmail() const { return email; }
QString Employe::getSpecialite() const { return specialite; }
QString Employe::getDisponibilite() const { return disponibilite; }
QByteArray Employe::getPhoto() const { return photo; }


void Employe::setIdEmp(int value) { id_emp = value; }
void Employe::setMatricule(const QString &value) { matricule = value; }
void Employe::setCin(const QString &value) { cin = value; }
void Employe::setNom(const QString &value) { nom = value; }
void Employe::setEmail(const QString &value) { email = value; }
void Employe::setSpecialite(const QString &value) { specialite = value; }
void Employe::setDisponibilite(const QString &value) { disponibilite = value; }
void Employe::setPhoto(const QByteArray &value) { photo = value; }


bool Employe::ajouter()
{
    QSqlQuery query;
    if (id_emp > 0) {
        query.prepare(
            "INSERT INTO EMPLOYE (id_emp, matricule, cin, nom, email, specialite, disponibilite, photo) "
            "VALUES (:id_emp, :matricule, :cin, :nom, :email, :specialite, :disponibilite, :photo)"
            );
        query.bindValue(":id_emp", id_emp);
    } else {
        query.prepare(
            "INSERT INTO EMPLOYE (matricule, cin, nom, email, specialite, disponibilite, photo) "
            "VALUES (:matricule, :cin, :nom, :email, :specialite, :disponibilite, :photo)"
            );
    }
    query.bindValue(":matricule", matricule);
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":email", email);
    query.bindValue(":specialite", specialite);
    query.bindValue(":disponibilite", disponibilite);
    bindPhotoValue(query, photo);

    if (query.exec()) {
        m_lastError.clear();
        return true;
    }

    if (isMissingPhotoColumnError(query.lastError().text())) {
        QSqlQuery fallback;
        if (id_emp > 0) {
            fallback.prepare(
                "INSERT INTO EMPLOYE (id_emp, matricule, cin, nom, email, specialite, disponibilite) "
                "VALUES (:id_emp, :matricule, :cin, :nom, :email, :specialite, :disponibilite)"
                );
            fallback.bindValue(":id_emp", id_emp);
        } else {
            fallback.prepare(
                "INSERT INTO EMPLOYE (matricule, cin, nom, email, specialite, disponibilite) "
                "VALUES (:matricule, :cin, :nom, :email, :specialite, :disponibilite)"
                );
        }
        fallback.bindValue(":matricule", matricule);
        fallback.bindValue(":cin", cin);
        fallback.bindValue(":nom", nom);
        fallback.bindValue(":email", email);
        fallback.bindValue(":specialite", specialite);
        fallback.bindValue(":disponibilite", disponibilite);

        const bool ok = fallback.exec();
        m_lastError = ok ? QString() : fallback.lastError().text();
        return ok;
    }

    m_lastError = query.lastError().text();
    return false;
}


bool Employe::supprimer(int id_emp)
{
    QSqlQuery query;
    query.prepare("DELETE FROM EMPLOYE WHERE id_emp = :id_emp");
    query.bindValue(":id_emp", id_emp);
    const bool ok = query.exec();
    m_lastError = ok ? QString() : query.lastError().text();
    return ok;
}


bool Employe::modifier()
{
    QSqlQuery query;
    query.prepare(
        "UPDATE EMPLOYE SET "
        "matricule=:matricule, cin=:cin, nom=:nom, email=:email, "
        "specialite=:specialite, disponibilite=:disponibilite, photo=:photo "
        "WHERE id_emp=:id_emp"
        );

    query.bindValue(":id_emp", id_emp);
    query.bindValue(":matricule", matricule);
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":email", email);
    query.bindValue(":specialite", specialite);
    query.bindValue(":disponibilite", disponibilite);
    bindPhotoValue(query, photo);

    if (query.exec()) {
        m_lastError.clear();
        return true;
    }

    if (isMissingPhotoColumnError(query.lastError().text())) {
        QSqlQuery fallback;
        fallback.prepare(
            "UPDATE EMPLOYE SET "
            "matricule=:matricule, cin=:cin, nom=:nom, email=:email, "
            "specialite=:specialite, disponibilite=:disponibilite "
            "WHERE id_emp=:id_emp"
            );
        fallback.bindValue(":id_emp", id_emp);
        fallback.bindValue(":matricule", matricule);
        fallback.bindValue(":cin", cin);
        fallback.bindValue(":nom", nom);
        fallback.bindValue(":email", email);
        fallback.bindValue(":specialite", specialite);
        fallback.bindValue(":disponibilite", disponibilite);

        const bool ok = fallback.exec();
        m_lastError = ok ? QString() : fallback.lastError().text();
        return ok;
    }

    m_lastError = query.lastError().text();
    return false;
}

QSqlQueryModel *Employe::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT id_emp, matricule, cin, nom, email, specialite, disponibilite, photo FROM EMPLOYE");
    if (model->lastError().isValid() && isMissingPhotoColumnError(model->lastError().text())) {
        model->setQuery("SELECT id_emp, matricule, cin, nom, email, specialite, disponibilite FROM EMPLOYE");
    }
    m_lastError = model->lastError().isValid() ? model->lastError().text() : QString();
    return model;
}

bool Employe::findIdByMatricule(const QString &matricule, int &id_emp)
{
    id_emp = -1;
    QSqlQuery query;
    query.prepare("SELECT id_emp FROM EMPLOYE WHERE matricule = :matricule");
    query.bindValue(":matricule", matricule);

    if (!query.exec()) {
        m_lastError = query.lastError().text();
        return false;
    }

    if (query.next()) {
        id_emp = query.value(0).toInt();
        m_lastError.clear();
        return true;
    }

    m_lastError = "Employe introuvable.";
    return false;
}

QString Employe::lastError() const
{
    return m_lastError;
}
