/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H

#include <string>
#include "device.h"

class remote_control 
{
protected:
    device * _pDevice = nullptr;
    
    int getChannel () const;
    void setChannel (const int channel);
    
    int getVolume () const;
    void setVolume (const int volume);
    
    
public:
    remote_control (device * p);
    std::string test_device () const; 
    virtual ~remote_control () ;
    
    remote_control (const remote_control & orig); 
    remote_control (remote_control && orig);
    remote_control & operator = (const remote_control & orig);
    remote_control & operator = (remote_control && orig);
    
    virtual remote_control * clone () const = 0;
    
};

#endif
