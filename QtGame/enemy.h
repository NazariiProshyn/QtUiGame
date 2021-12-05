#ifndef ENEMY_H
#define ENEMY_H
#include "Creature.h"



class Enemy final : public Creatyre
{
public:
    Enemy();
    void Easy() override;
    void Medium() override;
    void Hard() override;
    bool Check() override {return (bool)health;};
    void operator = (const Enemy & other);
    int getHealth() override {return  health;};
    int getShield() override {return  shield;};
    bool isAlive() override {return health;}
    int getDamage() override;
    void Damage(int atck,bool mag);

private:
    int health   = 0;
    int damage   = 0;
    int shield   = 0;
    int critical = 0;
    int difficul = 0;
};

#endif // ENEMY_H
