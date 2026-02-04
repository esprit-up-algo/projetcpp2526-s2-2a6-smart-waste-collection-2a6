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

private:
    Ui::AjouterClient *ui;
};

#endif // AJOUTERCLIENT_H
