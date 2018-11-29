#ifndef _DISPLAY_ELEMENT_H_
#define _DISPLAY_ELEMENT_H_

class DisplayElement
{
public:
    DisplayElement();
    virtual ~DisplayElement() = 0;
    virtual void Display() = 0;
};

#endif
