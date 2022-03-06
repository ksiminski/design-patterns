/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <sstream>
#include "guide_sign.h"


std::string guide_sign::to_string() const
{
    std::stringstream ss;
    ss << "guide sign, " << sign::to_string() << ", text: " << _text;    
    return ss.str();
}

guide_sign::guide_sign(const std::string& symbol, const std::string& text) : sign(symbol), _text (text)
{
}


guide_sign::~guide_sign()
{
}
 
