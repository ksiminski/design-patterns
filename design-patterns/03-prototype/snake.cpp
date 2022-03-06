/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>

#include "reptile.h"
#include "snake.h"

snake::snake ()
{
}

snake::~snake ()
{
   // delete what is to delete

}

snake::snake (const snake & orig) : reptile(orig)
{
   // copy what is to copy

}

snake & snake::operator= (const snake & orig)
{
   if (this == & orig)
      return *this;

   reptile::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

snake::snake (snake && orig) : reptile(orig)
{
   // swap what is to swap

}

snake & snake::operator= (snake && orig)
{
   if (this == & orig)
      return *this;

   reptile::operator=(orig);

   // swap what is to swap

   return *this;
}


std::string snake::get_species() const
{
    return {"snake"};
}

/** Implemetation of the prototype design pattern. This method is responsible for creation of a new object that is a copy of an existing object. Please mind the return type!
@return a pointer to a class at the top of class hierarchy.
 */
animal * snake::clone() const
{
    return new snake(*this);  // copy me and return the address of my copy as an address to an animal
}
