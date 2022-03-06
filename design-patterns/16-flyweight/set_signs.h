/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef SET_SIGNS_H
#define SET_SIGNS_H

#include <map>
#include <string>

#include "sign.h"

class set_signs 
{
protected:
    std::map<const std::string, sign *> signs;
public:    
    set_signs ();
    set_signs (const set_signs & orig) = delete; 
    
    ~set_signs ();
    
    void add_sign (const std::string symbol, sign * pSign);
    sign * get_sign (const std::string & symbol);
    
};

#endif 
