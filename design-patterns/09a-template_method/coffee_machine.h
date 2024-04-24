/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef COFFEE_MACHINE_H
#define COFFEE_MACHINE_H

#include "beverage_machine.h" 

class coffee_machine : public beverage_machine
{
  
protected:
  std::string name() override;
  void prepare_beverage() override;  
   
};


#endif
