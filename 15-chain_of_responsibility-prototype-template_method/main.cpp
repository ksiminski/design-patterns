/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <sstream>
#include <string>
#include <chrono>
#include <random>
#include <vector>

 

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

#include "parameters.h"
#include "service.h"
#include "thermometer.h"
#include "higrometer.h"
#include "radiometer.h"
#include "security_system.h"

/** The chain of responsibility is a design pattern based on a singly linked list. 
Each item represents one responsibility. A set of parameter is passed and analysed by the chain. If any item raises alert the whole chain raises alert.
unfortunately it is not a very reliable pattern. 

In this example we use one more design pattern: template method, cf. service::serve method.
*/

int main ()
{
    
   thermometer T1 (30, 50);
   radiometer  G1 (230);
   higrometer  H1 (45);
   
   security_system securitas;
   
   securitas.add(T1);
   securitas.add(G1);
   
   std::vector<parameters> measurements  { { 40, 100, 60 }, 
                                           { 40, 500, 60 },
                                           { 25, 100, 60 },
                                           { 40, 200, 45 }
                                          };
                                   
   std::cout << "securitas" << std::endl;
   for (auto & m : measurements)
   {
        if (securitas.test(m))
            std::cout << "OK" << std::endl;
        else
            std::cout << "ALERT" << std::endl;
   }
   
   std::cout << std::endl;
   
   
   std::cout << "security" << std::endl;
   security_system security (securitas);
   
   security.add(H1);
   
   for (auto & m : measurements)
   {
        if (security.test(m))
            std::cout << "OK" << std::endl;
        else
            std::cout << "ALERT" << std::endl; // unfortunately we do not know which detector raised an alert
   }
    
   return 0; 
}

