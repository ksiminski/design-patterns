/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "tv_set_factory.h"
#include "device.h"
#include "tv_set.h"


device * tv_set_factory::produce() const
{
    return new tv_set();
}
