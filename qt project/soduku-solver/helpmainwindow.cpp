#include "helpmainwindow.h"
#include "ui_helpmainwindow.h"
#include<QPixmap>

helpMainWindow::helpMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::helpMainWindow)
{
    ui->setupUi(this);
    QPixmap qpicabouts("/home/torrent/build-soduku-solver-Desktop_Qt_5_7_0_GCC_64bit-Debug/images/brain.png");

}

helpMainWindow::~helpMainWindow()
{
    delete ui;
}
