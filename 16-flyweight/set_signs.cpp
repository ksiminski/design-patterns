/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <vector>
#include <string>
#include <sstream>
#include <map>

#include "sign.h"
#include "set_signs.h"

set_signs::set_signs()
{
}

void set_signs::add_sign(const std::string symbol, sign* pSign)
{
    try 
    {  
        signs.at(symbol);
    }
    catch (std::out_of_range & ex)
    {
        signs[symbol] = pSign;
        return;
    }
        
        
    delete signs[symbol];
    signs[symbol] = pSign;
}

sign * set_signs::get_sign(const std::string & symbol)
{
    try 
    {
        signs.at(symbol);
    }
    catch (std::out_of_range & ex)
    {
        return nullptr;
    }
    
    return signs[symbol];
}


set_signs::~set_signs()
{
    for (auto  p : signs)
        delete p.second;
}
 
 
