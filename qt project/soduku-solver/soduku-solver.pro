#-------------------------------------------------
#
# Project created by QtCreator 2016-08-30T16:45:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = soduku-solver
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    secmainwindow.cpp \
    alertdialog.cpp \
    successdialog.cpp \
    infodialog.cpp \
    aboutmainwindow.cpp \
    helpmainwindow.cpp

HEADERS  += mainwindow.h \
    secmainwindow.h \
    alertdialog.h \
    successdialog.h \
    infodialog.h \
    aboutmainwindow.h \
    helpmainwindow.h

FORMS    += mainwindow.ui \
    secmainwindow.ui \
    alertdialog.ui \
    successdialog.ui \
    infodialog.ui \
    aboutmainwindow.ui \
    helpmainwindow.ui

RESOURCES += \
    resource.qrc

DISTFILES += \
    ../build-soduku-solver-Desktop_Qt_5_7_0_GCC_64bit-Debug/images/brain.png
