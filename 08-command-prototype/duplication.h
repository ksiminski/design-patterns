/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef DUPLICATION_H
#define DUPLICATION_H

#include <vector>
#include "command.h"

/** Duplicate command. All numbers in a container of numbers are doubled. */
class duplication : public command 
{
public:
   virtual void do_command (std::vector<double> & numbers) const;
   virtual void undo_command  (std::vector<double> & numbers) const;
   virtual command * clone () const;
   virtual ~duplication ();
};


#endif
