/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *txtPassphrase1;
    QLineEdit *txtPassphrase2;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *cbShowPassphrase;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(315, 142);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-100, 90, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        txtPassphrase1 = new QLineEdit(Dialog);
        txtPassphrase1->setObjectName(QStringLiteral("txtPassphrase1"));
        txtPassphrase1->setGeometry(QRect(140, 30, 151, 20));
        txtPassphrase1->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        txtPassphrase1->setEchoMode(QLineEdit::Password);
        txtPassphrase2 = new QLineEdit(Dialog);
        txtPassphrase2->setObjectName(QStringLiteral("txtPassphrase2"));
        txtPassphrase2->setGeometry(QRect(140, 60, 151, 20));
        txtPassphrase2->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        txtPassphrase2->setInputMask(QStringLiteral(""));
        txtPassphrase2->setEchoMode(QLineEdit::Password);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 30, 111, 20));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(5, 60, 131, 20));
        cbShowPassphrase = new QCheckBox(Dialog);
        cbShowPassphrase->setObjectName(QStringLiteral("cbShowPassphrase"));
        cbShowPassphrase->setGeometry(QRect(10, 120, 111, 17));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Passphrase for Vault Access", 0));
        label->setText(QApplication::translate("Dialog", "Enter New Passphrase", 0));
        label_2->setText(QApplication::translate("Dialog", "Re-enter New Passphrase", 0));
        cbShowPassphrase->setText(QApplication::translate("Dialog", "Show Passphrase", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
