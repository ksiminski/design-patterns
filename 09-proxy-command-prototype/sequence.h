/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <vector>
#include "command.h"

/** Class representing a sequence of commands. */
class sequence
{
   std::vector<command *> commands;
   
public:
   sequence ();
   sequence (const sequence & orig);
   sequence (sequence && orig);
   ~sequence ();
   sequence & operator = (const sequence & orig);
   sequence & operator = (sequence && orig);
   void add_commands (const command & com);
   /** Execute all commands. */
   void do_commands (std::vector<double> & numbers);
   /** Revert all commands. */
   void undo_commands (std::vector<double> & numbers);
};

#endif
