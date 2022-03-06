/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef SIMPLE_REMOTE_H
#define SIMPLE_REMOTE_H

#include "device.h"
#include "remote_control.h"

class simple_remote : public remote_control
{
    
public:
    void volume_up ();
    void volume_down ();
    void channel_up ();
    void channel_down ();
    
    simple_remote (device * p);
    simple_remote (const simple_remote & orig); 
    simple_remote (simple_remote && orig);
    simple_remote & operator = (const simple_remote & orig);
    simple_remote & operator = (simple_remote && orig);
    
    virtual remote_control * clone () const;
    
    virtual ~simple_remote ();
};

#endif
