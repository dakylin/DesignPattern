#ifndef QUACK_MUTE_H
#define QUACK_MUTE_H

#include "QuackBehavior.h"
#include <stdio.h>

class QuackMute : public QuackBehavior
{
public:
    virtual void Quack();
};

#endif
