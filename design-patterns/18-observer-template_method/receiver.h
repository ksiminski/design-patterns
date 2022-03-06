/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef RECEIVER_H
#define RECEIVER_H

#include <string>

class receiver 
{
public:
    virtual void receive (const std::string & news) = 0;
};


#endif
