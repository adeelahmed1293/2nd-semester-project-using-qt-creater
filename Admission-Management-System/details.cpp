#include "details.h"
#include "ui_details.h"
#include"moredetails.h"

details::details(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::details)
{
    ui->setupUi(this);
}

details::~details()
{
    delete ui;
}

void details::on_pushButton_4_clicked()
{
    moredetails *a;
    this->hide();
    a=new moredetails(this);
    a->show();
}

