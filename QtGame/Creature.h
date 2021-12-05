#ifndef CREATURE_H
#define CREATURE_H
class Creatyre
{
public:
    virtual void Easy()     = 0;
    virtual void Medium()   = 0;
    virtual void Hard()     = 0;
    virtual bool Check()    = 0;
    virtual int getHealth() = 0;
    virtual int getShield() = 0;
    virtual int getDamage() = 0;
    virtual bool isAlive()  = 0;
};
#endif // CREATURE_H
