#include "signup.h"
#include "ui_signup.h"
#include "student.h"
#include"functional_classes/signupStudent.h"

#include<QMessageBox>

Signup::Signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);

}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_BackButten_clicked()
{
    this->close();
    student *p = new student(this);
    p->show();
}

void Signup::on_BackButten_2_clicked()
{
    email = ui->studentemail->text();
    user_name = ui->studentusername->text();
    pass1 = ui->studentpassward1->text();
    pass = ui->studentpassward->text();
    if (this->email != "" && this->user_name != "" && this->pass1 != "" && this->pass != "")
            {
                if (this->pass == this->pass1)

                {
                signupStudent a(email,pass,pass1,user_name);
                int check;
                check=a.insertinto(email,user_name,pass1);

                if(check){
                    QMessageBox::information(this, "Registered", "Registered successfully");
                        qDebug() << "Insert successful";
                        this->close();
                        student *p = new student(this);
                        p->show();
                    }
                else{
                    QMessageBox::warning(this, "Error", "Not Registered");
                    }
               }
                else
                {
                    QMessageBox::warning(this, "Error", "Passwords do not match");
                }
            }
    else
        {
        QMessageBox::warning(this, "Error", "Missing information");
        }
}

