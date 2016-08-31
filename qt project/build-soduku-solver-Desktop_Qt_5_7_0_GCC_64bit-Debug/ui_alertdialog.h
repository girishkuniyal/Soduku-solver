/********************************************************************************
** Form generated from reading UI file 'alertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTDIALOG_H
#define UI_ALERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AlertDialog
{
public:
    QLabel *label;
    QLabel *label_alert;

    void setupUi(QDialog *AlertDialog)
    {
        if (AlertDialog->objectName().isEmpty())
            AlertDialog->setObjectName(QStringLiteral("AlertDialog"));
        AlertDialog->resize(603, 108);
        label = new QLabel(AlertDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 471, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_alert = new QLabel(AlertDialog);
        label_alert->setObjectName(QStringLiteral("label_alert"));
        label_alert->setGeometry(QRect(20, 10, 81, 91));
        label_alert->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/error.png);"));

        retranslateUi(AlertDialog);

        QMetaObject::connectSlotsByName(AlertDialog);
    } // setupUi

    void retranslateUi(QDialog *AlertDialog)
    {
        AlertDialog->setWindowTitle(QApplication::translate("AlertDialog", "Soduku Solver - Alert", 0));
        label->setText(QApplication::translate("AlertDialog", "Soduku is not solved or solved incorrectly !", 0));
        label_alert->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AlertDialog: public Ui_AlertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTDIALOG_H
