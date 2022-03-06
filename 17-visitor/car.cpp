/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <vector>
#include <string>
#include <sstream>

#include "IVisitable.h"
#include "car.h"
#include "visitor.h"

std::string car::getName() const
{
    return _name;
}

void car::setName(const std::string& name)
{
    _name = name;
}

 

double car::getLoad() const
{
    return _load;
}

void car::setLoad(const double load)
{
    _load = load;
}

std::string car::accept(const visitor& p)
{
   return p.visit(*this);
}

