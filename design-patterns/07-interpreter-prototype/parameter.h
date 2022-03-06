/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef PARAMETER_H
#define PARAMETER_H

#include <vector>
#include <string>

#include "symbol.h"
#include "nonterminal.h"

struct parameter : public nonterminal 
{
    virtual std::string emit () const;
    virtual symbol * clone() const;
};


#endif 
