/********************************************************************************
** Form generated from reading UI file 'alertdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTDIALOG_H
#define UI_ALERTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AlertDialog
{
public:
    QLabel *label;
    QLabel *label_alert;

    void setupUi(QDialog *AlertDialog)
    {
        if (AlertDialog->objectName().isEmpty())
            AlertDialog->setObjectName(QString::fromUtf8("AlertDialog"));
        AlertDialog->resize(603, 108);
        label = new QLabel(AlertDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 471, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_alert = new QLabel(AlertDialog);
        label_alert->setObjectName(QString::fromUtf8("label_alert"));
        label_alert->setGeometry(QRect(20, 10, 81, 91));
        label_alert->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(AlertDialog);

        QMetaObject::connectSlotsByName(AlertDialog);
    } // setupUi

    void retranslateUi(QDialog *AlertDialog)
    {
        AlertDialog->setWindowTitle(QApplication::translate("AlertDialog", "Soduku Solver - Alert", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AlertDialog", "Soduku is not solved or solved incorrectly !", 0, QApplication::UnicodeUTF8));
        label_alert->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AlertDialog: public Ui_AlertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTDIALOG_H
