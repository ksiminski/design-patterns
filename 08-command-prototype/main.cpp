/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <string>
#include <vector>

#include "command.h"
#include "duplication.h"
#include "reversion.h"
#include "increment.h"
#include "sequence.h"
#include "negation.h"
#include "shift.h"

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 




void print (const std::vector<double> & numbers)
{
   for (const auto & l : numbers)
      std::cout << l << " ";
   std::cout << std::endl;
}

/** Command is a BEHAVIORAL desing pattern. It provides an interface for executing and reverting commands. */

int main()
{
   
   std::vector<double> numbers { 1, 2, 3, 4, 5 }; 
   
   // declarations of commands:
   duplication du;
   reversion   re;
   increment   in (3);
   negation    ne;
   shift       sh;
   
   // let's make a sequence of commands:
   sequence tasks_1;
   tasks_1.add_commands(du);
   tasks_1.add_commands(re);
   tasks_1.add_commands(in);
   tasks_1.add_commands(ne);
   tasks_1.add_commands(sh);
   
   // ... and execute commands for numbers:
   print(numbers);
   tasks_1.do_commands(numbers);
   print(numbers);   
   // .. reverse all commands:
   tasks_1.undo_commands(numbers);
   print(numbers);
   
   sequence tasks_2 (tasks_1);
   
   tasks_2.do_commands(numbers);
   print(numbers);
   
   tasks_2.add_commands(increment(5));
   tasks_2.do_commands(numbers);
   print(numbers);
   
   
   return 0;
}
