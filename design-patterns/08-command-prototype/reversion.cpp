/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>
#include <algorithm>

#include "command.h"
#include "reversion.h"


void reversion::do_command (std::vector<double> & numbers) const
{
   std::reverse(numbers.begin(), numbers.end());
}
void reversion::undo_command (std::vector<double> & numbers) const
{
   do_command(numbers);
}
command * reversion::clone () const 
{
   return new reversion (*this);
}
reversion::~reversion()
{
}
