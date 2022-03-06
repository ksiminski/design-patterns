/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef MUTING_REMOTE_H
#define MUTING_REMOTE_H

#include "simple_remote.h"
#include "device.h"
 
class muting_remote : public simple_remote 
{
protected:
    int old_volume;
public:
    void mute ();
    void unmute ();
    
    muting_remote (device * p);
    muting_remote (const muting_remote & orig) = delete;
    virtual ~muting_remote ();
};

#endif
