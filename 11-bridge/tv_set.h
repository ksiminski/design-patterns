/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef TVSET_H
#define TVSET_H

#include <string>
#include "device.h"

class tv_set  : public device
{
public:
    virtual std::string test () const;
    
    virtual ~tv_set();
};


#endif
