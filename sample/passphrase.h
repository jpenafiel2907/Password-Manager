#ifndef PASSPHRASE_H
#define PASSPHRASE_H

#include <QDialog>

namespace Ui {
class Passphrase;
}

class Passphrase : public QDialog
{
    Q_OBJECT

public:
    explicit Passphrase(QWidget *parent = 0);
    bool passphraseValid = false;
    ~Passphrase();

private slots:
    void on_buttonBox_accepted();

    void on_checkBox_clicked();

private:
    Ui::Passphrase *ui;
};

#endif // PASSPHRASE_H
