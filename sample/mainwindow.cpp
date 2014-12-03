#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "passphrase.h"
#include "sqlite3.h"
#include <QtSql>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setTabEnabled(1,false);
    database.setDatabaseName("database.sqlite");
}

void MainWindow::addNewRecord(bool && newRecord)
{
    ui->comboType->setEnabled(true);
    ui->comboType->setFocus();
    ui->txtUsername->setEnabled(true);
    ui->txtPassword->setEnabled(true);
    ui->btnAdd->setEnabled(false);
    ui->btnSave->setEnabled(true);
    ui->btnClear->setEnabled(true);
    ui->btnCancel->setEnabled(true);
    ui->cbShowPassword->setEnabled(true);
    if (newRecord) {
       updateStatus("Adding new record");
       clearForm();
    } else {
        updateStatus("Editing record");
        NewOrEdit = false;
    }
}

void MainWindow::clearForm()
{
    ui->comboType->setCurrentIndex(-1);
    ui->txtUsername->clear();
    ui->txtPassword->clear();
    ui->txtOtherType->clear();
}

MainWindow::~MainWindow()
{
    if (countResults > 0) {
        delete results;
    }

    if (countModel > 0) {
        delete model;
    }
    delete ui;
}


void MainWindow::on_btnAdd_clicked()
{
   addNewRecord(true);

}

void MainWindow::on_comboType_currentIndexChanged(int index)
{
    QString selectedText = ui->comboType->currentText();
    if (selectedText =="Other") {
        ui->txtOtherType->setEnabled(true);
        ui->txtOtherType->setFocus();
    } else {
        ui->txtOtherType->setEnabled(false);
        ui->txtOtherType->clear();
    }
}

void MainWindow::saveRecord()
{
    if (ui->comboType->currentText()=="" || ui->txtUsername->text()=="") {
        showMsgBox("Account or username field cannot be blank");
    }
    else {
    database.open();
    QString category = ui->comboType->currentText();
    QString  account;
    if (ui->txtOtherType->isEnabled()) {
        if (ui->txtOtherType->text()== ""){
            QMessageBox msgbox;
            msgbox.setText("Please specify other type of account");
            msgbox.setStandardButtons(QMessageBox::Retry | QMessageBox::Cancel);
            int response = msgbox.exec();
            if (response == QMessageBox::Cancel) {
                msgbox.close();
            }
        }
        account = ui->txtOtherType->text();
    } else {
        account = category;
    }
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();
    QSqlQuery query;
    if (NewOrEdit) {
        query.prepare("INSERT into logindetails (type, account, username, password) values (?,?,?,?);");
        query.bindValue(0,category);
        query.bindValue(1,account);
        query.bindValue(2,username);
        query.bindValue(3,password);
        query.exec();
        database.close();
        updateStatus("Record saved");
    } else {
        query.prepare("UPDATE logindetails set type = ?, account = ?, username = ?, password = ? WHERE id = ?;");
        query.bindValue(0,category);
        query.bindValue(1,account);
        query.bindValue(2,username);
        query.bindValue(3,password);
        query.bindValue(4,editID);
        query.exec();
        database.close();
        updateStatus("Record edited");
        NewOrEdit = true;
    }
    ui->comboType->setEnabled(false);
    if (ui->txtOtherType->isEnabled())
        ui->txtOtherType->setEnabled(false);
    ui->txtUsername->setEnabled(false);
    ui->txtPassword->setEnabled(false);
    ui->cbShowPassword->setEnabled(false);
    ui->btnAdd->setEnabled(true);
    ui->btnSave->setEnabled(false);
    ui->btnClear->setEnabled(false);
    ui->btnCancel->setEnabled(false);
    }
}

void MainWindow::deleteRecord(const QString &id)
{
    results = new QSqlQueryModel;
    results->setQuery("Delete from logindetails where id = "+id+";");
    results->setQuery("Select * from logindetails;");
    ui->tableView->setModel(results);
    ui->tableView->show();
    ++countResults;
}

void MainWindow::on_btnClear_clicked()
{
    clearForm();

}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    if (index == 0)
        {
        if (countResults > 0) {
            delete results;
            countResults = 0;
        }

        if (countModel > 0) {
            delete model;
            countModel = 0;
        }
    } else {
        ui->treeWidget->expandAll();
            database.open();
            model  = new QSqlTableModel(this,database);
            model->setTable("logindetails");
            model->select();
            model->setEditStrategy(QSqlTableModel::OnManualSubmit);
            ui->tableView->setModel(model);
            ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tableView->setColumnHidden(0,true);
            ui->tableView->setColumnHidden(1,true);
            ui->tableView->show();
            ++countModel;

    }
}
void MainWindow::on_btnCancel_clicked()
{
    clearForm();
    ui->comboType->setEnabled(false);
    ui->txtUsername->setEnabled(false);
    ui->txtPassword->setEnabled(false);
    ui->btnAdd->setEnabled(true);
    ui->btnSave->setEnabled(false);
    ui->btnClear->setEnabled(false);
    ui->btnCancel->setEnabled(false);
    ui->cbShowPassword->setEnabled(false);
    ui->cbShowPassword->setChecked(false);
    updateStatus("Idle");
}

void MainWindow::on_btnSave_clicked()
{
    saveRecord();
}

