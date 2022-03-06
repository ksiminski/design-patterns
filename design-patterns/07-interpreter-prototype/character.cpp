/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>
#include <sstream>
#include "symbol.h"
#include "character.h"
#include "terminal.h"

std::string character::emit() const
{
    return std::string ("char");   
}

symbol * character::clone () const 
{
    return new character (*this);
}




