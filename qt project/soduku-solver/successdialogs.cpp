#include "successdialogs.h"
#include "ui_successdialogs.h"

successDialogs::successDialogs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::successDialogs)
{
    ui->setupUi(this);
    QPixmap qpicsuccessor("/home/torrent/build-soduku-solver-Desktop_Qt_5_7_0_GCC_64bit-Debug/images/brain.png");
    ui->label_5->setPixmap(qpicsuccessor.scaled(50,50,Qt::KeepAspectRatio));

}

successDialogs::~successDialogs()
{
    delete ui;
}
