#ifndef ADMINLOGIN1_H
#define ADMINLOGIN1_H

#include <QDialog>

namespace Ui {
class Adminlogin1;
}

class Adminlogin1 : public QDialog
{
    Q_OBJECT

public:
    explicit Adminlogin1(QWidget *parent = nullptr);
    ~Adminlogin1();

private slots:
    void on_label_3_linkActivated();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_BackButten_5_clicked();

private:
    Ui::Adminlogin1 *ui;
};

#endif // ADMINLOGIN1_H
