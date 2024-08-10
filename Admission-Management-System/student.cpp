#include "student.h"
#include "ui_student.h"
#include"signup.h"
#include"home.h"
#include"personaldetails.h"
#include"functional_classes/signupStudent.h"
#include"functional_classes/loginstudent.h"
#include <QMessageBox>
#include <QSql>
#include <QErrorMessage>
#include <QSqlQuery>

#define Path_To_Db "C:/databases/ADM.db"

student::student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::student)
{
    ui->setupUi(this);
}

student::~student()
{
    delete ui;
}

void student::on_pushButton_clicked()
{
    Signup *a;
    this->close();
    a= new Signup(this);
    a->show();
}


void student::on_BackButten_clicked()
{
    this->close();
    home *p;
    p=new home(this);
    p->show();
}


void student::on_BackButten_2_clicked()
{
    QString email = ui->studentemail->text();
    QString passward = ui->studentpassward->text();
    QString pass1=ui->studentpassward->text();


    //Polymorphism
    signupStudent *p;
    loginStudent a(email,passward);
    p=&a;
    int check;
    check=p->insertinto(email,passward,pass1);

     if(check){
        QMessageBox::information(this, "Success", "Login successful");
         PersonalDetails *a = new PersonalDetails(this);
         this->close();
         a->show();
     }
     else
        {
         QMessageBox::warning(this, "Failed", "Login failed");
       }
}



void student::on_pushButton_2_clicked()
{
    Signup *a;
    this->close();
    a= new Signup(this);
    a->show();
}

