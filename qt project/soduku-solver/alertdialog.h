#ifndef ALERTDIALOG_H
#define ALERTDIALOG_H

#include <QDialog>

namespace Ui {
class AlertDialog;
}

class AlertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlertDialog(QWidget *parent = 0);
    ~AlertDialog();

private slots:
    friend void checkoutsoduku(int soduku[6][6]);
private:
    Ui::AlertDialog *ui;
};

#endif // ALERTDIALOG_H
