#ifndef AJOUTERCLIENT_H
#define AJOUTERCLIENT_H

#include <QWidget>

namespace Ui {
class AjouterClient;
}

class AjouterClient : public QWidget
{
    Q_OBJECT

public:
    explicit AjouterClient(QWidget *parent = nullptr);
    ~AjouterClient();

signals:
    void clientAdded(QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement);

private:
    Ui::AjouterClient *ui;
};

#endif // AJOUTERCLIENT_H
