#ifndef LVLS_H
#define LVLS_H

#include <QDialog>
#include "enemy.h"
#include "player.h"
#include "cppgame.h"
namespace Ui {
class Lvls;
}

class Lvls : public QDialog
{
    Q_OBJECT

public:
    explicit Lvls(QWidget *parent = nullptr);
    ~Lvls();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_Warrior_clicked();

    void on_Magician_clicked();

    void on_Bowman_clicked();

    void on_Easy_clicked();

    void on_Medium_clicked();

    void on_Hard_clicked();

    void on_Play_clicked();

private:
    Ui::Lvls *ui;
    CppGame *cppGame;
    Player player;
    Enemy  enemy;
};

#endif // LVLS_H
