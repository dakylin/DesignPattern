#include "../include/MallardDuck.h"

int main()
{
    Duck *mallard = new MallardDuck();
    mallard->PerformFly();
    mallard->PerformQuack();
    delete mallard;
}
