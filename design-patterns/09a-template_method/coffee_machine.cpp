/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <iostream>

#include "beverage_machine.h" 
#include "coffee_machine.h"


std::string coffee_machine::name()
{
   return "Coffee";
}

void coffee_machine::prepare_beverage()
{
   std::cout << "preparing coffee: pressure: 2 MPa, temperature: 90C, time: 25 s" << std::endl;
}

 
