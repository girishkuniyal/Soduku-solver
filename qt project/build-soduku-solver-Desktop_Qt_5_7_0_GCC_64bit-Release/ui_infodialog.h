/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_infoDialog
{
public:
    QLabel *label_infoerror;
    QLabel *label;

    void setupUi(QDialog *infoDialog)
    {
        if (infoDialog->objectName().isEmpty())
            infoDialog->setObjectName(QStringLiteral("infoDialog"));
        infoDialog->resize(653, 133);
        label_infoerror = new QLabel(infoDialog);
        label_infoerror->setObjectName(QStringLiteral("label_infoerror"));
        label_infoerror->setGeometry(QRect(30, 20, 91, 91));
        label_infoerror->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/info.png);"));
        label = new QLabel(infoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 40, 501, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(infoDialog);

        QMetaObject::connectSlotsByName(infoDialog);
    } // setupUi

    void retranslateUi(QDialog *infoDialog)
    {
        infoDialog->setWindowTitle(QApplication::translate("infoDialog", "Soduku Solver - Alert", 0));
        label_infoerror->setText(QString());
        label->setText(QApplication::translate("infoDialog", "Invalid Input ! Please Enter valid Soduku problem .", 0));
    } // retranslateUi

};

namespace Ui {
    class infoDialog: public Ui_infoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
