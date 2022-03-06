/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "radio_factory.h"
#include "device.h"
#include "radio.h"

device * radio_factory::produce() const
{
    return new radio();
}
