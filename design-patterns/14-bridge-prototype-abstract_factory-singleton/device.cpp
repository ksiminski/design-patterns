/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <sstream>
#include "device.h"

int device::getVolume() const
{
    return _volume;
}

int device::getChannel() const
{
    return _channel;
}

void device::setGlosnosc(const int volume) 
{
    _volume = volume;
}

void device::setChannel(const int channel)
{
    _channel = channel;
}

std::string device::test() const 
{
    std::stringstream ss;
    ss << "volume: " << _volume << std::endl;
    ss << "channel:  " << _channel  << std::endl;
    
    return ss.str();
}

device::~device()
{
}



