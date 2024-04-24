/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef BEVERAGE_MACHINE_H
#define BEVERAGE_MACHINE_H

#include <string>

class beverage_machine
{
 public:
   void prepare ();
 protected:
   void heat_cup();
   void heat_water ();
   virtual void prepare_beverage() = 0;
   void serve();
   virtual std::string name() = 0;

};


#endif
