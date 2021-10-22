#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::setclient(client c)
{

    ui->lineEdit_CD->setText(c.get_cin());
    ui->nomD->setText(c.get_nom());
    ui->RENOM_d->setText(c.get_prenom());


}
