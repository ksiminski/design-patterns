/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef RADIOMETER_H
#define RADIOMETER_H

#include "service.h"

class radiometer : public service
{
protected:
    double _maximal;
    virtual bool ok (const parameters & p) const;
public:
    radiometer (double maksymalna); 
    radiometer (const radiometer & orig);
    radiometer (radiometer && orig);
    radiometer & operator = (const radiometer & orig);
    radiometer & operator = (radiometer && orig);
    virtual ~radiometer ();
    
    virtual service * clone () const;
};

#endif 
