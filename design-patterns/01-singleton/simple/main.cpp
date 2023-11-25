/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <string>

#include "singleton.h"

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 


/**
Singleton in a CREATIONAL design pattern. It is responsible for hermetisation of creation of objects.
Singleton is responsible for controlling and maintainance of only one object of a class.
*/

int main()
{
   std::cout << "item 1" << std::endl;
   singleton & item_1 = singleton::getInstance(); // A new object is created.
   item_1.setValue(1);
   std::cout << item_1.getValue() << std::endl << std::endl;
   
   std::cout << "item 2" << std::endl;
   singleton & item_2 = singleton::getInstance(); // The object exists, a new object is not created. The method returns a reference to the existing object.
   item_2.setValue(2);
   std::cout << item_2.getValue() << std::endl << std::endl;
   
   std::cout << "values of items:" << std::endl;
   std::cout << "item 1" << std::endl;
   std::cout << item_1.getValue() << std::endl;
   std::cout << "item 2" << std::endl;
   std::cout << item_2.getValue() << std::endl;

   return 0;
}
