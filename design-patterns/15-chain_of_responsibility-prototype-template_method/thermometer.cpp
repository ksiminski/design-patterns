/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <vector>
#include "parameters.h"
#include "service.h"
#include "thermometer.h"



bool thermometer::ok (const parameters & p) const
{
    return (p.temperature < _maximal and p.temperature > _minimal);    
}

thermometer::thermometer(double minimal, double maximal) : service (), _minimal (minimal), _maximal (maximal)
{
}

thermometer::thermometer(const thermometer& orig) : service (orig), _minimal (orig._minimal), _maximal (orig._maximal)
{
}

thermometer::thermometer(thermometer && orig) : service (orig)
{
    std::swap(_minimal,  orig._minimal);
    std::swap(_maximal, orig._maximal);
}

thermometer::~thermometer()
{
}


thermometer & thermometer::operator=(const thermometer& orig)
{
    if (this == & orig)
        return *this;
    
    service::operator=(orig);
    _minimal = orig._minimal;
    _maximal = orig._maximal;
    
    return *this;
}

service & thermometer::operator=(thermometer && orig)
{
    if (this == & orig)
        return *this;
    
    service::operator=(orig);
    std::swap(_minimal,  orig._minimal);
    std::swap(_maximal, orig._maximal);
    
    return *this;
}

service * thermometer::clone() const
{
    return new thermometer (*this);
}

