/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>

#include "amphibian.h"
#include "frog.h"

frog::frog ()
{
}

frog::~frog ()
{
   // delete what is to delete

}

frog::frog (const frog & orig) : amphibian(orig)
{
   // copy what is to copy

}

frog & frog::operator= (const frog & orig)
{
   if (this == & orig)
      return *this;

   amphibian::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

frog::frog (frog && orig) : amphibian(orig)
{
   // swap what is to swap

}

frog & frog::operator= (frog && orig)
{
   if (this == & orig)
      return *this;

   amphibian::operator=(orig);

   // swap what is to swap

   return *this;
}

std::string frog::get_species() const
{
    return {"frog"};
}

/** Implemetation of the prototype design pattern. This method is responsible for creation of a new object that is a copy of an existing object. Please mind the return type!
@return a pointer to a class at the top of class hierarchy.
 */
animal * frog::clone() const
{
    return new frog(*this);  // copy me and return the address of my copy as an address to an animal
}



