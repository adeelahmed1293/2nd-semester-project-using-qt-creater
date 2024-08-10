#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H

#include <QDialog>

namespace Ui {
class PersonalDetails;
}

class PersonalDetails : public QDialog
{
    Q_OBJECT

public:
    explicit PersonalDetails(QWidget *parent = nullptr);
    ~PersonalDetails();

private slots:
    void on_BackButten_13_clicked();

    void on_BackButten_3_clicked();

    void on_BackButten_6_clicked();

    void on_BackButten_4_clicked();

    void on_BackButten_5_clicked();

private:
    Ui::PersonalDetails *ui;
};

#endif // PERSONALDETAILS_H
