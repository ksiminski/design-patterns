/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>

#include "animal.h"
#include "mammal.h"

mammal::mammal ()
{
}

mammal::~mammal ()
{
   // delete what is to delete

}

mammal::mammal (const mammal & orig) : animal(orig)
{
   // copy what is to copy

}

mammal & mammal::operator= (const mammal & orig)
{
   if (this == & orig)
      return *this;

   animal::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

mammal::mammal (mammal && orig) : animal(orig)
{
   // swap what is to swap

}

mammal & mammal::operator= (mammal && orig)
{
   if (this == & orig)
      return *this;

   animal::operator=(orig);

   // swap what is to swap

   return *this;
}


std::string mammal::get_species() const
{
    return {"mammal"};
}

/** Implemetation of the prototype design pattern. This method is responsible for creation of a new object that is a copy of an existing object. Please mind the return type!
@return a pointer to a class at the top of class hierarchy.
 */
animal * mammal::clone() const
{
    return new mammal(*this);  // copy me and return the address of my copy as an address to an animal
}


