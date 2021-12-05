#ifndef NEWUSERFORM_H
#define NEWUSERFORM_H

#include <QDialog>
#include "lvls.h"
namespace Ui {
class NewUserForm;
}

class NewUserForm : public QDialog
{
    Q_OBJECT

public:
    explicit NewUserForm(QWidget *parent = nullptr);
    ~NewUserForm();

private slots:
    void on_NewUseButton_clicked();

private:
    Ui::NewUserForm *ui;
    Lvls *lvls;
};

#endif // NEWUSERFORM_H
