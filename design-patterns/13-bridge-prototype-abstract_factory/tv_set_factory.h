/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef FABRYKA_TV_SET_H
#define FABRYKA_TV_SET_H

#include "device.h"
#include "device_factory.h"

class tv_set_factory : public device_factory 
{
public:
    virtual device * produce () const;
};

#endif
