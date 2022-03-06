/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef RSS_READER_H
#define RSS_READER_H

#include <string>
#include "receiver.h"

class rss_reader : public receiver
{
public:
    virtual void receive (const std::string & news);    
};



#endif
