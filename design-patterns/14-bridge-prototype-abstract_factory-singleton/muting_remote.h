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
    int previous_volume;
public:
    void mute ();
    void unmute ();
    
    muting_remote (device * p);
    virtual ~muting_remote ();
    
    muting_remote (const muting_remote & orig); 
    muting_remote (muting_remote && orig);
    muting_remote & operator = (const muting_remote & orig);
    muting_remote & operator = (muting_remote && orig);
    
    virtual remote_control * clone () const;
};

#endif
