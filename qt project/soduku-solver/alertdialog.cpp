#include "alertdialog.h"
#include "ui_alertdialog.h"
#include<QPixmap>


AlertDialog::AlertDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlertDialog)
{
    ui->setupUi(this);
    QPixmap qpicalert("/home/torrent/build-soduku-solver-Desktop_Qt_5_7_0_GCC_64bit-Debug/images/error.png");

}

AlertDialog::~AlertDialog()
{
    delete ui;
}
