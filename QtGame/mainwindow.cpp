#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete lvls;
    delete newUser;
}




void MainWindow::on_LogIn_Button_clicked()
{
    QString login = ui->login->text();
    QString passw = ui->password->text();
    if(login == "user" && passw == "1111"){

        lvls = new Lvls(this);
        lvls->show();
        hide();
    }
    else{
        QMessageBox::information(this,"Error",
                                 "incorrect data");
    }
}


void MainWindow::on_NewUserButton_clicked()
{
    newUser = new NewUserForm(this);
    newUser->show();
    hide();
}

