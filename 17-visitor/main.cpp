/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <string>
#include <vector>
 
#include "IVisitable.h"
#include "car.h"
#include "plane.h"

#include "load_printer.h"
#include "name_printer.h"

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 


/** Visitor is a BEHAVIOURAL design pattern. It aims at adding functionality to inmutable classes. A visitable class implements accept method that accepts visitors. A Visitor implements additional functionality. We can easily add new functionality to inmutable classes by implementing different visitor classes.


In our example we implement two visitors for vehicles. One of them is responsible for printing loads of vehicles, the other -- for printing names. You can easily implement more visitors. 

*/
int main()
{
    
    plane antonov;
    antonov.setName("antonov");
    
    plane messerschmidt;
    messerschmidt.setName("messerschmidt");
    
    car fiat;
    fiat.setName("fiat");
    fiat.setLoad(8.5);
    
    car star;
    star.setName("star");
    star.setLoad(45.6);
    

    std::vector<IVisitable *> vehicles { & antonov, & messerschmidt, & fiat, & star };
    
    load_printer load;
    for (auto p : vehicles)
        std::cout << p->accept(load) << std::endl;  // Each vehicle accepts a visitor that prints vehicle's load.
    
    name_printer name;    
    for (auto p : vehicles)
        std::cout << p->accept(name) << std::endl; // Each vehicle accepts a visitor that prints vehicle's name.

    return 0;
}
