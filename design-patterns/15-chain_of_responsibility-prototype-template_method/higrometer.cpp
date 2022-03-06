/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>
#include "parameters.h"
#include "service.h"
#include "higrometer.h"


higrometer::higrometer(double minimal) : _minimal (minimal)
{
}

bool higrometer::ok (const parameters & p) const 
{
    return p.humidity > _minimal;
}

higrometer::~higrometer()
{
}

higrometer::higrometer(const higrometer & orig) : service (orig)
{
    _minimal = orig._minimal;
}


higrometer::higrometer(higrometer && orig) : service (orig)
{
    std::swap(_minimal, orig._minimal);
}

higrometer & higrometer::operator=(const higrometer & orig)
{
    if (this == & orig)
        return *this;
    
    service::operator=(orig);
    _minimal = orig._minimal;
    
    return *this;
}

higrometer & higrometer::operator=(higrometer && orig)
{
    if (this == & orig)
        return *this;
    
    service::operator=(orig);
    std::swap(_minimal, orig._minimal);
    
    return *this;
}

service * higrometer::clone() const
{
    return new higrometer (*this);
}
