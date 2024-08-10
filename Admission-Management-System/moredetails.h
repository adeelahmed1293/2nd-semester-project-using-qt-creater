#ifndef MOREDETAILS_H
#define MOREDETAILS_H

#include <QDialog>

namespace Ui {
class moredetails;
}

class moredetails : public QDialog
{
    Q_OBJECT

public:
    explicit moredetails(QWidget *parent = nullptr);
    ~moredetails();

private slots:
    void on_BackButten_2_clicked();

private:
    Ui::moredetails *ui;
};

#endif // MOREDETAILS_H
