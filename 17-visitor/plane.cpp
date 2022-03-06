/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <vector>
#include <string>
#include <sstream>

#include "IVisitable.h"
#include "plane.h"
#include "visitor.h"

std::string plane::getName() const
{
    return _name;
}

void plane::setName(const std::string & name)
{
    _name = name;
}

std::string plane::accept(const visitor& p)
{
    return p.visit(*this);
}
 
 
