/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef VISITOR_H
#define VISITOR_H

#include <string>
//#include "plane.h"
//#include "car.h"

class car;
class plane;

class visitor 
{
public:
    virtual std::string visit (plane & s) const = 0;
    virtual std::string visit (car & s) const  = 0;
};
	

#endif 
