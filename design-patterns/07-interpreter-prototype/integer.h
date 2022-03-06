/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/



#ifndef INTEGER_H
#define INTEGER_H

#include <vector>
#include "type.h"

/** The class representing an integer number type. */
struct integer : public type 
{
 
public:
    
    virtual std::string emit () const;
    virtual symbol * clone () const;
};

#endif 
