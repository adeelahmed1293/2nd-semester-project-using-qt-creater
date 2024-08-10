#ifndef EDUCATIONALDETAILS_H
#define EDUCATIONALDETAILS_H

#include <QDialog>

namespace Ui {
class EducationalDetails;
}

class EducationalDetails : public QDialog
{
    Q_OBJECT

public:
    explicit EducationalDetails(QWidget *parent = nullptr);
    ~EducationalDetails();

private slots:
    void on_BackButten_2_clicked();

    void on_BackButten_13_clicked();

    void on_BackButten_6_clicked();

    void on_BackButten_4_clicked();

    void on_BackButten_5_clicked();

    void on_username_4_linkActivated(const QString &link);

private:
    Ui::EducationalDetails *ui;
};

#endif // EDUCATIONALDETAILS_H
