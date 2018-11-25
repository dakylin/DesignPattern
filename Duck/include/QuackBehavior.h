#ifndef QUACK_BEHAVIOR_H
#define QUACK_BEHAVIOR_H

class QuackBehavior
{
public:
    QuackBehavior()
    {}
    virtual ~QuackBehavior()
    {}
    virtual void Quack() = 0;    
};

#endif
