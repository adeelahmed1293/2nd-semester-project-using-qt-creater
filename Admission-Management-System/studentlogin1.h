#ifndef STUDENTLOGIN1_H
#define STUDENTLOGIN1_H

#include <QDialog>

namespace Ui {
class StudentLogin1;
}

class StudentLogin1 : public QDialog
{
    Q_OBJECT

public:
    explicit StudentLogin1(QWidget *parent = nullptr);
    ~StudentLogin1();

private slots:
    void on_BackButten_2_clicked();

    void on_BackButten_3_clicked();

    void on_BackButten_6_clicked();

    void on_BackButten_4_clicked();

private:
    Ui::StudentLogin1 *ui;
};

#endif // STUDENTLOGIN1_H
