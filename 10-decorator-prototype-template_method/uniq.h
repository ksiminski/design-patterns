/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef UNIQ_H
#define UNIQ_H

#include <vector>
#include <string>
#include "modifier.h"

/** The class removes identical neighbouring strings. Only unique lines are left. */
class uniq : public modifier 
{
protected:
    virtual std::vector<std::string> operation (std::vector<std::string> ss) const;
     
public:
     virtual ~uniq();
     virtual modifier * clone () const;
};

#endif
