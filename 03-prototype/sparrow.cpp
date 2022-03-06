/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>

#include "bird.h"
#include "sparrow.h"

sparrow::sparrow ()
{
}

sparrow::~sparrow ()
{
   // delete what is to delete

}

sparrow::sparrow (const sparrow & orig) : bird(orig)
{
   // copy what is to copy

}

sparrow & sparrow::operator= (const sparrow & orig)
{
   if (this == & orig)
      return *this;

   bird::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

sparrow::sparrow (sparrow && orig) : bird(orig)
{
   // swap what is to swap

}

sparrow & sparrow::operator= (sparrow && orig)
{
   if (this == & orig)
      return *this;

   bird::operator=(orig);

   // swap what is to swap

   return *this;
}


std::string sparrow::get_species() const
{
    return {"sparrow"};
}

/** Implemetation of the prototype design pattern. This method is responsible for creation of a new object that is a copy of an existing object. Please mind the return type!
@return a pointer to a class at the top of class hierarchy.
 */
animal * sparrow::clone() const
{
    return new sparrow(*this);  // copy me and return the address of my copy as an address to an animal
}


