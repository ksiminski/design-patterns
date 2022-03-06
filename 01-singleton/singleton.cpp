/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include "singleton.h"


singleton & singleton::getInstance()
{
    static singleton the_only_object;
    return the_only_object;
}

singleton::singleton()
{
}

std::string singleton::to_string() const
{
   return std::string {"singleton: "} + std::to_string(_value);
}

int singleton::getValue() const
{
    return _value;
}

void singleton::setValue(const int value)
{
    _value = value;
}
