#include "enemy.h"
#include <cstdlib>
#include <ctime>

namespace NSCharacters {
    const int health   = 16;
    const int damage   = 5;
    const int shield   = 4;
    const int critical = 4;

}

enum class ECLvls
{
    HARD   = 5,
    MEDIUM = 3,
    EASY   = 1

};


Enemy::Enemy()
{

}

void Enemy::Easy()
{
       health   = NSCharacters::health   * (int)ECLvls::EASY;
       damage   = NSCharacters::damage   * (int)ECLvls::EASY;
       shield   = NSCharacters::shield   * (int)ECLvls::EASY;
       critical = NSCharacters::critical;

}

void Enemy::Medium()
{
       health   = NSCharacters::health   * (int)ECLvls::MEDIUM;
       damage   = NSCharacters::damage   * (int)ECLvls::MEDIUM;
       shield   = NSCharacters::shield   * (int)ECLvls::MEDIUM;
       critical = NSCharacters::critical;

}

void Enemy::Hard()
{
       health   = NSCharacters::health   * (int)ECLvls::HARD;
       damage   = NSCharacters::damage   * (int)ECLvls::HARD;
       shield   = NSCharacters::shield   * (int)ECLvls::HARD;
       critical = NSCharacters::critical;

}

void Enemy::operator=(const Enemy &other)
{
    this->health   = other.health;
    this->damage   = other.damage;
    this->shield   = other.shield;
    this->critical = other.critical;
    this->difficul = other.difficul;
}

int Enemy::getDamage(){
    srand (time(NULL));
    if(!rand()%critical)
    {
        return damage * 2;
    }
    return damage;
}

void Enemy::Damage(int atck, bool mag){
    if(mag || shield <= 0){
        health -= atck;
        if(health < 0)
        {
           health = 0;
        }
    }
    else
    {
        shield -= atck;
        if(shield < 0)
        {
            shield = 0;
        }
    }

}