void MainWindow::updateStatus(const char * msg)
{
    ui->lblStatus->setText(msg);
}

void MainWindow::showMsgBox(const QString &msg)
{
    QMessageBox msgbox;
    msgbox.setWindowTitle("Error");
    msgbox.setFixedSize(msgbox.size());
    msgbox.setText(msg);
    msgbox.setIcon(QMessageBox::Critical);
    msgbox.setStandardButtons(QMessageBox::Ok);
    msgbox.setDefaultButton(QMessageBox::Ok);
    msgbox.exec();
}

void MainWindow::on_cbShowPassword_clicked()
{
    if (ui->cbShowPassword->isChecked()) {
        ui->txtPassword->setEchoMode(QLineEdit::Normal);
    }
    else {
        ui->txtPassword->setEchoMode(QLineEdit::Password);
    }

}

void MainWindow::on_pushButton_clicked()
{
    if (countResults >0 ) {
        delete results;
    }
    QString searchItem = "%"+ui->txtSearch->text()+"%";
    results = new QSqlQueryModel;
    results->setQuery("Select * from logindetails where type like '"+searchItem+"' OR account like '" +searchItem+"' OR username like '"+searchItem+"';");
    ui->tableView->setModel(results);
    ui->tableView->show();
    ++countResults;

}

void MainWindow::on_treeWidget_itemSelectionChanged()
{
    QModelIndex index = ui->treeWidget->currentIndex();
    QString searchItem = ui->treeWidget->model()->data(index).toString();
    if (searchItem == "All") {
         model->setTable("logindetails");
         model->select();
    } else {
        model->setTable("logindetails");
        model->setFilter("type = '" +searchItem+"'");
        model->select();
    }
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setModel(model);
    ui->tableView->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QModelIndex index = ui->tableView->model()->index(ui->tableView->currentIndex().row(),0);
    QString deleteItem = ui->tableView->model()->data(index).toString();
    if (deleteItem =="") {
        showMsgBox("Please select an item to delete");
    } else {
        deleteRecord(deleteItem);
    }
}

void MainWindow::on_pushButton_3_clicked()
{

    QModelIndex index = ui->tableView->model()->index(ui->tableView->currentIndex().row(),0);
    editID = ui->tableView->model()->data(index).toInt();
    if (editID ==NULL) {
        showMsgBox("Please select an item to edit");
    } else {
    clearForm();
    index  = ui->tableView->model()->index(ui->tableView->currentIndex().row(),1);

    if (ui->tableView->model()->data(index).toString()!="Other") {
        ui->comboType->setCurrentText(ui->tableView->model()->data(index).toString());
    } else {
        ui->comboType->setCurrentText(ui->tableView->model()->data(index).toString());
        index  = ui->tableView->model()->index(ui->tableView->currentIndex().row(),2);
        ui->txtOtherType->setText(ui->tableView->model()->data(index).toString());
    }

    index  = ui->tableView->model()->index(ui->tableView->currentIndex().row(),3);
    ui->txtUsername->setText(ui->tableView->model()->data(index).toString());
    index  = ui->tableView->model()->index(ui->tableView->currentIndex().row(),4);
    ui->txtPassword->setText(ui->tableView->model()->data(index).toString());
    ui->tabWidget->setCurrentIndex(0);
    addNewRecord(false);
    }
}

void MainWindow::on_txtSearch_returnPressed()
{
    if (countResults >0 ) {
        delete results;
    }
    QString searchItem = "%"+ui->txtSearch->text()+"%";
    results = new QSqlQueryModel;
    results->setQuery("Select * from logindetails where type like '"+searchItem+"' OR account like '" +searchItem+"' OR username like '"+searchItem+"';");
    ui->tableView->setModel(results);
    ui->tableView->show();
    ++countResults;
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(1,false);
    ui->btnViewVault->setText("Open Vault");
    vaultLocked = true;

    if (countResults > 0) {
        delete results;
        countResults = 0;
    }

    if (countModel > 0) {
        delete model;
        countModel = 0;
    }
    database.close();
}

void MainWindow::on_btnViewVault_clicked()
{
    if (database.isOpen()) {
        database.close();
    }
    if (vaultLocked) {

    Passphrase pass;
    pass.show();
    pass.setFixedSize(pass.size());
    while (true) {
        int status;
        status = pass.exec();
        if (status==QDialog::Rejected) {
              break;
        }
        if (status==::QDialog::Accepted && pass.passphraseValid==true) {
             ui->tabWidget->setTabEnabled(1,true);
             ui->tabWidget->setCurrentIndex(1);
             ui->treeWidget->expandAll();
             database.open();
             model  = new QSqlTableModel(this,database);
             model->setTable("logindetails");
             model->select();
             model->setEditStrategy(QSqlTableModel::OnManualSubmit);
             ui->tableView->setModel(model);
             ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
             ui->tableView->setColumnHidden(0,true);
             ui->tableView->setColumnHidden(1,true);
             ui->tableView->show();
             ++countModel;
             vaultLocked = false;
             ui->btnViewVault->setText("Lock vault");
             break;
         }
        else {
            showMsgBox("Invalid Passphrase");

        }
    }
    }
    else {
        ui->tabWidget->setTabEnabled(1,false);
        vaultLocked = true;
        ui->btnViewVault->setText("Open Vault");
        database.close();
    }
}
