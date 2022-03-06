/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef FUNCTION_H
#define FUNCTION_H

#include <vector>
#include <string>

#include "symbol.h"
#include "nonterminal.h"

/** The function representing a function. */
struct function : public nonterminal 
{
    virtual std::string emit () const;
    virtual symbol * clone() const;
};


#endif 
