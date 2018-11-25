#ifndef DUCK_H
#define DUCK_H
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
    Duck();
    virtual ~Duck() = 0;
    void PerformFly();
    void PerformQuack();
    void Swim();
//private:
protected:
    FlyBehavior *m_FlyBehavior;
    QuackBehavior *m_QuackBehavior;
};

#endif
