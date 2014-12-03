#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QTreeWidgetItem>
#include <QMessageBox>
#include <memory>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void addNewRecord(bool && newRecord);
    void clearForm();
    void saveRecord();
    void deleteRecord (const QString  &id);
    void showMsgBox(const QString &msg);
    void updateStatus(const char *msg);
    int countModel = 0;
    int countResults = 0;
    bool NewOrEdit = true;
    bool vaultLocked = true;
    int editID;
    ~MainWindow();

private slots:

    void on_btnAdd_clicked();
    void on_comboType_currentIndexChanged(int index);
    void on_btnClear_clicked();
    void on_tabWidget_tabBarClicked(int index);
    void on_btnCancel_clicked();
    void on_btnSave_clicked();
    void on_cbShowPassword_clicked();
    void on_pushButton_clicked();
    void on_treeWidget_itemSelectionChanged();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_txtSearch_returnPressed();
    void on_pushButton_4_clicked();
    void on_btnViewVault_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    QSqlTableModel  * model;
    QSqlQueryModel * results;


};

#endif // MAINWINDOW_H
