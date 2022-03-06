/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>
#include "parameters.h"
#include "service.h"


void service::add(const service* p)
{
    if (pNext)
        delete pNext;
    
    pNext = p;        
}


void service::add (const service & p)
{
    if (pNext)
        delete pNext;
    
    pNext = p.clone();
}

/** This method is a Template method design pattern.
The method is only a skeleton of a method, because method "ok" is not implemented 
in this class. It is implemented in child classes. 
A method whose parts are impelemented by child classes is a template method. 
NB: it is not a template (a generic class)!
*/
bool service::serve (const parameters & p) const 
{
    if (not ok (p))
        return false;
    else if (pNext)
        return pNext->serve(p);
    else
        return true;
}

service::~service()
{
    if (pNext)
        delete pNext;
}

service::service()
{
    pNext = nullptr;
}

 

service::service(const service & orig)  
{
    if (orig.pNext)
        pNext = orig.pNext->clone();
    else
        pNext = nullptr;
}

service & service::operator=(service && orig)
{
    if (this == & orig)
        return *this;
    
    std::swap(pNext, orig.pNext);
    
    return *this;
}

service::service(service && orig)
{
    std::swap(pNext, orig.pNext);
}

service & service::operator=(const service& orig)
{
    if (this == & orig)
        return *this;
    
    delete pNext;
    pNext = orig.pNext->clone();
    
    return *this;
}
