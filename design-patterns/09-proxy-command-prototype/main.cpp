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
#include "proxy.h"

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 




void print (const std::vector<double> & numbers)
{
   for (const auto & l : numbers)
      std::cout << l << " ";
   std::cout << std::endl;
}

/** Proxy is a BEHAVIORAL desing pattern. It provides a class with different functionality byt the same interface. A proxy class can easily mimic other classes. Proxies may be used to limit access to classes, to provide a surrogates for object whose construction takes long time or is very expensive, to represents object from far address space, to implement smart pointers etc. 
In this example we use a proxy to debug other commands. 
*/

int main()
{
   
   std::vector<double> numbers { 1, 2, 3, 4, 5 }; 
   
   // definition of commands:
   duplication du;
   reversion   re;
   increment   in (3);
   negation    ne;
   shift       sh;
   
   // definitions of proxies:
   proxy       du_proxy (du); // for duplication
   proxy       sh_proxy (sh); // for shift
   
   
   sequence tasks_1;
   tasks_1.add_commands(du_proxy);
   tasks_1.add_commands(re);
   tasks_1.add_commands(in);
   tasks_1.add_commands(ne);
   tasks_1.add_commands(sh_proxy);
   
   print(numbers);
   tasks_1.do_commands(numbers);
   print(numbers);   
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
