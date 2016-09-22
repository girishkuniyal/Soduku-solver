/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_infoDialog
{
public:
    QLabel *label_infoerror;
    QLabel *label;

    void setupUi(QDialog *infoDialog)
    {
        if (infoDialog->objectName().isEmpty())
            infoDialog->setObjectName(QString::fromUtf8("infoDialog"));
        infoDialog->resize(653, 133);
        label_infoerror = new QLabel(infoDialog);
        label_infoerror->setObjectName(QString::fromUtf8("label_infoerror"));
        label_infoerror->setGeometry(QRect(30, 20, 91, 91));
        label_infoerror->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/info.png);"));
        label = new QLabel(infoDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 501, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(infoDialog);

        QMetaObject::connectSlotsByName(infoDialog);
    } // setupUi

    void retranslateUi(QDialog *infoDialog)
    {
        infoDialog->setWindowTitle(QApplication::translate("infoDialog", "Soduku Solver - Alert", 0, QApplication::UnicodeUTF8));
        label_infoerror->setText(QString());
        label->setText(QApplication::translate("infoDialog", "Invalid Input ! Please Enter valid Soduku problem .", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class infoDialog: public Ui_infoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
