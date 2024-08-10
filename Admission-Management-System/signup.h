#ifndef SIGNUP_H
#define SIGNUP_H


#include <QDialog>
#include<QtSql>
#include<QtCore>


namespace Ui {
class Signup;
}

class Signup : public QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_BackButten_clicked();

    void on_BackButten_2_clicked();

private:
    Ui::Signup *ui;
     QSqlDatabase db_connection ;
    QString email ;
    QString user_name ;
    QString pass1 ;
    QString pass ;
};

#endif // SIGNUP_H
