#include "home.h"
#include"mainmenu.h"
#include "ui_home.h"
#include"details.h"
#include"adminlogin.h"
#include"student.h"
home::home(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}



void home::on_pushButton_clicked()
{
    details *p;
    this->hide();
    p =new details(this);
    p->show();
}


void home::on_pushButton_2_clicked()
{
    AdminLogin *p;
    this->hide();
    p= new AdminLogin(this);
    p->show();

}


void home::on_pushButton_3_clicked()
{
    student *p;
    this->hide();
    p= new student(this);
    p->show();
}


void home::on_pushButton_5_clicked()
{
    MainMenu *p;
    this->hide();
    p= new MainMenu(this);
    p->show();
}

