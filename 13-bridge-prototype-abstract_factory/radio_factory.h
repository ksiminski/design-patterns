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
    virtual device * produce () const;
};


#endif
