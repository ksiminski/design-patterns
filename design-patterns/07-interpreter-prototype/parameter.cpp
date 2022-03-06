/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <sstream>

#include "nonterminal.h"
#include "parameter.h"

std::string parameter::emit() const
{
    std::stringstream ss;
//     ss << symbols[0]->emit() << " " << symbols[1]->emit(); // type identifier
    ss << symbols[1]->emit() << " : " << symbols[0]->emit(); // UML style
 
    return ss.str();
}

symbol * parameter::clone() const
{
    return new parameter (*this);
}
