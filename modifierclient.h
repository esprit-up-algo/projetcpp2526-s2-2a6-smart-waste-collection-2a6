#ifndef MODIFIERCLIENT_H
#define MODIFIERCLIENT_H

#include <QWidget>

namespace Ui {
class ModifierClient;
}

class ModifierClient : public QWidget
{
    Q_OBJECT

public:
    explicit ModifierClient(QWidget *parent = nullptr);
    ~ModifierClient();

    void setClientData(QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement, int row);
    void on_btn_modifier_clicked();

signals:
    void clientModified(int row, QString matricule, QString nom, QString email, QString bacs, QString score, QString paiement);

private:
    Ui::ModifierClient *ui;
    int currentRow;
};

#endif // MODIFIERCLIENT_H
