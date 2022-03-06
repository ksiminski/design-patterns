/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef INCREMENT_H
#define INCREMENT_H

#include <vector>
#include "command.h"

/** Increment command. All numbers in a container of numbers are incremented. */
class increment : public command
{
   double _value;
public:
   virtual void do_command (std::vector<double> & liczby) const;
   virtual void undo_command  (std::vector<double> & liczby) const;
   increment (const double value);
   virtual command * clone () const;
   virtual ~increment();
};


#endif
