/********************************************************************************
** Form generated from reading UI file 'successdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESSDIALOG_H
#define UI_SUCCESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_successdialog
{
public:
    QLabel *label_success;
    QLabel *label;

    void setupUi(QDialog *successdialog)
    {
        if (successdialog->objectName().isEmpty())
            successdialog->setObjectName(QStringLiteral("successdialog"));
        successdialog->resize(565, 112);
        label_success = new QLabel(successdialog);
        label_success->setObjectName(QStringLiteral("label_success"));
        label_success->setGeometry(QRect(30, 20, 71, 71));
        label_success->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/success.png);"));
        label = new QLabel(successdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 361, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(successdialog);

        QMetaObject::connectSlotsByName(successdialog);
    } // setupUi

    void retranslateUi(QDialog *successdialog)
    {
        successdialog->setWindowTitle(QApplication::translate("successdialog", "Soduku Solver - Alert", 0));
        label_success->setText(QString());
        label->setText(QApplication::translate("successdialog", "Soduku is solved Successfully :) !", 0));
    } // retranslateUi

};

namespace Ui {
    class successdialog: public Ui_successdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESSDIALOG_H
