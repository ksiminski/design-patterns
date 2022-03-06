/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef THERMOMETER_H
#define THERMOMETER_H

#include "service.h"

class thermometer : public service
{
protected:
    double _minimal;
    double _maximal;
    
    virtual bool ok (const parameters & p) const;
public:
    thermometer (double minimal, double maximal); 
    thermometer (const thermometer & orig);
    thermometer (thermometer && orig);
    thermometer & operator =(const thermometer & orig);
    service & operator =(thermometer && orig);
    virtual ~thermometer ();
    
    virtual service * clone () const;
};

#endif
