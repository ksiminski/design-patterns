/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>

#include "command.h"
#include "increment.h"

void increment::do_command (std::vector<double> & numbers) const
{
   for (auto & l : numbers)
      l += _value;
}
void increment::undo_command  (std::vector<double> & numbers) const
{
   for (auto & l : numbers)
      l -= _value;
}
increment::increment (const double value) : _value (value)
{  
}
command * increment::clone () const 
{
   return new increment (*this);
}
increment::~increment()
{
}   

