/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lblAccount;
    QComboBox *comboType;
    QLabel *label_7;
    QLineEdit *txtOtherType;
    QLabel *lblUsername;
    QLineEdit *txtUsername;
    QLabel *lblPassword;
    QLineEdit *txtPassword;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QPushButton *btnCancel;
    QCheckBox *cbShowPassword;
    QLabel *lblStatusTitle;
    QLabel *lblStatus;
    QPushButton *btnViewVault;
    QWidget *tab_6;
    QTableView *tableView;
    QTreeWidget *treeWidget;
    QLineEdit *txtSearch;
    QPushButton *pushButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(469, 334);
        MainWindow->setMaximumSize(QSize(15000000, 15000000));
        MainWindow->setInputMethodHints(Qt::ImhHiddenText);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 0, 451, 271));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        layoutWidget = new QWidget(tab_5);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 80, 410, 74));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblAccount = new QLabel(layoutWidget);
        lblAccount->setObjectName(QStringLiteral("lblAccount"));

        gridLayout->addWidget(lblAccount, 0, 0, 1, 1);

        comboType = new QComboBox(layoutWidget);
        comboType->setObjectName(QStringLiteral("comboType"));
        comboType->setEnabled(false);
        comboType->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(comboType, 0, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        txtOtherType = new QLineEdit(layoutWidget);
        txtOtherType->setObjectName(QStringLiteral("txtOtherType"));
        txtOtherType->setEnabled(false);

        gridLayout->addWidget(txtOtherType, 0, 3, 1, 1);

        lblUsername = new QLabel(layoutWidget);
        lblUsername->setObjectName(QStringLiteral("lblUsername"));

        gridLayout->addWidget(lblUsername, 1, 0, 1, 1);

        txtUsername = new QLineEdit(layoutWidget);
        txtUsername->setObjectName(QStringLiteral("txtUsername"));
        txtUsername->setEnabled(false);
        txtUsername->setMinimumSize(QSize(317, 0));
        txtUsername->setInputMethodHints(Qt::ImhDialableCharactersOnly|Qt::ImhDigitsOnly|Qt::ImhEmailCharactersOnly|Qt::ImhExclusiveInputMask|Qt::ImhFormattedNumbersOnly|Qt::ImhHiddenText|Qt::ImhLatinOnly|Qt::ImhLowercaseOnly|Qt::ImhUppercaseOnly|Qt::ImhUrlCharactersOnly);

        gridLayout->addWidget(txtUsername, 1, 1, 1, 3);

        lblPassword = new QLabel(layoutWidget);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));

        gridLayout->addWidget(lblPassword, 2, 0, 1, 1);

        txtPassword = new QLineEdit(layoutWidget);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setEnabled(false);
        txtPassword->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(txtPassword, 2, 1, 1, 3);

        layoutWidget1 = new QWidget(tab_5);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 125, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(layoutWidget1);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setMinimumSize(QSize(30, 30));
        btnAdd->setMaximumSize(QSize(28, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/add-1-icon1.png"), QSize(), QIcon::Normal, QIcon::On);
        btnAdd->setIcon(icon);
        btnAdd->setIconSize(QSize(28, 28));
        btnAdd->setAutoRepeat(true);
        btnAdd->setAutoExclusive(true);

        horizontalLayout->addWidget(btnAdd);

        btnSave = new QPushButton(layoutWidget1);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setEnabled(false);
        btnSave->setMinimumSize(QSize(30, 30));
        btnSave->setMaximumSize(QSize(28, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Save-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        btnSave->setIcon(icon1);
        btnSave->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(btnSave);

        btnClear = new QPushButton(layoutWidget1);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setEnabled(false);
        btnClear->setMinimumSize(QSize(30, 30));
        btnClear->setMaximumSize(QSize(28, 28));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/clear.png"), QSize(), QIcon::Normal, QIcon::On);
        btnClear->setIcon(icon2);
        btnClear->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(btnClear);

        btnCancel = new QPushButton(layoutWidget1);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);
        btnCancel->setMinimumSize(QSize(30, 30));
        btnCancel->setMaximumSize(QSize(28, 28));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/delete.jpg"), QSize(), QIcon::Normal, QIcon::On);
        btnCancel->setIcon(icon3);
        btnCancel->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(btnCancel);

        cbShowPassword = new QCheckBox(tab_5);
        cbShowPassword->setObjectName(QStringLiteral("cbShowPassword"));
        cbShowPassword->setEnabled(false);
        cbShowPassword->setGeometry(QRect(320, 160, 101, 20));
        lblStatusTitle = new QLabel(tab_5);
        lblStatusTitle->setObjectName(QStringLiteral("lblStatusTitle"));
        lblStatusTitle->setGeometry(QRect(10, 160, 81, 16));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lblStatusTitle->setPalette(palette);
        lblStatus = new QLabel(tab_5);
        lblStatus->setObjectName(QStringLiteral("lblStatus"));
        lblStatus->setGeometry(QRect(50, 160, 151, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lblStatus->setPalette(palette1);
        QFont font;
        font.setItalic(true);
        lblStatus->setFont(font);
        btnViewVault = new QPushButton(tab_5);
        btnViewVault->setObjectName(QStringLiteral("btnViewVault"));
        btnViewVault->setGeometry(QRect(150, 10, 91, 31));
        QPalette palette2;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(255, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        btnViewVault->setPalette(palette2);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        btnViewVault->setFont(font1);
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableView = new QTableView(tab_6);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(125, 30, 321, 211));
        tableView->setFrameShadow(QFrame::Raised);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->verticalHeader()->setVisible(false);
        treeWidget = new QTreeWidget(tab_6);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 121, 241));
        treeWidget->setFrameShape(QFrame::Panel);
        treeWidget->setFrameShadow(QFrame::Plain);
        treeWidget->setIndentation(5);
        treeWidget->setHeaderHidden(true);
        txtSearch = new QLineEdit(tab_6);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));
        txtSearch->setGeometry(QRect(280, 2, 133, 28));
        txtSearch->setMinimumSize(QSize(28, 28));
        txtSearch->setMaximumSize(QSize(16777215, 16777215));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 2, 28, 28));
        pushButton->setMinimumSize(QSize(28, 28));
        pushButton->setMaximumSize(QSize(28, 28));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/search1.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(28, 28));
        layoutWidget2 = new QWidget(tab_6);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(130, 0, 140, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(28, 28));
        pushButton_3->setMaximumSize(QSize(28, 28));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/edit.jpg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(28, 28));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(28, 28));
        pushButton_2->setMaximumSize(QSize(28, 28));
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(28, 28));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(layoutWidget2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(70, 28));
        pushButton_4->setMaximumSize(QSize(70, 28));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_4->setPalette(palette3);
        pushButton_4->setFont(font1);
        pushButton_4->setIconSize(QSize(28, 28));

        horizontalLayout_2->addWidget(pushButton_4);

        tabWidget->addTab(tab_6, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 469, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        comboType->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Password Drawer", 0));
        lblAccount->setText(QApplication::translate("MainWindow", "Account:", 0));
        comboType->clear();
        comboType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Android Play", 0)
         << QApplication::translate("MainWindow", "Apple Store", 0)
         << QApplication::translate("MainWindow", "Facebook", 0)
         << QApplication::translate("MainWindow", "Gmail", 0)
         << QApplication::translate("MainWindow", "Live", 0)
         << QApplication::translate("MainWindow", "Origin", 0)
         << QApplication::translate("MainWindow", "Playstation", 0)
         << QApplication::translate("MainWindow", "Steam", 0)
         << QApplication::translate("MainWindow", "Skype", 0)
         << QApplication::translate("MainWindow", "Twitter", 0)
         << QApplication::translate("MainWindow", "Windows Login", 0)
         << QApplication::translate("MainWindow", "Xbox Live", 0)
         << QApplication::translate("MainWindow", "Yahoo! Mail", 0)
         << QApplication::translate("MainWindow", "Other", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboType->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Select account type</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("MainWindow", "If Other, please specify", 0));
        lblUsername->setText(QApplication::translate("MainWindow", "Username", 0));
        lblPassword->setText(QApplication::translate("MainWindow", "Password", 0));
        txtPassword->setInputMask(QString());
#ifndef QT_NO_TOOLTIP
        btnAdd->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Add new record</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnAdd->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save record</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnClear->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Clear form</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnClear->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnCancel->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Cancel</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnCancel->setText(QString());
        cbShowPassword->setText(QApplication::translate("MainWindow", "Show Password", 0));
        lblStatusTitle->setText(QApplication::translate("MainWindow", "Status:", 0));
        lblStatus->setText(QApplication::translate("MainWindow", "Idle", 0));
#ifndef QT_NO_TOOLTIP
        btnViewVault->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Lock/View Vault</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnViewVault->setText(QApplication::translate("MainWindow", "Open Vault", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Details", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "All", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "All", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Android Play", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Apple Play", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Gmail", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Facebook", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Live", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem1->child(5);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Origin", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem1->child(6);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "Playstation", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem1->child(7);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Skype", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem1->child(8);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "Steam", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem1->child(9);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "Twitter", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem1->child(10);
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "Xbox Live", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem1->child(11);
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "Windows Login", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem1->child(12);
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "Yahoo! Mail", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem1->child(13);
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "Other", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Search</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Edit record</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Delete record</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Lock Vault</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QApplication::translate("MainWindow", "Lock Vault", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Vault", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
