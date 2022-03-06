/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef NAME_PRINTER_H
#define NAME_PRINTER_H

#include <vector>
#include <string>

#include "visitor.h"
#include "car.h"
#include "plane.h"

/** Name_printer is a visitor that visits objects and prints their names. */
class name_printer : public visitor
{
public:
    virtual std::string visit (plane & s) const;
    virtual std::string visit (car & s) const;
};

#endif 
