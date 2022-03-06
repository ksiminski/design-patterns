/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SYMBOL_H
#define SYMBOL_H

#include <vector>
#include <string>

/** The abstact class representing a symbol. */
struct symbol
{
    /** The method prints the symbol. */
    virtual std::string emit () const  = 0;
    virtual ~symbol ()
;
    virtual symbol * clone () const = 0; ///< prototype design pattern
};
	

#endif 
