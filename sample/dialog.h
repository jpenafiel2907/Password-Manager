#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT


public:
    explicit Dialog(QWidget *parent = 0);
    bool a = true;
    void showMsgBox(const char * msg);
    ~Dialog();

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

    void on_cbShowPassphrase_clicked();

private:
    Ui::Dialog *ui;
    QSqlDatabase newDatabase = QSqlDatabase::addDatabase("QSQLITE");
};

#endif // DIALOG_H
