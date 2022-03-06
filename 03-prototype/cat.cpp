/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>

#include "mammal.h"
#include "cat.h"

cat::cat ()
{
}

cat::~cat ()
{
   // delete what is to delete

}

cat::cat (const cat & orig) : mammal(orig)
{
   // copy what is to copy

}

cat & cat::operator= (const cat & orig)
{
   if (this == & orig)
      return *this;

   mammal::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

cat::cat (cat && orig) : mammal(orig)
{
   // swap what is to swap

}

cat & cat::operator= (cat && orig)
{
   if (this == & orig)
      return *this;

   mammal::operator=(orig);

   // swap what is to swap

   return *this;
}


std::string cat::get_species() const
{
    return {"cat"};
}

/** Implemetation of the prototype design pattern. This method is responsible for creation of a new object that is a copy of an existing object. Please mind the return type!
@return a pointer to a class at the top of class hierarchy.
 */
animal * cat::clone() const
{
    return new cat(*this);   // copy me and return the address of my copy as an address to an animal
}


