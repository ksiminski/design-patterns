/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#include <string>
#include <sstream>

#include "visitor.h"
#include "load_printer.h"
#include "car.h"

std::string load_printer::visit(car& s)  const
{
   std::stringstream ss;
   ss << "car: " << s.getLoad();
   
   return ss.str();
}

std::string load_printer::visit(plane& s) const
{
   std::stringstream ss;
   ss << "Plane has no load.";
   
   return ss.str();
}



 
