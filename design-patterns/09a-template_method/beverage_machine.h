/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef BEVERAGE_MACHINE_H
#define BEVERAGE_MACHINE_H

#include <string>


// [PL] Wzorzec projektowy metoda szablonowa nie ma zwiazku z szablonami metod w C++.
// [EN] The template method design pattern has nothing in common with method templates in C++.

class beverage_machine
{
 public:
   // [PL] Metoda szablonowa wywołuje inne metody. Wsrod nich sa metody abstrakcyjne,
   //      ktore sa zaimplementowane w klasach pochodnych. Metoda szablonowa
   //      okresla wykonanie algorytmu, a szczegoly tego algorytmu 
   //      sa implementowane w odpowiednich metodach klas pochodnych.
   // [EN] The template method call other methods. Some of them are abstract.
   //      They are implemented in child classes. The template method states 
   //      a general scheme of the algorithm whose detailes are implemented 
   //      by methods of child classes.
   void prepare (); 

 protected:
   void heat_cup();
   void heat_water ();
   virtual void prepare_beverage() = 0; // [PL] Metoda bedzie zaimplementowana przez klasy pochodne. | [EN] The method will be impelemented by child classes.
   virtual std::string name() = 0; // [PL] Metoda bedzie zaimplementowana przez klasy pochodne. | [EN] The method will be impelemented by child classes.
   
   // [PL] To jest druga metoda szablonowa w tym przykladzie. Korzysta z metody name, ktora jest zaimplementowana w klasach pochodnych.
   // [EN] The second template method in this example. It call the name() method that is implemented by child classes.
   void serve();

};


#endif
