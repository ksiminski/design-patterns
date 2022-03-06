/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <vector>


#include "sender.h"
#include "receiver.h"


sender::sender(const std::string& name) : _name (name)
{
}

sender::sender(const sender& orig)
{
    _name = orig._name;
}

void sender::send(const std::string& body) const
{
    std::string news = set_header () + body; // set_header not implemented in this class! 
    for (auto p : subscribers)
        p->receive (news);
    
}


void sender::accept_subscription(receiver * p)
{
    subscribers.push_back(p);
}
