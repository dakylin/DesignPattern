#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include "Observer.h"

class Subject
{
public:
    Subject()
    {}
    virtual ~Subject() = 0;
    virtual void RegisterObServer(Observer &o) = 0;
    virtual void RemoveObServer(Observer &o) = 0;
    virtual void NotifyObServer() = 0;
};

#endif
