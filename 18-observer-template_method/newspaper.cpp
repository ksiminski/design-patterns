/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string> 
#include "sender.h"
#include "newspaper.h"
 
newspaper::newspaper(const std::string& name) : sender (name)
{
}

newspaper::newspaper(const newspaper& orig) : sender (orig)
{
}

std::string newspaper::set_header() const
{
    return std::string ("[Latest news provided by ") + _name + std::string ("] "); 
}

