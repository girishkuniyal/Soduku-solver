/********************************************************************************
** Form generated from reading UI file 'helpmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPMAINWINDOW_H
#define UI_HELPMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helpMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_5;
    QFrame *frame;
    QLabel *label_about;
    QLabel *label_aboutlink;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *helpMainWindow)
    {
        if (helpMainWindow->objectName().isEmpty())
            helpMainWindow->setObjectName(QStringLiteral("helpMainWindow"));
        helpMainWindow->resize(446, 372);
        centralwidget = new QWidget(helpMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 181, 31));
        QFont font;
        font.setFamily(QStringLiteral("Purisa"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 60, 571, 16));
        line->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 40, 59, 14));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 10, 61, 51));
        label_5->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/brain.png);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 80, 411, 241));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        label_about = new QLabel(frame);
        label_about->setObjectName(QStringLiteral("label_about"));
        label_about->setGeometry(QRect(30, 20, 361, 191));
        QFont font1;
        font1.setPointSize(10);
        label_about->setFont(font1);
        label_about->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        label_about->setWordWrap(true);
        label_aboutlink = new QLabel(frame);
        label_aboutlink->setObjectName(QStringLiteral("label_aboutlink"));
        label_aboutlink->setGeometry(QRect(250, 190, 111, 21));
        helpMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(helpMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 446, 19));
        helpMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(helpMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        helpMainWindow->setStatusBar(statusbar);

        retranslateUi(helpMainWindow);

        QMetaObject::connectSlotsByName(helpMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *helpMainWindow)
    {
        helpMainWindow->setWindowTitle(QApplication::translate("helpMainWindow", "Soduku Solver - Help", 0));
        label->setText(QApplication::translate("helpMainWindow", "Soduku Solver", 0));
        label_2->setText(QApplication::translate("helpMainWindow", "V 1.0", 0));
        label_5->setText(QString());
        label_about->setText(QApplication::translate("helpMainWindow", "           Soduku Solver V 1.0 only solves the 6x6 Soduku of easy and medium level. If you need any help read documentation of Soduku Solver. Contribution is always welcome.", 0));
        label_aboutlink->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class helpMainWindow: public Ui_helpMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPMAINWINDOW_H
