/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef ANALOG_RECEIVER_H
#define ANALOG_RECEIVER_H

#include <string>
#include "receiver.h"


class analog_receiver : public receiver
{
public:
    virtual void receive (const std::string & news);    
};


#endif
