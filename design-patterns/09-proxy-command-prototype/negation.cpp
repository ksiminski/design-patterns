/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>

#include "command.h"
#include "negation.h"

void negation::do_command (std::vector<double> & numbers) const
{
   for (auto & l : numbers)
      l *= -1;
}
void negation::undo_command  (std::vector<double> & numbers) const
{
   for (auto & l : numbers)
      l *= -1;
}

command * negation::clone () const 
{
   return new negation (*this);
}

negation::~negation ()
{
}
