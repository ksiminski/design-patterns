/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string> 
#include "sender.h"
#include "radio.h"
 
radio::radio(const std::string& name) : sender (name)
{
}

radio::radio(const radio& orig) : sender(orig)
{
}

std::string radio::set_header() const
{
    return std::string ("[This is ") + _name + std::string (" speaking] ");
}

