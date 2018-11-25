#include "../include/duck.h"
#include "stdio.h"
Duck::Duck()
{
    m_FlyBehavior = NULL;
    m_QuackBehavior = NULL;
}

Duck::~Duck()
{
    if (m_FlyBehavior != NULL)
    {
        delete m_FlyBehavior;
        m_FlyBehavior = NULL;
    }
    if (m_QuackBehavior != NULL)
    {
        delete m_QuackBehavior;
        m_QuackBehavior = NULL;
    }
}

void Duck::PerformFly()
{
    if (m_FlyBehavior == NULL)
    {
        fprintf(stdout, "WARN:Fly behavior is NULL.\n");
        return;
    }
    m_FlyBehavior->Fly();
}

void Duck::PerformQuack()
{
    if (m_QuackBehavior == NULL)
    {
        fprintf(stdout, "WARN:Quack behavior is NULL.\n");
        return;        
    }
    m_QuackBehavior->Quack();
}

void Duck::Swim()
{
    fprintf(stdout, "All kinds of duck can swim.\n");
}

/*void Duck::SetFlyBehavior(FlyBehavior *flyBehavior)
{
    m_FlyBehavior = flyBehavior;
}

void Duck::SetQuackBehavior(QuackBehavior *quackBehavior)
{
    m_QuackBehavior = quackBehavior;
}*/
