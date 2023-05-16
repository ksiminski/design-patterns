/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <string>
#include <chrono>
#include <random>

#include "sorter.h"
#include "mergesort.h"
#include "selection-sort.h" 

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

 

void fill (int * tab, const int SIZE)
{
   std::default_random_engine engine;
   engine.seed (std::chrono::system_clock::now().time_since_epoch().count());
   std::uniform_int_distribution<int> distro (0, 100);
   
   for (int i = 0; i < SIZE; i ++)
      tab[i] = distro(engine);
}

void print (int * tab, const int SIZE, std::ostream & str)
{
   for (int i = 0; i < SIZE; i++)
      str << tab[i] << " ";
   str << std::endl;
}

/** Here we use stategy design pattern here. The function use a top class in class hierarchy. We may use any class in the hierarchy. The method will not even notice it. */
void transform (sorter & s)
{
   const int SIZE = 10;
   int tab [SIZE];
   
   fill(tab, SIZE);
   print (tab, SIZE, std::cout);
   s.sort(tab, 0, SIZE - 1);   
   print (tab, SIZE, std::cout);
}

/**
Stategy is a BEHAVIORAL desing pattern. It is the simplest desing pattern. It is used very often and is completely based on polymorphism. To be honest it is the basic application of polymorphism. 

This is a practical application of dependence inversion principle (SOLID). Classes and methods do not use concrete classes -- they use an interface instead. Each version (strategy) of an algorithm is implemented in a separated class.
*/

int main ()
{
   mergesort      mer;  // O(n log n)
   selection_sort sel;  // O(n²)
    
   transform(mer);  // Here we use mergesort as a sorter.
   
   std::cout << std::endl;
   
   transform(sel);  // Here we use selection sort as a sorter.
   
   // You can easily add some more classes implementing the sorter interface. It is an advantage of the stategy design pattern.
   
   return 0; 
}

