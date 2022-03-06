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
    void setChannel (const int program);
    
    int getVolume () const;
    void setVolume (const int glosnosc);
    
    
public:
    remote_control (device * p);
    std::string test_device () const; 
    virtual ~remote_control () ;
    
};

#endif
