#include "successdialog.h"
#include "ui_successdialog.h"
#include <QPixmap>

successdialog::successdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::successdialog)
{
    ui->setupUi(this);
    QPixmap qpicsuccess("./resources/success.png");
    ui->label_success->setPixmap(qpicsuccess.scaled(70,70,Qt::KeepAspectRatio));
}
successdialog::~successdialog()
{
    delete ui;
}
