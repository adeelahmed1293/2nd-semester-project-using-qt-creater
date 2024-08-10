#include "studentlogin1.h"
#include "ui_studentlogin1.h"
#include"personaldetails.h"
#include"educationaldetails.h"
#include"student.h"
#include"admissionfee.h"
StudentLogin1::StudentLogin1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentLogin1)
{
    ui->setupUi(this);
}

StudentLogin1::~StudentLogin1()
{
    delete ui;
}

void StudentLogin1::on_BackButten_2_clicked()
{
    PersonalDetails *p;
    this->close();
    p=new PersonalDetails(this);
    p->show();
}


void StudentLogin1::on_BackButten_3_clicked()
{
    EducationalDetails *p;
    this->close();
    p=new EducationalDetails(this);
    p->show();
}


void StudentLogin1::on_BackButten_6_clicked()
{
    student  *p;
    this->close();
    p=new student(this);
    p->show();
}


void StudentLogin1::on_BackButten_4_clicked()
{
  Admissionfee *p;
    this->close();
    p=new Admissionfee(this);
    p->show();
}

