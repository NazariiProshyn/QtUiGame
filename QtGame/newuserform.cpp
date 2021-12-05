#include "newuserform.h"
#include "ui_newuserform.h"
#include <QMessageBox>
NewUserForm::NewUserForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewUserForm)
{
    ui->setupUi(this);
}

NewUserForm::~NewUserForm()
{
    delete ui;
    delete lvls;
}

void NewUserForm::on_NewUseButton_clicked()
{
    QString login = ui->log->text();
    QString passw = ui->passw->text();
    if(login == "user" && passw == "1111"){
        QMessageBox::information(this,"Success",
                                 "New user was created");
        lvls = new Lvls(this);
        lvls->show();
        hide();
    }
    else{
        QMessageBox::warning(this,"Error",
                                 "User with this login already created");
    }
}

