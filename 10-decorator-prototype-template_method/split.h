/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef SPLIT_H
#define SPLIT_H

#include <vector>
#include <string> 
#include "modifier.h"

class split : public modifier
{
protected:
    std::vector<std::string> split_string (const std::string & ss) const;
public:
    virtual ~split();
};



#endif
