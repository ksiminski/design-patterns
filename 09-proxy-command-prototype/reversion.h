/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef REVERSION_H
#define REVERSION_H

#include <vector>
#include "command.h"

/** Duplicate command. The sequence of numbers is reversed. */
class reversion : public command 
{
public:
   virtual void do_command (std::vector<double> & numbers) const;
   virtual void undo_command  (std::vector<double> & numbers) const;
   virtual command * clone () const;
   virtual ~reversion();
};

#endif
