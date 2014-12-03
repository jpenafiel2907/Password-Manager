#-------------------------------------------------
#
# Project created by QtCreator 2014-11-15T17:41:02
#
#-------------------------------------------------

QT       += core gui
CONFIG += C++11
QMAKE_CXXFLAGS_RELEASE += -O2

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    passphrase.cpp
    dialog.cpp

HEADERS  += mainwindow.h \
    sqlite3.h \
    dialog.h \
    passphrase.h

FORMS    += mainwindow.ui \
    dialog.ui \
    passphrase.ui
QT += sql
win32: LIBS += -L$$PWD/../Downloads/sqlite3/sqlite-amalgamation-3080701/Debug/ -lsqlite3

INCLUDEPATH += $$PWD/../Downloads/sqlite3/sqlite-amalgamation-3080701
DEPENDPATH += $$PWD/../Downloads/sqlite3/sqlite-amalgamation-3080701

RESOURCES += \
    ../Desktop/icons/buttonIcons.qrc

