/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef RADIO_H
#define RADIO_H

#include <string>
#include "device.h"

class radio : public device 
{
public:
    virtual std::string test () const;
    virtual ~radio();
};

#endif
