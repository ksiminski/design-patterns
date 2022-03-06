/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef NEGATION_H
#define NEGATION_H

#include <vector>
#include "command.h"

/** Duplicate command. All numbers in a container of numbers are negated. */
class negation : public command 
{
public:
   virtual void do_command (std::vector<double> & numbers) const;
   virtual void undo_command  (std::vector<double> & numbers) const;
   virtual command * clone () const;
   virtual ~negation ();
};


#endif
