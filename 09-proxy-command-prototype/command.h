/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/
#ifndef COMMAND_H
#define COMMAND_H

#include <vector>

/** Abstract class declaring an interface for a command. */
class command
{
   
public: 
   /** Execute a command. */ 
   virtual void do_command (std::vector<double> & numbers) const = 0;
   /** Revert a command. */
   virtual void undo_command  (std::vector<double> & numbers) const = 0;
   
   virtual command * clone () const = 0;  ///< prototype design pattern 
   virtual ~command () {}
};



#endif
