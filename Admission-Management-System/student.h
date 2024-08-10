#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>

namespace Ui {
class student;
}

class student : public QDialog
{
    Q_OBJECT

public:
    explicit student(QWidget *parent = nullptr);
    ~student();

private slots:
    void on_pushButton_clicked();

    void on_BackButten_clicked();

    void on_BackButten_2_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::student *ui;
};

#endif // STUDENT_H
