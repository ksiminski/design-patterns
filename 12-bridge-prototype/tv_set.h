/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef TV_SET_H
#define TV_SET_H

#include <string>
#include "device.h"

class tv_set  : public device
{
public:
    virtual std::string test () const;
    virtual device * clone () const;
    virtual ~tv_set();
};


#endif
