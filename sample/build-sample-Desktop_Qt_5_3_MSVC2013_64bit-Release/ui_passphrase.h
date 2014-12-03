/********************************************************************************
** Form generated from reading UI file 'passphrase.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSPHRASE_H
#define UI_PASSPHRASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Passphrase
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblPassphrase;
    QLineEdit *txtPassphrase;

    void setupUi(QDialog *Passphrase)
    {
        if (Passphrase->objectName().isEmpty())
            Passphrase->setObjectName(QStringLiteral("Passphrase"));
        Passphrase->resize(341, 111);
        buttonBox = new QDialogButtonBox(Passphrase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 70, 161, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBox = new QCheckBox(Passphrase);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 50, 121, 17));
        widget = new QWidget(Passphrase);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 301, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblPassphrase = new QLabel(widget);
        lblPassphrase->setObjectName(QStringLiteral("lblPassphrase"));

        horizontalLayout->addWidget(lblPassphrase);

        txtPassphrase = new QLineEdit(widget);
        txtPassphrase->setObjectName(QStringLiteral("txtPassphrase"));
        txtPassphrase->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(txtPassphrase);


        retranslateUi(Passphrase);
        QObject::connect(buttonBox, SIGNAL(accepted()), Passphrase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Passphrase, SLOT(reject()));

        QMetaObject::connectSlotsByName(Passphrase);
    } // setupUi

    void retranslateUi(QDialog *Passphrase)
    {
        Passphrase->setWindowTitle(QApplication::translate("Passphrase", "Enter your passphrase to view vault", 0));
        checkBox->setText(QApplication::translate("Passphrase", "Show Passphrase", 0));
        lblPassphrase->setText(QApplication::translate("Passphrase", "Passphrase:", 0));
    } // retranslateUi

};

namespace Ui {
    class Passphrase: public Ui_Passphrase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSPHRASE_H
