#ifndef SECMAINWINDOW_H
#define SECMAINWINDOW_H

#include <QMainWindow>
#include "alertdialog.h"
#include "successdialog.h"
#include "infodialog.h"

namespace Ui {
class secMainWindow;
}

class secMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit secMainWindow(QWidget *parent = 0);
    ~secMainWindow();

private slots:
    void on_pushButton_clicked();
    friend void checkoutsoduku(int soduku[6][6],secMainWindow *);
public slots:
    void deleteme();;

private:
    Ui::secMainWindow *ui;

};

#endif // SECMAINWINDOW_H
