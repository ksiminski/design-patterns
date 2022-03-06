/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <sstream>

#include "sign.h"
#include "prohibitory_sign.h"

prohibitory_sign::~prohibitory_sign()
{
}

prohibitory_sign::prohibitory_sign(const std::string& symbol) : sign (symbol)
{
}

std::string prohibitory_sign::to_string() const
{
    std::stringstream ss;
    ss << "prohibitory sign, " << sign::to_string();    
    return ss.str();
}

 
