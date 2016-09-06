#ifndef ABOUTMAINWINDOW_H
#define ABOUTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class AboutMainWindow;
}

class AboutMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AboutMainWindow(QWidget *parent = 0);
    ~AboutMainWindow();

private:
    Ui::AboutMainWindow *ui;
};

#endif // ABOUTMAINWINDOW_H
