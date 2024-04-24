/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef TEA_MACHINE_H
#define TEA_MACHINE_H

#include "beverage_machine.h" 

class tea_machine : public beverage_machine
{
  
protected:
  std::string name() override;
  void prepare_beverage() override;   
};


#endif
