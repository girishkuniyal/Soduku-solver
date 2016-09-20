#include "aboutmainwindow.h"
#include "ui_aboutmainwindow.h"

AboutMainWindow::AboutMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AboutMainWindow)
{
    ui->setupUi(this);
    QPixmap qpicabouts("./resources/brain.png");

            ui->label_aboutlink->setText("<a href=\"http://github.com/girishkuniyal/soduku-solver.git\">Repository</a>");
            ui->label_aboutlink->setTextFormat(Qt::RichText);
            ui->label_aboutlink->setTextInteractionFlags(Qt::TextBrowserInteraction);
            ui->label_aboutlink->setOpenExternalLinks(true);

ui->label_3->setText("<a href=\"http://www.flaticon.com/authors/freepik\">Freepik</a>");
ui->label_3->setTextFormat(Qt::RichText);
ui->label_3->setTextInteractionFlags(Qt::TextBrowserInteraction);
ui->label_3->setOpenExternalLinks(true);

ui->label_4->setText("<a href=\"http://www.flaticon.com/authors/madebyoliver\">Madebyoliver</a>");
ui->label_4->setTextFormat(Qt::RichText);
ui->label_4->setTextInteractionFlags(Qt::TextBrowserInteraction);
ui->label_4->setOpenExternalLinks(true);

}
AboutMainWindow::~AboutMainWindow()
{
    delete ui;
}
