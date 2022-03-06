/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>
#include "parameters.h"
#include "service.h"
#include "security_system.h"


bool security_system::test (const parameters & p)
{
    if (not pSensor)
        return false;
    else
        return pSensor->serve(p);
}

security_system::security_system()
{
    pSensor = nullptr;
}

security_system::~security_system()
{
    if (pSensor)
        delete pSensor;
}

security_system::security_system(const security_system& orig)
{
    if (orig.pSensor)
        pSensor = orig.pSensor->clone();
    else 
        pSensor = nullptr;
}

security_system::security_system(security_system && orig)
{
    std::swap (pSensor, orig.pSensor);
}

security_system & security_system::operator=(const security_system& orig)
{
    if (this == & orig)
        return *this;
    
    if (pSensor)
        delete pSensor;

    if (orig.pSensor)
        pSensor = orig.pSensor->clone();
    else 
        pSensor = nullptr;
    
    return *this;
}


security_system & security_system::operator=(security_system && orig)
{
    if (this == & orig)
        return *this;
    
    std::swap (pSensor, orig.pSensor);
    
    return *this;
}

void security_system::add(const service & sensor)
{
    if (not pSensor)
        pSensor = sensor.clone();
    else
    {
        auto p = pSensor;
        pSensor = sensor.clone();
        pSensor->add(p);
    }
}

