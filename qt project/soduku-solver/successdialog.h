#ifndef SUCCESSDIALOG_H
#define SUCCESSDIALOG_H

#include <QDialog>

namespace Ui {
class successdialog;
}

class successdialog : public QDialog
{
    Q_OBJECT

public:
    explicit successdialog(QWidget *parent = 0);
    ~successdialog();

private slots:
    friend void checkoutsoduku(int soduku[6][6]);
private:
    Ui::successdialog *ui;

};

#endif // SUCCESSDIALOG_H
