/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef RADIO_FACTORY_H
#define RADIO_FACTORY_H

#include "device_factory.h"


class radio_factory : public device_factory 
{
public:
    static device_factory & getInstance ();
    
protected:
    radio_factory ();
    
public:
    radio_factory (const radio_factory & orig) = delete;
    radio_factory & operator= (const radio_factory & orig) = delete;
    
    virtual device * produce () const;
};


#endif
