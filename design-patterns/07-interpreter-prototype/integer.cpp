/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>
#include <sstream>
#include "symbol.h"
#include "integer.h"
#include "terminal.h"

std::string integer::emit() const
{
    return std::string ("int");   // very simple emit :-)
}

symbol * integer::clone () const 
{
    return new integer (*this);
}




