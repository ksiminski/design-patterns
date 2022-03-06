/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>

#include "animal.h"
#include "reptile.h"

reptile::reptile ()
{
}

reptile::~reptile ()
{
   // delete what is to delete

}

reptile::reptile (const reptile & orig) : animal(orig)
{
   // copy what is to copy

}

reptile & reptile::operator= (const reptile & orig)
{
   if (this == & orig)
      return *this;

   animal::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

reptile::reptile (reptile && orig) : animal(orig)
{
   // swap what is to swap

}

reptile & reptile::operator= (reptile && orig)
{
   if (this == & orig)
      return *this;

   animal::operator=(orig);

   // swap what is to swap

   return *this;
}


std::string reptile::get_species() const
{
    return {"reptile"};
}

/** Implemetation of the prototype design pattern. This method is responsible for creation of a new object that is a copy of an existing object. Please mind the return type!
@return a pointer to a class at the top of class hierarchy.
 */
animal * reptile::clone() const
{
    return new reptile(*this);  // copy me and return the address of my copy as an address to an animal
}


