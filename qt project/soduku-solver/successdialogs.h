#ifndef SUCCESSDIALOGS_H
#define SUCCESSDIALOGS_H

#include <QDialog>

namespace Ui {
class successDialogs;
}

class successDialogs : public QDialog
{
    Q_OBJECT

public:
    explicit successDialogs(QWidget *parent = 0);
    ~successDialogs();

private:
    Ui::successDialogs *ui;
};

#endif // SUCCESSDIALOGS_H
