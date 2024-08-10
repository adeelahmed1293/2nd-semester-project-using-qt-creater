#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();

private slots:
    void on_BackButten_clicked();
    void on_BackButten_2_clicked();

private:
    Ui::AdminLogin *ui;
     QString usr, pass;
};

#endif // ADMINLOGIN_H
