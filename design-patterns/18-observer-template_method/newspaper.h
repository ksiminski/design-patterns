/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef NEWSPAPER_H
#define NEWSPAPER_H

#include <string>
#include "sender.h"

class newspaper : public sender
{
public:
    newspaper (const std::string & name);
    newspaper (const newspaper & orig); 
    virtual std::string set_header () const;
};
#endif
