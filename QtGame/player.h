#ifndef PLAYER_H
#define PLAYER_H
#include "Creature.h"

class Player final : public Creatyre
{
public:
    Player();
    void Easy() override;
    void Medium() override;
    void Hard() override;
    void Magician();
    void Bowman();
    void Warrior();
    void configureHero();
    bool Check() override {return (bool)health;};
    void operator = (const Player & other);
    int getHealth() override {return  health;};
    int getShield() override {return  shield;};
    bool isAlive() override {return health;}
    int getDamage() override;
    void Damage(int atck);
    void Heal();
    void Run();
    bool isMag();
    bool IsRun(){return run;};
private:
    int health   = 0;
    int damage   = 0;
    int shield   = 0;
    int heroType = 0;
    int critical = 0;
    int difficul = 0;
    bool run = false;
};

#endif // PLAYER_H
