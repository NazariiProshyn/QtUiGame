#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lvls.h"
#include "newuserform.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_LogIn_Button_clicked();

    void on_NewUserButton_clicked();

private:
    Ui::MainWindow *ui;
    Lvls *lvls;
    NewUserForm *newUser;
};
#endif // MAINWINDOW_H
