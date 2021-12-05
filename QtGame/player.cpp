#include "player.h"
#include <cstdlib>
#include <ctime>

namespace NSCharacters {
    const int magicianHealth   = 8;
    const int magicianDamage   = 7;
    const int magicianShield   = 2;
    const int magicianCritical = 8;

    const int bowmanHealth   = 12;
    const int bowmanDamage   = 4;
    const int bowmanShield   = 8;
    const int bowmanCritical = 7;

    const int warriorHealth   = 16;
    const int warriorDamage   = 2;
    const int warriorShield   = 12;
    const int warriorCritical = 4;
}

enum class ECLvls
{
    HARD   = 1,
    MEDIUM = 3,
    EASY   = 4

};

enum class ECHeroType
{
    MAGICIAN = 1,
    BOWMAN   = 2,
    WARRIOR  = 3

};


Player::Player()
{

}

void Player::Bowman()
{
   heroType = (int)ECHeroType::BOWMAN;
}

void Player::Magician()
{
   heroType = (int)ECHeroType::MAGICIAN;
}

void Player::Warrior()
{
   heroType = (int)ECHeroType::WARRIOR;
}

 void Player::Easy()
{
     difficul = (int)ECLvls::EASY;
}

 void Player::Medium()
{
     difficul = (int)ECLvls::MEDIUM;
}

 void Player::Hard()
{
     difficul = (int)ECLvls::HARD;

}

 void Player::configureHero(){
     if(heroType == (int)ECHeroType::WARRIOR){
         health   = NSCharacters::warriorHealth   * difficul;
         damage   = NSCharacters::warriorDamage   * difficul;
         shield   = NSCharacters::warriorShield   * difficul;
         critical = NSCharacters::warriorCritical;
     }

     if(heroType == (int)ECHeroType::BOWMAN){
         health   = NSCharacters::bowmanHealth   * difficul;
         damage   = NSCharacters::bowmanDamage   * difficul;
         shield   = NSCharacters::bowmanShield   * difficul;
         critical = NSCharacters::bowmanCritical;
     }

     if(heroType == (int)ECHeroType::MAGICIAN){
         health   = NSCharacters::magicianHealth   * difficul;
         damage   = NSCharacters::magicianDamage   * difficul;
         shield   = NSCharacters::magicianShield   * difficul;
         critical = NSCharacters::magicianCritical;
     }

 }

 void Player::operator=(const Player &other)
 {
      this->health   = other.health;
      this->damage   = other.damage;
      this->shield   = other.shield;
      this->heroType = other.heroType;
      this->critical = other.critical;
      this->difficul = other.difficul;
 }

 int Player::getDamage(){
     srand (time(NULL));
     if(!rand()%critical)
     {
         return damage * 2;
     }
     return damage;
 }

 void Player::Run(){
     srand (time(NULL));
     if(!rand()%critical)
     {
         health = 0;
     }
 }

 void Player::Damage(int atck){
     if(shield > 0)
     {
         shield -= atck;
         if(shield < 0){
             shield = 0;
         }
     }
     else
     {
         health -= atck;
         if(health < 0){
             health = 0;
         }
     }

 }
 void Player::Heal(){
    health += damage * 2;
    if(health > 7 * heroType){
        health = 7 * heroType;
    }
 }

 bool Player::isMag(){
     if(heroType == (int)ECHeroType::MAGICIAN)
     {
         return true;
     }
     return false;
 }
