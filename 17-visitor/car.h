/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef CAR_H
#define CAR_H

#include <vector>
#include <string>

#include "IVisitable.h"

class car : public IVisitable 
{
protected:
    std::string _name;
    double _load;
public:
    void setName (const std::string & name);
    std::string getName() const;

    void setLoad (const double load);
    double getLoad () const; 
    
    /** Car is visitable, it has to implement accept method to accept a visitor. */
    virtual std::string accept(const visitor& p);
};



#endif 
