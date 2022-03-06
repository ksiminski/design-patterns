/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>

#include "mammal.h"
#include "dog.h"

dog::dog ()
{
}

dog::~dog ()
{
   // delete what is to delete

}

dog::dog (const dog & orig) : mammal(orig)
{
   // copy what is to copy

}

dog & dog::operator= (const dog & orig)
{
   if (this == & orig)
      return *this;

   mammal::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

dog::dog (dog && orig) : mammal(orig)
{
   // swap what is to swap

}

dog & dog::operator= (dog && orig)
{
   if (this == & orig)
      return *this;

   mammal::operator=(orig);

   // swap what is to swap

   return *this;
}


std::string dog::get_species() const
{
    return {"dog"};
}

/** Implemetation of the prototype design pattern. This method is responsible for creation of a new object that is a copy of an existing object. Please mind the return type!
@return a pointer to a class at the top of class hierarchy.
 */
animal * dog::clone() const
{
    return new dog(*this);  // copy me and return the address of my copy as an address to an animal
}
