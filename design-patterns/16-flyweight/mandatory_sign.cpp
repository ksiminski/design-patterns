/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <sstream>

#include "sign.h"
#include "mandatory_sign.h"

std::string mandatory_sign::to_string() const
{
    std::stringstream ss;
    ss << "mandatory sign, " << sign::to_string();    
    return ss.str();
}

mandatory_sign::mandatory_sign(const std::string& symbol) : sign (symbol)
{
}


mandatory_sign::~mandatory_sign()
{
}

 
 
