/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "muting_remote.h"
#include "device.h"


muting_remote::muting_remote(device* p) : simple_remote (p)
{
}


void muting_remote::mute()
{
    old_volume = getVolume();
    setVolume(0);
}

void muting_remote::unmute()
{
    setVolume(old_volume);
}

muting_remote::~muting_remote()
{
}
