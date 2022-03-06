/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef DEVICE_FACTORY_H
#define DEVICE_FACTORY_H

#include "device.h"


class device_factory 
{
    
protected:
    device_factory ();
    
    
public:
    static device_factory & getInstance (); 

    device_factory (const device_factory & orig) = delete;
    device_factory & operator= (const device_factory & orig) = delete;
    
    virtual device * produce () const = 0;
};


#endif
