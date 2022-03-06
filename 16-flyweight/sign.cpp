/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <sstream>

#include "sign.h"

sign::sign(const std::string& symbol) : _symbol (symbol)
{    
}

sign::~sign()
{
}

std::string sign::to_string() const
{
    std::stringstream ss;
    ss << "symbol: " << _symbol;    
    return ss.str();
}

