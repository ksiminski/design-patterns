/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/



#ifndef GUIDE_SIGN_H
#define GUIDE_SIGN_H

#include <string>

#include "sign.h"

 
class guide_sign : public sign
{
    std::string _text;
public:
    guide_sign(const std::string& symbol, const std::string& text);
    virtual std::string to_string () const;
    virtual ~guide_sign();
};
 


#endif 
