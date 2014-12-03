#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QtSql>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->txtPassphrase1->setFocus();
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_buttonBox_accepted()
{
    if (ui->txtPassphrase1->text()!=ui->txtPassphrase2->text() ||
            ui->txtPassphrase1->text()==NULL) {
        a = false;
        showMsgBox("Passphrases do not match");
    } else {
        try {
            a = true;
            QString passphrase = ui->txtPassphrase1->text();
            newDatabase.setDatabaseName("database.sqlite");
            newDatabase.open();
            QSqlQuery query;
            query.prepare("CREATE TABLE logindetails (id integer primary key asc, type varchar(50), account varchar (50), username varchar(50), password varchar(30));");
            query.exec();
            query.prepare("CREATE TABLE user (passphrase varchar(50));");
            query.exec();
            query.prepare("INSERT into user (passphrase) values (?);");
            query.bindValue(0,passphrase);
            query.exec();
            newDatabase.close();

            } catch (QException &exception) {
                showMsgBox("Error creating database");
            }
    }
}
void Dialog::on_buttonBox_rejected()
{
    this->close();

}

void Dialog::on_cbShowPassphrase_clicked()
{
    if (ui->cbShowPassphrase->isChecked())
    {
        ui->txtPassphrase1->setEchoMode(QLineEdit::Normal);
        ui->txtPassphrase2->setEchoMode(QLineEdit::Normal);
    }
    else {

        ui->txtPassphrase1->setEchoMode(QLineEdit::Password);
        ui->txtPassphrase2->setEchoMode(QLineEdit::Password);
    }
}

void Dialog::showMsgBox(const char * msg)
{
    QMessageBox msgbox;
    msgbox.setFixedSize(msgbox.size());
    msgbox.setWindowTitle("Error");
    msgbox.setIcon(QMessageBox::Critical);
    msgbox.setText(msg);
    msgbox.setStandardButtons(QMessageBox::Ok);
    msgbox.setDefaultButton(QMessageBox::Ok);
    msgbox.exec();
}
