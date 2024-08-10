#include "personaldetails.h"
#include "ui_personaldetails.h"
#include"student.h"
#include"educationaldetails.h"
#include"admissionfee.h"
#include"functional_classes/studentpersonaldetails.h"
#include<QMessageBox>
PersonalDetails::PersonalDetails(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonalDetails)
{
    ui->setupUi(this);
}

PersonalDetails::~PersonalDetails()
{
    delete ui;
}

void PersonalDetails::on_BackButten_13_clicked()
{
    student *p;
    this->close();
    p=new student(this);
    p->show();

}


void PersonalDetails::on_BackButten_3_clicked()
{
 EducationalDetails *p;
    this->close();
    p=new EducationalDetails(this);
    p->show();
}


void PersonalDetails::on_BackButten_6_clicked()
{
    QString studentname =ui->studentname->text();
    QString fathername=ui->Fathername->text();
    QString dateofbirth=ui->dateofbirth->text();
    QString address= ui->Address->text();
    QString gender=ui->gender->text();
    if (studentname==""&&fathername==""&&dateofbirth==""&&address==""){
         QMessageBox::warning(this, "Error", "missing information");
    }
    else{
        studenteducationaldetails a(studentname,fathername,dateofbirth,address);
        int check=a.insertininto(studentname,fathername,dateofbirth,address,gender);
        if(check){
            a.id=a.id+1;
            a.write();
            QMessageBox::information(this, "Inserted", "  Information saved");
            EducationalDetails *p;
            this->close();
            p=new EducationalDetails(this);
            p->show();

        }
        else{
             QMessageBox::warning(this, "Error", "Information not saved");
        }

    }

}


void PersonalDetails::on_BackButten_4_clicked()
{

    Admissionfee *p;
    this->close();
    p=new Admissionfee(this);
    p->show();
}


void PersonalDetails::on_BackButten_5_clicked()
{
    student *p;
    this->close();
    p=new student(this);
    p->show();

}

