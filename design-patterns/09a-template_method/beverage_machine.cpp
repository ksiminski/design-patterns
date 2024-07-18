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

// [PL] Metoda szablonowa wywołuje metody zaimplementowane w klasach pochodnych.
// [EN] The template method calls methods implemented in child classes.
void beverage_machine::prepare()
{
   heat_cup();
   heat_water();
   prepare_beverage(); // [PL] Metoda bedzie zaimplementowana przez klasy pochodne. | [EN] The method will be impelemented by child classes.
   serve();
}

void beverage_machine::heat_cup()
{
   std::cout << "cup heated" << std::endl;
}

// [PL] Metoda szablonowa wywołuje metody zaimplementowane w klasach pochodnych.
// [EN] The template method calls methods implemented in child classes.
void beverage_machine::serve()
{
   // [PL] Metoda name() bedzie zaimplementowana przez klasy pochodne. 
   // [EN] The method name() will be impelemented by child classes.
   std::cout << name() << " is served." << std::endl;
}


