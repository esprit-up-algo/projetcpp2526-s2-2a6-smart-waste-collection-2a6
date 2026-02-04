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

private:
    Ui::ModifierClient *ui;
};

#endif // MODIFIERCLIENT_H
