#include "helpmainwindow.h"
#include "ui_helpmainwindow.h"
#include<QPixmap>

helpMainWindow::helpMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::helpMainWindow)
{
    ui->setupUi(this);
    QPixmap qpicabouts("./resources/brain.png");
    ui->label_5->setPixmap(qpicabouts);

}

helpMainWindow::~helpMainWindow()
{
    delete ui;
}
