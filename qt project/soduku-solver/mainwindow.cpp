#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap qpic("./resources/brain.png");
    ui->label_2->setPixmap(qpic.scaled(60,60,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    secmainwindow = new secMainWindow(this);
    secmainwindow->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    aboutpoint = new AboutMainWindow(this);
    aboutpoint->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    helppoint = new helpMainWindow(this);
    helppoint->show();
}
