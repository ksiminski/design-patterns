/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <sstream>

#include "nonterminal.h"
#include "function.h"

std::string function::emit() const
{
    std::stringstream ss;
       
//     ss         << symbols[0]->emit() // returned type
//        << " "  << symbols[1]->emit() // identifier
//        << " (" << symbols[2]->emit() // parameters
//        << ");";
       
    ss         << symbols[1]->emit() // identifier 
       << " (" << symbols[2]->emit() // parameters
       << ") : "
       << " "  << 
       symbols[0]->emit() // returned type
       ;
       
    return ss.str();
}

symbol * function::clone() const
{
    return new function (*this);
}

 
