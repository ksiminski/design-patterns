/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef HIGROMETER_H
#define HIGROMETER_H

#include "service.h"

class higrometer : public service
{
protected:
    double _minimal;
    virtual bool ok (const parameters & p) const;
    
public:
    higrometer (double minimal);
    higrometer (const higrometer & orig);
    higrometer (higrometer && orig);
    higrometer & operator =(const higrometer & orig);
    higrometer & operator =(higrometer && orig);
    virtual ~higrometer ();
    
    virtual service * clone () const;
};


#endif
