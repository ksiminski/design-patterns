/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>
#include <iostream>

#include "zoo.h"

zoo::zoo ()
{
}

zoo::~zoo ()
{
   for (std::size_t i = 0; i < animals.size(); i++)
       delete animals[i];

}

/** Copy constructor. It has to copy all animals, but it does not know what animals there are in the zoo. 
It uses clone method of each animal to copy the animal. There is no need to test what is the class of each object -- do not use RTTI here! Use the prototype desing pattern! You can very easily extend the hierarchy and add new classes for animals without any modification of existing classes. Try to add a new animal to the hierarchy and see what files will be recompiled. Watch the open-closed principle in practice!
 */
zoo::zoo (const zoo & orig)
{
   for (std::size_t i = 0; i < orig.animals.size(); i++)
       animals.push_back(orig.animals[i]->clone());  // Here we use the prototype!
}

zoo & zoo::operator= (const zoo & orig)
{
   if (this == & orig)
      return *this;

   // remove what is to remove
   for (std::size_t i = 0; i < animals.size(); i++)
       delete animals[i];
   animals.clear();

   // allocate what is to allocate
   for (std::size_t i = 0; i < orig.animals.size(); i++)
       animals.push_back(orig.animals[i]->clone());  // Here we use the prototype!

   return *this;
}

zoo::zoo (zoo && orig)
{
   // swap what is to swap
   std::swap (animals, orig.animals);
}

zoo & zoo::operator= (zoo && orig)
{
   if (this == & orig)
      return *this;


   // swap what is to swap
   std::swap (animals, orig.animals);

   return *this;
}


void zoo::add(const animal& a)
{
    animals.push_back(a.clone());  // Here we use the prototype!
}


void zoo::print()
{
    for (const auto p : animals)
        std::cout << p->get_species() << std::endl;
}
