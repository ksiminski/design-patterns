/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>
#include <sstream>

#include "visitor.h"
#include "name_printer.h"
#include "car.h"

std::string name_printer::visit(car& s)  const
{
   std::stringstream ss;
   ss << "car: " << s.getName();
   
   return ss.str();
}

std::string name_printer::visit(plane & s)  const
{
   std::stringstream ss;
   ss << "plane: " << s.getName();
   
   return ss.str();
}

