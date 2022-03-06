/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef CHARACTER_H
#define CHARACTER_H

#include <vector>
#include "type.h"

/** The class representing a character type. */
struct character : public type 
{
public:
    virtual std::string emit () const;
    virtual symbol * clone () const;
};

#endif 
