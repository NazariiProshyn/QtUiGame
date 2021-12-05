#include "cppgame.h"
#include "ui_cppgame.h"
#include <QPixmap>
#include <string>
#include <QMessageBox>

enum class ECMoves
{
    KICK = 1,
    HEAL = 2,
    RUN  = 3

};

CppGame::CppGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CppGame)
{
    ui->setupUi(this);
    QPixmap hero(":/resources/img/hero123.jpg");
    QPixmap enemy(":/resources/img/enemy.jpg");
    int heroWidth = ui->hero->width();
    int heroHeight = ui->hero->height();
    int enemyWidth = ui->enemy->width();
    int enemyHeight = ui->enemy->height();

    ui->hero->setPixmap(hero.scaled(heroWidth,heroHeight,
                                    Qt::KeepAspectRatio));
    ui->enemy->setPixmap(enemy.scaled(enemyWidth,enemyHeight,
                                    Qt::KeepAspectRatio));
}

CppGame::~CppGame()
{
    delete ui;
}

void CppGame::CreateGame(const Enemy &en, const Player &pl)
{
    enemy = en;
    player = pl;
}

void CppGame::ViewCharacters()
{
    infoString = "Health: " +
            std::to_string(player.getHealth());
    ui->heroHealth->setText(QString::fromStdString(infoString));

    infoString = "Health: " +
            std::to_string(enemy.getHealth());
    ui->enemyHealth->setText(QString::fromStdString(infoString));

    infoString = "Shield: " +
            std::to_string(player.getShield());
    ui->heroShield->setText(QString::fromStdString(infoString));

    infoString = "Shield: " +
            std::to_string(enemy.getShield());
    ui->enemyShield->setText(QString::fromStdString(infoString));
}

void CppGame::on_KICK_clicked()
{
    activeMove = (int)ECMoves::KICK;
}


void CppGame::on_HEAL_clicked()
{
    activeMove = (int)ECMoves::HEAL;
}


void CppGame::on_RUN_clicked()
{
    activeMove = (int)ECMoves::RUN;
}


void CppGame::on_Move_clicked()
{
    switch (activeMove) {
    case static_cast<int>(ECMoves::KICK):
        enemy.Damage(player.getDamage(),player.isMag());
        player.Damage(enemy.getDamage());
        break;
    case static_cast<int>(ECMoves::HEAL):
        player.Damage(enemy.getDamage());
        player.Heal();
        break;
    case static_cast<int>(ECMoves::RUN):
        player.Run();
        break;
    }
    if(!enemy.isAlive())
    {
        QMessageBox::about(this,"WIN",
                                 "YOU KILL EVIL!");
        hide();
    }
    else if(player.IsRun() && player.isAlive())
    {
        QMessageBox::about(this,"HMM",
                                 "TRY LATER!");
        hide();
    }
    else if(!player.isAlive())
    {
        QMessageBox::about(this,"LOSE",
                                 "EVIL CONQUER WORLD!");
        hide();
    }

    ViewCharacters();
}

