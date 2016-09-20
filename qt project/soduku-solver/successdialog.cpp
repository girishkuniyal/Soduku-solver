#include "successdialog.h"
#include "ui_successdialog.h"
#include <QPixmap>

successdialog::successdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::successdialog)
{
    ui->setupUi(this);
    QPixmap qpicsuccess("./resources/success.png");
}
successdialog::~successdialog()
{
    delete ui;
}
