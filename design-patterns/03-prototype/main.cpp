/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <iostream>

#include "zoo.h"
#include "sparrow.h"
#include "cat.h"
#include "dog.h"
#include "reptile.h"
#include "snake.h"


/** Prototype is a CREATIONAL design pattern. It is a very common pattern. It is responsible for copying of object. It creates a new object basing on an existing propotype.
This design pattern is very (very!) easy to implement.
 */

int main ()
{
    zoo garden;  
    
    sparrow birdy, twitty;
    dog rex, snoopy;
    reptile snaky;
    
    garden.add(birdy);
    garden.add(rex);
    garden.add(snaky);
    
    std::cout << "garden:" << std::endl;
    garden.print();
    std::cout << "-----------" << std::endl;
    
    std::cout << "part b:" << std::endl;
    zoo part_b (garden);
    part_b.print();
   
    part_b.add (twitty);
    std::cout << "-----------" << std::endl;
    part_b.print();
    
    std::cout << "-----------" << std::endl;
    std::cout << "garden:" << std::endl;
    garden.print();
    
    std::cout << "-----------" << std::endl;
    std::cout << "part c:" << std::endl;
    zoo part_c;
    part_c.add(snoopy);
    part_c.print();
    
    std::cout << "-----------" << std::endl;
    std::cout << "garden:" << std::endl;
    garden = part_c;
    garden.print();
    
    return 0;
}

