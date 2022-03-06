/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include "list.h"
 

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

/** Iterator is a common BEHAVIOURAL design pattern that enables iteration through all items in a collection.

In our example we have a simple singly linked list with a basic iterator. */ 

int main ()
{
   list<int> l;
   
   for (int i : { 4, 7 ,1 ,4 ,8, 9 })
       l.push_front(i);
   
   std::cout << "size: " << l.size() << std::endl;
   
   for (list<int>::iterator it = l.begin(); it != l.end(); it++)
       std::cout << *it << " ";
   std::cout << std::endl;

   for (auto it = l.begin(); it != l.end(); ++it)
       std::cout << *it << " ";
   std::cout << std::endl;
   
   // This syntax also works:   :-) 
   for (auto & i : l)
       std::cout << i << " ";
   std::cout << std::endl;
   
   int value = -1;    
   while (l.size() > 0) 
   {
       value = l.pop_front();
       std::cout << value << " ";
   } 
   
   std::cout << std::endl;
   
   std::cout << "size: " << l.size() << std::endl;
     
   
   return 0; 
}

