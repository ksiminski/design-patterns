/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/



#ifndef NONTERMINAL_H
#define NONTERMINAL_H

#include "symbol.h"

/** The abstract class representing a nonterminal symbol (internal node in a derivation tree). */
struct nonterminal : public symbol
{
    std::vector<symbol *> symbols;    ///< a list of components of the nonterminal
    
    virtual ~nonterminal ();
    nonterminal ();
    nonterminal (const nonterminal & orig);
    nonterminal (nonterminal && orig);
    
    nonterminal & operator= (const nonterminal & orig);    
    nonterminal & operator= (nonterminal && orig);    
};


#endif 
