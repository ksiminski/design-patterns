/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef IVISITABLE_H
#define IVISITABLE_H

#include <string>
#include "visitor.h"

class IVisitable 
{
public:
    /** Each visitable class has to implement accept method. */
    virtual std::string accept(const visitor& p) = 0;    
};


#endif 
