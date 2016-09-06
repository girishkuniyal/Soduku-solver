#include "infodialog.h"
#include "ui_infodialog.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
    QPixmap qpicinfo("/home/torrent/build-soduku-solver-Desktop_Qt_5_7_0_GCC_64bit-Debug/images/info.png");
}

infoDialog::~infoDialog()
{
    delete ui;
}
