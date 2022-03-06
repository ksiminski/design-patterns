/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include "remote_control.h"


remote_control::remote_control (device * p) : _pDevice (p)
{
}

int remote_control::getChannel () const 
{
    return _pDevice->getChannel();
}

int remote_control::getVolume () const 
{
    return _pDevice->getVolume();
}

void remote_control::setChannel (const int channel)
{
    _pDevice->setChannel(channel);
}

void remote_control::setVolume (const int volume)
{
    _pDevice->setVolume(volume);
}

std::string remote_control::test_device () const 
{
    return _pDevice->test ();
}

remote_control::~remote_control ()
{
    delete _pDevice;
}
