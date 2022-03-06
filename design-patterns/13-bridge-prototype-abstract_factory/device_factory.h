/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef DEVICE_FACTORY_H
#define DEVICE_FACTORY_H

#include "device.h"


class device_factory 
{
public:
    virtual device * produce () const = 0;
};


#endif
