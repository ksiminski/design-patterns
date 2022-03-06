/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>

#include "sequence.h"
#include "command.h"


sequence::sequence (){}
sequence::sequence (const sequence & orig)
{
   for (auto com : orig.commands)
      commands.push_back(com->clone());
}

sequence::sequence (sequence && orig)
{
   std::swap (commands, orig.commands);
}

sequence::~sequence ()
{
   for (auto & p : commands)
      delete p;
}

sequence & sequence::operator = (const sequence & orig)
{
   if (this == &orig)
      return *this;
   
   for (auto & p : commands)
      delete p;
   
   commands.clear();
   
   for (auto com : orig.commands)
      commands.push_back(com->clone());
   
   return *this;
}

sequence & sequence::operator = (sequence && orig)
{
   if (this == &orig)
      return *this;
   
   std::swap (commands, orig.commands);
   
   return *this;
}

void sequence::add_commands (const command & com)
{
   commands.push_back(com.clone());
}

void sequence::do_commands (std::vector<double> & liczby)
{
   for (auto it = commands.begin(); it != commands.end(); it++)
      (*it)->do_command(liczby);
}

void sequence::undo_commands (std::vector<double> & liczby)
{
   for (auto it = commands.rbegin(); it != commands.rend(); it++)
      (*it)->undo_command(liczby);
}
   
