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
    previous_volume = getVolume();
    setVolume(0);
}

void muting_remote::unmute()
{
    setVolume(previous_volume);
}

muting_remote::~muting_remote()
{
}


muting_remote::muting_remote(const muting_remote& orig) : simple_remote (orig)
{
}

muting_remote::muting_remote(muting_remote && orig) : simple_remote (orig)
{
}

muting_remote & muting_remote::operator=(const muting_remote& orig)
{
    if (this == & orig)
        return *this;
    
    simple_remote::operator=(orig);
    
    return *this;
}

muting_remote & muting_remote::operator=(muting_remote && orig)
{
    if (this == & orig)
        return *this;
    
    simple_remote::operator=(orig);
    
    return *this;
}

remote_control * muting_remote::clone() const
{
    return new muting_remote (*this);
}
