/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <vector>
#include <string>
#include "terminal.h"

/** The class representing an identifier. */
struct identifier : public terminal 
{
private: 
    std::string _name;
public:
    identifier (const std::string & name);
    identifier (const identifier & orig);
    
    
    virtual std::string emit () const;
    virtual symbol * clone () const;
};

#endif 
