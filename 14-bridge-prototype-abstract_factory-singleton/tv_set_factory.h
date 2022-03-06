/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef TV_SET_FACTORY_H
#define TV_SET_FACTORY_H

#include "device.h"
#include "device_factory.h"

class tv_set_factory : public device_factory 
{
public:
    static device_factory & getInstance (); 
    
protected:
    tv_set_factory ();
    
public:
    tv_set_factory (const tv_set_factory & orig) = delete;
    tv_set_factory & operator= (const tv_set_factory & orig) = delete;
    
    virtual device * produce () const;
};

#endif
