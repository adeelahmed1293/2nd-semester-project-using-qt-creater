#include "moredetails.h"
#include "ui_moredetails.h"
#include"signup.h"
moredetails::moredetails(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::moredetails)
{
    ui->setupUi(this);
}

moredetails::~moredetails()
{
    delete ui;
}

void moredetails::on_BackButten_2_clicked()
{
    Signup *a;
    this->hide();
    a=new Signup(this);
    a->show();

}

