/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include "device_factory.h"
#include "radio_factory.h"
#include "device.h"
#include "radio.h"

device * radio_factory::produce() const
{
    return new radio();
}

device_factory & radio_factory::getInstance() 
{
    static radio_factory item;
    return item;
}

radio_factory::radio_factory()
{
}
