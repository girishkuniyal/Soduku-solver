/********************************************************************************
** Form generated from reading UI file 'secmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECMAINWINDOW_H
#define UI_SECMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line;
    QPushButton *pushButton;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_27;
    QLineEdit *lineEdit_28;
    QLineEdit *lineEdit_29;
    QLineEdit *lineEdit_30;
    QLineEdit *lineEdit_31;
    QLineEdit *lineEdit_32;
    QLineEdit *lineEdit_33;
    QLineEdit *lineEdit_34;
    QLineEdit *lineEdit_35;
    QLineEdit *lineEdit_36;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *secMainWindow)
    {
        if (secMainWindow->objectName().isEmpty())
            secMainWindow->setObjectName(QStringLiteral("secMainWindow"));
        secMainWindow->resize(565, 498);
        QFont font;
        font.setFamily(QStringLiteral("Garuda"));
        font.setBold(true);
        font.setWeight(75);
        secMainWindow->setFont(font);
        centralwidget = new QWidget(secMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 181, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Purisa"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 10, 61, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 40, 59, 14));
        QFont font2;
        font2.setPointSize(8);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 80, 391, 31));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 60, 571, 16));
        line->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 410, 191, 31));
        QFont font4;
        font4.setPointSize(12);
        pushButton->setFont(font4);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(90, 120, 371, 271));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        frame->setPalette(palette);
        frame->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 10, 31, 31));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        lineEdit->setFont(font5);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 50, 31, 31));
        lineEdit_2->setFont(font5);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 100, 31, 31));
        lineEdit_3->setFont(font5);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 140, 31, 31));
        lineEdit_4->setFont(font5);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(20, 190, 31, 31));
        lineEdit_5->setFont(font5);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(20, 230, 31, 31));
        lineEdit_6->setFont(font5);
        lineEdit_6->setAlignment(Qt::AlignCenter);
        lineEdit_7 = new QLineEdit(frame);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(80, 10, 31, 31));
        lineEdit_7->setFont(font5);
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_8 = new QLineEdit(frame);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(80, 50, 31, 31));
        lineEdit_8->setFont(font5);
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_9 = new QLineEdit(frame);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(80, 100, 31, 31));
        lineEdit_9->setFont(font5);
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit_10 = new QLineEdit(frame);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(80, 140, 31, 31));
        lineEdit_10->setFont(font5);
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_11 = new QLineEdit(frame);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(80, 190, 31, 31));
        lineEdit_11->setFont(font5);
        lineEdit_11->setAlignment(Qt::AlignCenter);
        lineEdit_12 = new QLineEdit(frame);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(80, 230, 31, 31));
        lineEdit_12->setFont(font5);
        lineEdit_12->setAlignment(Qt::AlignCenter);
        lineEdit_13 = new QLineEdit(frame);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(140, 10, 31, 31));
        lineEdit_13->setFont(font5);
        lineEdit_13->setAlignment(Qt::AlignCenter);
        lineEdit_14 = new QLineEdit(frame);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(140, 50, 31, 31));
        lineEdit_14->setFont(font5);
        lineEdit_14->setAlignment(Qt::AlignCenter);
        lineEdit_15 = new QLineEdit(frame);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(140, 100, 31, 31));
        lineEdit_15->setFont(font5);
        lineEdit_15->setAlignment(Qt::AlignCenter);
        lineEdit_16 = new QLineEdit(frame);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(140, 140, 31, 31));
        lineEdit_16->setFont(font5);
        lineEdit_16->setAlignment(Qt::AlignCenter);
        lineEdit_17 = new QLineEdit(frame);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(140, 190, 31, 31));
        lineEdit_17->setFont(font5);
        lineEdit_17->setAlignment(Qt::AlignCenter);
        lineEdit_18 = new QLineEdit(frame);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(140, 230, 31, 31));
        lineEdit_18->setFont(font5);
        lineEdit_18->setAlignment(Qt::AlignCenter);
        lineEdit_19 = new QLineEdit(frame);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(200, 10, 31, 31));
        lineEdit_19->setFont(font5);
        lineEdit_19->setAlignment(Qt::AlignCenter);
        lineEdit_20 = new QLineEdit(frame);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(200, 50, 31, 31));
        lineEdit_20->setFont(font5);
        lineEdit_20->setAlignment(Qt::AlignCenter);
        lineEdit_21 = new QLineEdit(frame);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(200, 100, 31, 31));
        lineEdit_21->setFont(font5);
        lineEdit_21->setAlignment(Qt::AlignCenter);
        lineEdit_22 = new QLineEdit(frame);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(200, 140, 31, 31));
        lineEdit_22->setFont(font5);
        lineEdit_22->setAlignment(Qt::AlignCenter);
        lineEdit_23 = new QLineEdit(frame);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(200, 190, 31, 31));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        lineEdit_23->setFont(font6);
        lineEdit_23->setAlignment(Qt::AlignCenter);
        lineEdit_24 = new QLineEdit(frame);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(200, 230, 31, 31));
        lineEdit_24->setFont(font5);
        lineEdit_24->setAlignment(Qt::AlignCenter);
        lineEdit_25 = new QLineEdit(frame);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(260, 10, 31, 31));
        lineEdit_25->setFont(font5);
        lineEdit_25->setAlignment(Qt::AlignCenter);
        lineEdit_26 = new QLineEdit(frame);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));
        lineEdit_26->setGeometry(QRect(260, 50, 31, 31));
        lineEdit_26->setFont(font5);
        lineEdit_26->setAlignment(Qt::AlignCenter);
        lineEdit_27 = new QLineEdit(frame);
        lineEdit_27->setObjectName(QStringLiteral("lineEdit_27"));
        lineEdit_27->setGeometry(QRect(260, 100, 31, 31));
        lineEdit_27->setFont(font5);
        lineEdit_27->setAlignment(Qt::AlignCenter);
        lineEdit_28 = new QLineEdit(frame);
        lineEdit_28->setObjectName(QStringLiteral("lineEdit_28"));
        lineEdit_28->setGeometry(QRect(260, 140, 31, 31));
        lineEdit_28->setFont(font5);
        lineEdit_28->setAlignment(Qt::AlignCenter);
        lineEdit_29 = new QLineEdit(frame);
        lineEdit_29->setObjectName(QStringLiteral("lineEdit_29"));
        lineEdit_29->setGeometry(QRect(260, 190, 31, 31));
        lineEdit_29->setFont(font5);
        lineEdit_29->setAlignment(Qt::AlignCenter);
        lineEdit_30 = new QLineEdit(frame);
        lineEdit_30->setObjectName(QStringLiteral("lineEdit_30"));
        lineEdit_30->setGeometry(QRect(260, 230, 31, 31));
        lineEdit_30->setFont(font5);
        lineEdit_30->setAlignment(Qt::AlignCenter);
        lineEdit_31 = new QLineEdit(frame);
        lineEdit_31->setObjectName(QStringLiteral("lineEdit_31"));
        lineEdit_31->setGeometry(QRect(320, 10, 31, 31));
        lineEdit_31->setFont(font5);
        lineEdit_31->setAlignment(Qt::AlignCenter);
        lineEdit_32 = new QLineEdit(frame);
        lineEdit_32->setObjectName(QStringLiteral("lineEdit_32"));
        lineEdit_32->setGeometry(QRect(320, 50, 31, 31));
        lineEdit_32->setFont(font5);
        lineEdit_32->setAlignment(Qt::AlignCenter);
        lineEdit_33 = new QLineEdit(frame);
        lineEdit_33->setObjectName(QStringLiteral("lineEdit_33"));
        lineEdit_33->setGeometry(QRect(320, 100, 31, 31));
        lineEdit_33->setFont(font5);
        lineEdit_33->setAlignment(Qt::AlignCenter);
        lineEdit_34 = new QLineEdit(frame);
        lineEdit_34->setObjectName(QStringLiteral("lineEdit_34"));
        lineEdit_34->setGeometry(QRect(320, 140, 31, 31));
        lineEdit_34->setFont(font5);
        lineEdit_34->setAlignment(Qt::AlignCenter);
        lineEdit_35 = new QLineEdit(frame);
        lineEdit_35->setObjectName(QStringLiteral("lineEdit_35"));
        lineEdit_35->setGeometry(QRect(320, 190, 31, 31));
        QFont font7;
        font7.setFamily(QStringLiteral("Sans Serif"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        lineEdit_35->setFont(font7);
        lineEdit_35->setAlignment(Qt::AlignCenter);
        lineEdit_36 = new QLineEdit(frame);
        lineEdit_36->setObjectName(QStringLiteral("lineEdit_36"));
        lineEdit_36->setGeometry(QRect(320, 230, 31, 31));
        lineEdit_36->setFont(font5);
        lineEdit_36->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(170, 0, 21, 271));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(180, 0, 20, 281));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::VLine);
        line_4 = new QFrame(frame);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 80, 371, 16));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::HLine);
        line_5 = new QFrame(frame);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 170, 371, 20));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::HLine);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 450, 381, 20));
        QFont font8;
        font8.setPointSize(10);
        label_4->setFont(font8);
        secMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(secMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 565, 27));
        secMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(secMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        secMainWindow->setStatusBar(statusbar);

        retranslateUi(secMainWindow);

        QMetaObject::connectSlotsByName(secMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *secMainWindow)
    {
        secMainWindow->setWindowTitle(QApplication::translate("secMainWindow", "Soduku Solver", 0));
        label->setText(QApplication::translate("secMainWindow", "Soduku Solver", 0));
        label_5->setText(QApplication::translate("secMainWindow", "TextLabel", 0));
        label_2->setText(QApplication::translate("secMainWindow", "V 1.0", 0));
        label_3->setText(QApplication::translate("secMainWindow", "Enter Soduku Matrix of 6x6 order", 0));
        pushButton->setText(QApplication::translate("secMainWindow", "Run the Solver", 0));
        label_4->setText(QApplication::translate("secMainWindow", "* It is compulsory to fill 0 (zero) in unknown place.", 0));
    } // retranslateUi

};

namespace Ui {
    class secMainWindow: public Ui_secMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECMAINWINDOW_H
