/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#include <string>
#include <sstream>
#include "symbol.h"
#include "terminal.h"
#include "identifier.h"

std::string identifier::emit() const
{
    return _name;   
}

identifier::identifier(const std::string & name) : _name (name)
{
}

identifier::identifier(const identifier & orig) :  _name (orig._name) 
{
}

symbol * identifier::clone () const 
{
    return new identifier (*this);
}

