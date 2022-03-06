/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef PROXY_H
#define PROXY_H

#include <vector>
#include <iostream>

#include "command.h"

/** Proxy for debuging commands. It implement the command interface and add some new functionality. It is a proxy for a command passed in a constructor. It prints values of numbers before and after executing or reverting a command.  */
class proxy : public command 
{
protected:
   command * pCommand = nullptr; 
   
   /** The method prints numbers to an output stream. */
   void print (std::ostream & s, std::vector<double> & numbers) const;
public:
    
   proxy (const command & com);
   proxy (const proxy & wzor);
   proxy (proxy && wzor);
   proxy & operator= (const proxy & wzor);
   proxy & operator= (proxy && wzor);
   virtual ~proxy ();
 
   virtual void do_command (std::vector<double> & numbers) const;
   virtual void undo_command  (std::vector<double> & numbers) const;
   virtual command * clone () const;
   
};


#endif
