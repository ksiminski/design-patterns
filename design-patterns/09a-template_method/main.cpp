/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>

#include "coffee_machine.h"
#include "tea_machine.h"

int main ()
{
   std::cout << "----------------------" << std::endl;
   tea_machine tea_macker;
   tea_macker.prepare();  // [PL] metoda szablonowa | [EN] template method
   std::cout << "----------------------" << std::endl;
   coffee_machine coffee_maker;
   coffee_maker.prepare(); // [PL] metoda szablonowa | [EN] template method
   std::cout << "----------------------" << std::endl;
   
   return 0; 
}

