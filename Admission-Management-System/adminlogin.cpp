#include "adminlogin.h"
#include "ui_adminlogin.h"
#include"home.h"
#include"adminlogin1.h"
#include<QMessageBox>
AdminLogin::AdminLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_BackButten_clicked()
{
    home *a;
    this->hide();
    a=new home(this);
    a->show();
}


void AdminLogin::on_BackButten_2_clicked()
{

    this->usr="adeel";
    this->pass="1293";
    if( ui->Adminpassward->text()==this->pass && ui->Adminusername->text()==this->usr){
     QMessageBox::information(this, "Login", "Login Successfully");
    Adminlogin1 *a;
    this->hide();
    a=new Adminlogin1(this);
    a->show();

    }
    else if( ui->Adminpassward->text()=="" && ui->Adminusername->text()=="") {
         QMessageBox::information(this, "Error", " Enter username or passward");
    }
    else{
        QMessageBox::warning(this, "Error", "Incorrect username or passward ");
    }
}

