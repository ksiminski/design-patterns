/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef RADIO_H
#define RADIO_H

#include <string>
#include "sender.h"

class radio : public sender
{
public:
    radio (const std::string & name);
    radio (const radio & orig);
    virtual std::string set_header () const;
};

#endif
