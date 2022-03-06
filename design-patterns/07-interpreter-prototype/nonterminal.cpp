/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>
#include "nonterminal.h"


nonterminal::~nonterminal ()
{
    for (auto & s : symbols)
       delete s;
}

nonterminal::nonterminal::nonterminal()
{
}


nonterminal::nonterminal (const nonterminal& orig)
{
    symbols = std::vector<symbol *> (orig.symbols.size());
    for (std::size_t i = 0; i < orig.symbols.size(); i++)
        symbols[i] = orig.symbols[i]->clone();   // prototype design pattern
}

nonterminal::nonterminal(nonterminal && orig)
{
    std::swap (symbols, orig.symbols);
}

nonterminal & nonterminal::operator= (const nonterminal & orig)
{
    if (this == & orig)
        return *this;
    
    for (auto & s : symbols)
       delete s;
    
    symbols = std::vector<symbol *> (orig.symbols.size());
    for (std::size_t i = 0; i < orig.symbols.size(); i++)
        symbols[i] = orig.symbols[i]->clone();  // prototype design pattern
    
    
    return *this;
}


nonterminal & nonterminal::operator= (nonterminal && orig)
{
    if (this == & orig)
        return *this;
    
    std::swap (symbols, orig.symbols);    
    
    return *this;
}
