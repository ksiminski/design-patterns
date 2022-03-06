/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
 
#include "sign.h"
#include "mandatory_sign.h"
#include "prohibitory_sign.h"
#include "guide_sign.h"
#include "set_signs.h"

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 


/** The flyweight design pattern is used to manage numerous instances of the same object. Sometimes it is expensive to store multiple copies of the same object. The flyweight stores only one instance of each object and makes is easier for us to use them. 

In this example we have a set of road signs. There are only several (a few dozens) of signs. But there is a huge number of instances of sign in roads. Here we use the flyweight to handle signs. Each sign is constructed only once and then it may be used in various contexts (always the same object). */

int main()
{
    set_signs signs_in_Poland;
    
    // the pool of objects:
    signs_in_Poland.add_sign(std::string ("C-5"), new mandatory_sign (std::string ("C-5")));   // Straight ahead only
    signs_in_Poland.add_sign(std::string ("C-14"), new mandatory_sign (std::string ("C-14")));  // Minimum speed
    signs_in_Poland.add_sign(std::string ("C-12"), new mandatory_sign (std::string ("C-12")));  // Roundabout 
    
    signs_in_Poland.add_sign(std::string ("B-2"), new prohibitory_sign (std::string ("B-2")));   // no entry
    signs_in_Poland.add_sign(std::string ("B-20"), new prohibitory_sign (std::string ("B-20")));  // stop
    signs_in_Poland.add_sign(std::string ("B-29"), new prohibitory_sign (std::string ("B-29")));  // No use of horns
   
    signs_in_Poland.add_sign(std::string ("E-1"), new guide_sign (std::string ("E-1"), std::string ("Akademicka - Banacha")));  // Advanced direction sign
    signs_in_Poland.add_sign(std::string ("E-2b"), new guide_sign (std::string ("E-2b"), std::string ("Poznan (19)")));  // Direction sign


    std::vector<sign *> Akademicka;
    Akademicka.push_back (signs_in_Poland.get_sign(std::string("C-5"))); // the same object here ...
    Akademicka.push_back (signs_in_Poland.get_sign(std::string("E-1")));
    Akademicka.push_back (signs_in_Poland.get_sign(std::string("C-12")));
    Akademicka.push_back (signs_in_Poland.get_sign(std::string("B-29")));
    
    
    std::vector<sign *> Banach;
    Banach.push_back (signs_in_Poland.get_sign(std::string("C-5"))); // ... and here
    Banach.push_back (signs_in_Poland.get_sign(std::string("B-29")));
    Banach.push_back (signs_in_Poland.get_sign(std::string("C-12")));
    Banach.push_back (signs_in_Poland.get_sign(std::string("E-2b")));
    
    std::cout << "signs in Akademicka street" << std::endl;
    for (auto p : Akademicka)
        std::cout << p->to_string() << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "signs in Banach street" << std::endl;
    for (auto p : Banach)
        std::cout << p->to_string() << std::endl;
    
    
        
    
    return 0;
}
