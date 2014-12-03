#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QSql>
#include <sys/stat.h>
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    struct stat buf;
    if (stat("database.sqlite",&buf)== -1) {
     Dialog b;
      b.show();
      b.setFixedSize(b.size());
        while (true) {
           int status;
           status = b.exec();
           if (status== QDialog::Rejected) {
               return 0;
           }
           if (status==QDialog::Accepted && b.a==true) {
               break;
           }
        }
        MainWindow w;
        w.show();
        return a.exec();
    }
    else {
    MainWindow w;
    w.show();
    return a.exec();
    }
}

