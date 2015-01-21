#-------------------------------------------------
#
# Project created by QtCreator 2015-01-21T05:17:52
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = motorUI2015
TEMPLATE = app

RC_ICONS += me.ico

SOURCES += main.cpp\
        motorui2015.cpp \
    settingdialog.cpp

HEADERS  += motorui2015.h \
    settingdialog.h

FORMS    += motorui2015.ui \
    settingdialog.ui


