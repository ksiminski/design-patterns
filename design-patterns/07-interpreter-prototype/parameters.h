/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <vector>
#include <string>

#include "symbol.h"
#include "nonterminal.h"

/** The class represents a sequence of parameters. */
struct parameters : public nonterminal 
{
    virtual std::string emit () const;
    virtual symbol * clone() const;
};


#endif 
