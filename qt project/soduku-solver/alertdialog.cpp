#include "alertdialog.h"
#include "ui_alertdialog.h"
#include<QPixmap>


AlertDialog::AlertDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlertDialog)
{
    ui->setupUi(this);
    QPixmap qpicalert("./resources/error.png");
    ui->label_alert->setPixmap(qpicalert.scaled(70,70,Qt::KeepAspectRatio));


}

AlertDialog::~AlertDialog()
{
    delete ui;
}
