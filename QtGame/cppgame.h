#ifndef CPPGAME_H
#define CPPGAME_H

#include <QDialog>
#include "player.h"
#include "enemy.h"

namespace Ui {
class CppGame;
}

class CppGame : public QDialog
{
    Q_OBJECT

public:
    explicit CppGame(QWidget *parent = nullptr);
    ~CppGame();
    void CreateGame(const Enemy &en,const Player &pl);
    void ViewCharacters();
private slots:
    void on_KICK_clicked();

    void on_HEAL_clicked();

    void on_RUN_clicked();

    void on_Move_clicked();

private:
    Ui::CppGame *ui;
    Player player;
    Enemy  enemy;
    std::string infoString = "";
    int activeMove = 0;
};

#endif // CPPGAME_H
