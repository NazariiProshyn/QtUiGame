#include "lvls.h"
#include "ui_lvls.h"
#include "QMessageBox"
#include <string>

Lvls::Lvls(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lvls)
{
    ui->setupUi(this);
}

Lvls::~Lvls()
{
    delete ui;
    delete cppGame;
}



void Lvls::on_Warrior_clicked()
{
    player.Warrior();
}


void Lvls::on_Magician_clicked()
{
    player.Magician();
}


void Lvls::on_Bowman_clicked()
{
    player.Bowman();
}


void Lvls::on_Easy_clicked()
{
    player.Easy();
    enemy.Easy();
}


void Lvls::on_Medium_clicked()
{
    player.Medium();
    enemy.Medium();
}


void Lvls::on_Hard_clicked()
{
    player.Hard();
    enemy.Hard();
}


void Lvls::on_Play_clicked()
{
    player.configureHero();
    if(!enemy.Check()){
        QMessageBox::information(this,"INFOMESSAGE",
                                 "Please, choose difficulty");
    }
    else if(!player.Check()){
        QMessageBox::information(this,"INFOMESSAGE",
                                 "Please, choose type of Hero");
    }
    else{
        cppGame = new CppGame(this);
        cppGame->CreateGame(enemy, player);
        cppGame->ViewCharacters();
        cppGame->show();
    }

}

