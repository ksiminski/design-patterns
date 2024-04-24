/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>

#include "beverage_machine.h"
#include "tea_machine.h"


std::string tea_machine::name()
{
   return "Tea";
}

void tea_machine::prepare_beverage()
{
   std::cout << "preparing tea: temperature: 98C, time: 180s" << std::endl;
}

