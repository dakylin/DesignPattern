#ifndef FLY_BEHAVIOR_H
#define FLY_BEHAVIOR_H

class FlyBehavior
{
public:
    FlyBehavior()
    {}
    virtual ~FlyBehavior()
    {}
    virtual void Fly() = 0;
};
#endif
