/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef LOAD_PRINTER_H
#define LOAD_PRINTER_H

#include <vector>
#include <string>

#include "visitor.h"

/** Load_printer is a visitor that visits objects and prints their load. */
class load_printer : public visitor
{
public:
    virtual std::string visit (plane & s) const;
    virtual std::string visit (car & s) const;
};

#endif 

