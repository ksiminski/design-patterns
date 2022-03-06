/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include "device_factory.h"
#include "tv_set_factory.h"
#include "device.h"
#include "tv_set.h"


device * tv_set_factory::produce() const
{
    return new tv_set();
}


device_factory & tv_set_factory::getInstance() 
{
    static tv_set_factory egzemplarz;
    return egzemplarz;
}

tv_set_factory::tv_set_factory()
{
}
