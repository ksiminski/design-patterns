/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "device.h"
#include "remote_control.h"
#include "simple_remote.h"


simple_remote::simple_remote(device* p) : remote_control (p)
{
}


void simple_remote::volume_up()
{
    setVolume(getVolume() + 1);
}

void simple_remote::volume_down()
{
    setVolume(getVolume() - 1);
}

void simple_remote::channel_up()
{
    setChannel(getChannel() + 1);
}

void simple_remote::channel_down()
{
    setChannel(getChannel() - 1);
}

simple_remote::~simple_remote()
{
}

simple_remote::simple_remote(const simple_remote& orig) : remote_control (orig)
{
}

simple_remote & simple_remote::operator=(const simple_remote& orig)
{
    if (this == & orig)
        return *this;
    
    remote_control::operator=(orig);
        
    return *this;
}

simple_remote::simple_remote(simple_remote && orig) : remote_control (orig)
{
}

simple_remote & simple_remote::operator=(simple_remote && orig)
{
    if (this == & orig)
        return *this;
    
    remote_control::operator=(orig);
        
    return *this;
}

remote_control * simple_remote::clone() const
{
    return new simple_remote (*this);
}


