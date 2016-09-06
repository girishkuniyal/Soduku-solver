#ifndef HELPMAINWINDOW_H
#define HELPMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class helpMainWindow;
}

class helpMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit helpMainWindow(QWidget *parent = 0);
    ~helpMainWindow();

private:
    Ui::helpMainWindow *ui;
};

#endif // HELPMAINWINDOW_H
