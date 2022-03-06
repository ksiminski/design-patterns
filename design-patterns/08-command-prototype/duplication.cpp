/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>

#include "command.h"
#include "duplication.h"

void duplication::do_command (std::vector<double> & numbers) const
{
   for (auto & l : numbers)
      l *= 2;
}
void duplication::undo_command  (std::vector<double> & numbers) const
{
   for (auto & l : numbers)
      l *= 0.5;
}

command * duplication::clone () const 
{
   return new duplication (*this);
}

duplication::~duplication ()
{
}
