/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SENDER_H    
#define SENDER_H    

#include <string>
#include <vector>
#include "receiver.h"

class sender 
{
protected:
    std::string _name;
    std::vector<receiver *> subscribers; 
    void send_to_subscribers (const std::string & body);
public:
    void accept_subscription (receiver * p);
    sender (const std::string & name);
    sender (const sender & orig); 
    virtual std::string set_header () const = 0;
    void send (const std::string & body) const;  // template method design pattern
};

#endif 
