#include "adminlogin1.h"
#include "ui_adminlogin1.h"
#include"QSqlError"
#include <QMessageBox>
#include <QSql>
#include <QErrorMessage>
#include <QSqlQuery>
#include <QFile>
#include <QDebug>
#include<QSqlQueryModel>
#include"adminlogin.h"
//path
#define Path_To_Db "C:/databases/ADM.db"

Adminlogin1::Adminlogin1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Adminlogin1)
{
    ui->setupUi(this);
    QSqlDatabase db_connection = QSqlDatabase::addDatabase("QSQLITE");
    db_connection.setDatabaseName(Path_To_Db);

    if (db_connection.open())
    {
        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery *query =new QSqlQuery(db_connection);
        query->prepare("SELECT l.* , p.school,p.matricmarks,p.college,p.fscmarks,e.course,e.status FROM personaldetails l ,educationaldetails p , fees e WHERE p.id=l.id AND p.id =e.id;");

        if (!query->exec())
        {
            qDebug() << " Record  not shown  ..";
        }
        else
        {

            qDebug() << "shown record successfully ..";
            modal->setQuery(*query);
            ui->record->setModel(modal);
            ui->record->resizeColumnsToContents();
            qDebug() << (modal->rowCount());
        }

    }
    else
    {
        qDebug() << "Database not connected";
    }
}

Adminlogin1::~Adminlogin1()
{
    delete ui;
}



void Adminlogin1::on_pushButton_clicked()
{
    QString name =ui->name->text();
    QSqlDatabase db_connection = QSqlDatabase::addDatabase("QSQLITE");
    db_connection.setDatabaseName(Path_To_Db);

    if (db_connection.open())
    {
        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery *query =new QSqlQuery(db_connection);
        query->prepare("DELETE FROM fees WHERE id IN (SELECT id FROM personaldetails WHERE studentname = '"+name+"');");
        if (!query->exec())
        {
            qDebug() << " Record  not shown  ..";
        }
        else
        {

            qDebug() << "shown record successfully ..";
            modal->setQuery(*query);
            ui->record->setModel(modal);
            ui->record->resizeColumnsToContents();
            qDebug() << (modal->rowCount());
        }

    }
    else
    {
        qDebug() << "Database not connected";
    }

}


void Adminlogin1::on_pushButton_2_clicked()
{
    QString e_name=ui->name_2->text();
    QSqlDatabase db_connection = QSqlDatabase::addDatabase("QSQLITE");
    db_connection.setDatabaseName(Path_To_Db);

    if (db_connection.open())
    {
        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery *query =new QSqlQuery(db_connection);
        query->prepare("SELECT  l.*, p.school, p.matricmarks, p.college, p.fscmarks, e.course, e.status FROM  personaldetails l INNER JOIN educationaldetails p ON l.id = p.id INNER JOIN  fees e ON l.id = e.id WHERE  l.studentname ='"+e_name+"' ;");

        if (!query->exec())
        {
            qDebug() << " Record  not shown  ..";
        }
        else
        {

            qDebug() << "shown record successfully ..";
            modal->setQuery(*query);
            ui->record->setModel(modal);
            ui->record->resizeColumnsToContents();
            qDebug() << (modal->rowCount());
        }

    }
    else
    {
        qDebug() << "Database not connected";
    }

}


void Adminlogin1::on_pushButton_3_clicked()
{

    QSqlDatabase db_connection = QSqlDatabase::addDatabase("QSQLITE");
    db_connection.setDatabaseName(Path_To_Db);

    if (db_connection.open())
    {
        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery *query =new QSqlQuery(db_connection);
        query->prepare("SELECT l.* , p.school,p.matricmarks,p.college,p.fscmarks,e.course,e.status FROM personaldetails l ,educationaldetails p , fees e WHERE p.id=l.id AND p.id =e.id;");

        if (!query->exec())
        {
            qDebug() << " Record  not shown  ..";
        }
        else
        {

            qDebug() << "shown record successfully ..";
            modal->setQuery(*query);
            ui->record->setModel(modal);
            ui->record->resizeColumnsToContents();
            qDebug() << (modal->rowCount());
        }

    }
    else
    {
        qDebug() << "Database not connected";
    }
}


void Adminlogin1::on_BackButten_5_clicked()
{
    AdminLogin *a;
    this->hide();
    a=new AdminLogin(this);
    a->show();
}

