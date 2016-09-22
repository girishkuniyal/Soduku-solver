#include "infodialog.h"
#include "ui_infodialog.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
    QPixmap qpicinfo("./resources/info.png");
    ui->label_infoerror->setPixmap(qpicinfo.scaled(70,70,Qt::KeepAspectRatio));
}

infoDialog::~infoDialog()
{
    delete ui;
}
