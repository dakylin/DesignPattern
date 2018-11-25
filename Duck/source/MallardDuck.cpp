#include "../include/MallardDuck.h"

MallardDuck::MallardDuck()
{
    m_QuackBehavior = new Quackc();
    m_FlyBehavior = new FlyWithWings();

}

MallardDuck::~MallardDuck()
{}

void MallardDuck::Display()
{
    fprintf(stdout, "I am a real Mallard Duck!\n");
}



