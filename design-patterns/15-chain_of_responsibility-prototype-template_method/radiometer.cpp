/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>
#include "parameters.h"
#include "service.h"
#include "radiometer.h"



bool radiometer::ok (const parameters & p) const
{
    return (p.radiation < _maximal);
}

radiometer::radiometer (double maksymalna) : _maximal(maksymalna)
{
}

radiometer::radiometer (const radiometer & orig) : service (orig)
{
    _maximal = orig._maximal;
}

radiometer::radiometer (radiometer && orig) : service (orig)
{
    std::swap (_maximal, orig._maximal);
}

radiometer & radiometer::operator = (const radiometer & orig)
{
    if (this == &orig)
       return *this;
    
    service::operator = (orig);
    _maximal = orig._maximal;
    
    return *this;
}

radiometer & radiometer::operator = (radiometer && orig)
{
    if (this == &orig)
       return *this;
    
    service::operator = (orig);
    std::swap (_maximal, orig._maximal);
    
    return *this;
}

service * radiometer::clone() const
{
    return new radiometer (*this);
}

radiometer::~radiometer()
{
}
