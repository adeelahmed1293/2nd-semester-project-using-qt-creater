#ifndef ADMISSIONFEE_H
#define ADMISSIONFEE_H

#include <QDialog>

namespace Ui {
class Admissionfee;
}

class Admissionfee : public QDialog
{
    Q_OBJECT

public:
    explicit Admissionfee(QWidget *parent = nullptr);
    ~Admissionfee();

private slots:
    void on_BackButten_6_clicked();

    void on_BackButten_2_clicked();

    void on_BackButten_3_clicked();

    void on_BackButten_5_clicked();

    void on_BackButten_7_clicked();

private:
    Ui::Admissionfee *ui;
};

#endif // ADMISSIONFEE_H
