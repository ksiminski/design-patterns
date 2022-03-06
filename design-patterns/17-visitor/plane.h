/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef PLANE_H
#define PLANE_H

#include <vector>
#include <string>

#include "IVisitable.h"

class plane : public IVisitable 
{
protected:
    std::string _name;
public:
    void setName (const std::string & name);
    std::string getName() const ;
    
    /** Plane is visitable, it has to implement accept method to accept a visitor. */
    virtual std::string accept(const visitor & p);
};

#endif 
