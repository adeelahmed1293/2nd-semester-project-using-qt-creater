#include "educationaldetails.h"
#include "ui_educationaldetails.h"
#include"personaldetails.h"
#include"student.h"
#include"admissionfee.h"
#include"functional_classes/educationaldetailss.h"
#include<QMessageBox>
EducationalDetails::EducationalDetails(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EducationalDetails)
{
    ui->setupUi(this);
}

EducationalDetails::~EducationalDetails()
{
    delete ui;
}

void EducationalDetails::on_BackButten_2_clicked()
{
    PersonalDetails *p;
    this->close();
    p= new PersonalDetails(this);
    p->show();
}


void EducationalDetails::on_BackButten_13_clicked()
{
    PersonalDetails *p;
    this->close();
    p= new PersonalDetails(this);
    p->show();
}


void EducationalDetails::on_BackButten_6_clicked()
{
    QString school=ui->MatricSchool->text();
    QString marksText = ui->MarticMarks->text();
    bool ok;
    int matricmarks = marksText.toInt(&ok);
    QString college =ui->FscCollege->text();
    QString marks_Text = ui->Fscmarks->text();
    bool oka;
    int fscmarks = marks_Text.toInt(&oka);



    if (school==""&&marksText==""&&college==""&&marks_Text==""){
        QMessageBox::warning(this, "Error", "missing information");
    }
    else{
        educationaldetailss a(school,matricmarks,college,fscmarks);
        int check=a.insertininto(school,matricmarks,college,fscmarks);
        if(check){
            a.id=a.id+1;
            a.write();
            QMessageBox::information(this, "Inserted", "  Information saved");
            Admissionfee  *p;
            this->close();
            p=new Admissionfee (this);
            p->show();
        }
        else{
            QMessageBox::warning(this, "Error", "Information not saved");
        }

    }

}


void EducationalDetails::on_BackButten_4_clicked()
{
    Admissionfee  *p;
    this->close();
    p=new Admissionfee (this);
    p->show();
}


void EducationalDetails::on_BackButten_5_clicked()
{
    student *p;
    this->close();
    p=new student (this);
    p->show();
}




