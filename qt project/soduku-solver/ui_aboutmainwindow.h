/********************************************************************************
** Form generated from reading UI file 'aboutmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTMAINWINDOW_H
#define UI_ABOUTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QLabel *label_5;
    QLabel *label_2;
    QFrame *frame;
    QLabel *label_about;
    QLabel *label_aboutlink;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AboutMainWindow)
    {
        if (AboutMainWindow->objectName().isEmpty())
            AboutMainWindow->setObjectName(QString::fromUtf8("AboutMainWindow"));
        AboutMainWindow->resize(466, 369);
        centralwidget = new QWidget(AboutMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Purisa"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 60, 571, 16));
        line->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 10, 61, 51));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 40, 59, 14));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 80, 411, 241));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        label_about = new QLabel(frame);
        label_about->setObjectName(QString::fromUtf8("label_about"));
        label_about->setGeometry(QRect(30, 20, 361, 191));
        QFont font1;
        font1.setPointSize(10);
        label_about->setFont(font1);
        label_about->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        label_about->setWordWrap(true);
        label_aboutlink = new QLabel(frame);
        label_aboutlink->setObjectName(QString::fromUtf8("label_aboutlink"));
        label_aboutlink->setGeometry(QRect(290, 190, 111, 21));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 170, 111, 16));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 190, 111, 16));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 150, 81, 16));
        AboutMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AboutMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 466, 19));
        AboutMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AboutMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AboutMainWindow->setStatusBar(statusbar);

        retranslateUi(AboutMainWindow);

        QMetaObject::connectSlotsByName(AboutMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AboutMainWindow)
    {
        AboutMainWindow->setWindowTitle(QApplication::translate("AboutMainWindow", "Soduku Solver - About", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutMainWindow", "Soduku Solver", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_2->setText(QApplication::translate("AboutMainWindow", "V 1.0", 0, QApplication::UnicodeUTF8));
        label_about->setText(QApplication::translate("AboutMainWindow", "           Soduku Solver V 1.0 is Open Source project which solves the 6x6 Soduku problem of easy and medium level. It is a open source project which is available in github repository and This project welcome each contributer which helps to make this project better.", 0, QApplication::UnicodeUTF8));
        label_aboutlink->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_6->setText(QApplication::translate("AboutMainWindow", "Icon Credit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutMainWindow: public Ui_AboutMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTMAINWINDOW_H
