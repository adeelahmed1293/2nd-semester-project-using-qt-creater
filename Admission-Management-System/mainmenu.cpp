#include "mainmenu.h"
#include "ui_mainmenu.h"
#include"home.h"


MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;

}
void MainMenu::on_pushButton_clicked()
{
    home *a;
    this->hide();
    a=new home(this);
    a->show();

}

