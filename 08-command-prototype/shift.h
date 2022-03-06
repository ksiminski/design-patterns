/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef SHIFT_H
#define SHIFT_H

#include <vector>
#include "command.h"

/** Shift command. Numbers in a sequence are shifted left. */
class shift : public command 
{
protected:
    
public:
   virtual void do_command (std::vector<double> & numbers) const;
   virtual void undo_command  (std::vector<double> & numbers) const;
   virtual command * clone () const;
   virtual ~shift ();
};


#endif
