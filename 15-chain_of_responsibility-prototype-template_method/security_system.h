/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SECURITY_SYSTEM_H
#define SECURITY_SYSTEM_H

#include "service.h"

class security_system
{
protected:
    service * pSensor = nullptr;
public:
    bool test (const parameters & p);
    void add (const service & sensor);
    
    security_system ();
    security_system (const security_system & orig);
    security_system (security_system && orig);
    security_system & operator = (const security_system & orig);
    security_system & operator = (security_system && orig);
    virtual ~security_system ();
};

#endif
