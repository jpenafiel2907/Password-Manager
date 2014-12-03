#include "passphrase.h"
#include "ui_passphrase.h"
#include <QtSql>
#include <QMessageBox>

Passphrase::Passphrase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Passphrase)
{
    ui->setupUi(this);
    ui->txtPassphrase->setFocus();
}

Passphrase::~Passphrase()
{
    delete ui;
}

void Passphrase::on_buttonBox_accepted()
{
    QSqlDatabase databaseOne = QSqlDatabase::addDatabase("QSQLITE");
    databaseOne.setDatabaseName("database.sqlite");
    if (!(databaseOne.isOpen())) {
        databaseOne.open();
    }
    QSqlQuery query;
    query.prepare("Select * from user where passphrase = ?");
    query.bindValue(0,ui->txtPassphrase->text());
    query.exec();
    if (query.next()) {
         passphraseValid = true;
    }

}
void Passphrase::on_checkBox_clicked()
{
    if (ui->checkBox->isChecked()) {
        ui->txtPassphrase->setEchoMode(QLineEdit::Normal);
    }
    else {
        ui->txtPassphrase->setEchoMode(QLineEdit::Password);
    }
}
