#include "successdialog.h"
#include "ui_successdialog.h"
#include <QPixmap>

successdialog::successdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::successdialog)
{
    ui->setupUi(this);
    QPixmap qpicsuccess("/home/torrent/build-soduku-solver-Desktop_Qt_5_7_0_GCC_64bit-Debug/images/success.png");
}
successdialog::~successdialog()
{
    delete ui;
}
