/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <sstream>

#include "nonterminal.h"
#include "parameters.h"

std::string parameters::emit() const
{
    std::stringstream ss;
    if (symbols.size() == 0)       // empty 
        return std::string ();     
    else if (symbols.size() == 1)  // one parameter
        ss << symbols[0]->emit();
    else                           // more parameters
        ss << symbols[0]->emit() << ", " << symbols[1]->emit(); // comma separated paramters
    return ss.str();
}

symbol * parameters::clone() const
{
    return new parameters (*this);
}
