#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //set icon here
    a.setWindowIcon(QIcon("icon/brain.png"));
    w.setStyleSheet("QMainWindow {background: 'darkGrey'; font-weight:bold;}");
    w.show();


    return a.exec();
}
