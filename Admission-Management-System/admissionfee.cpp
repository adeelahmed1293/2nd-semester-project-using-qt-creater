#include "admissionfee.h"
#include "ui_admissionfee.h"
#include"student.h"
#include"personaldetails.h"
#include"educationaldetails.h"
#include<QMessageBox>
#include"functional_classes/fees.h"
Admissionfee::Admissionfee(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admissionfee)
{
    ui->setupUi(this);
}

Admissionfee::~Admissionfee()
{
    delete ui;
}

void Admissionfee::on_BackButten_6_clicked()
{

    PersonalDetails *p;
    this->close();
    p=new PersonalDetails (this);
    p->show();
}


void Admissionfee::on_BackButten_2_clicked()
{
   PersonalDetails *p;
    this->close();
    p=new PersonalDetails (this);
    p->show();

}


void Admissionfee::on_BackButten_3_clicked()
{
    EducationalDetails *p;
    this->close();
    p=new EducationalDetails (this);
    p->show();
}


void Admissionfee::on_BackButten_5_clicked()
{
    student *p;
    this->close();
    p=new student(this);
    p->show();

}




void Admissionfee::on_BackButten_7_clicked()
{
    QString name=ui->studentname->text();
    QString course = ui->course->text();
    QString status = ui->fees->text();


    if (name==""&& status==""&&course==""){
        QMessageBox::warning(this, "Error", "missing information");
    }
    else{
        Fees a(name,course,status);
        int check=a.insertininto(name,course,status);
        if(check){
            a.id=a.id+1;
            a.write();
            QMessageBox::information(this, "Inserted", "  Information saved");
        }
        else{
            QMessageBox::warning(this, "Error", "Information not saved");
        }

    }
}

