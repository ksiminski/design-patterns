/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <iostream>

#include "beverage_machine.h" 

void beverage_machine::heat_water()
{
   std::cout << "water heated" << std::endl;
}

void beverage_machine::prepare()
{
   heat_cup();
   heat_water();
   prepare_beverage();
   serve();
}

void beverage_machine::heat_cup()
{
   std::cout << "cup heated" << std::endl;
}

void beverage_machine::serve()
{
   std::cout << name() << " is served." << std::endl;
}


