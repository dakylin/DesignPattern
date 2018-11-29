#ifndef _OBSERVER_H_
#define _OBSERVER_H_


class Observer
{
public:
    Observer()
    {}
    virtual ~Observer() = 0;
    virtual void update(float temp, float humidity, float pressure);
};

#endif

