/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <string>

#include "animal.h"
#include "bird.h"

bird::bird ()
{
}

bird::~bird ()
{
   // delete what is to delete

}

bird::bird (const bird & orig) : animal(orig)
{
   // copy what is to copy

}

bird & bird::operator= (const bird & orig)
{
   if (this == & orig)
      return *this;

   animal::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

bird::bird (bird && orig) : animal(orig)
{
   // swap what is to swap

}

bird & bird::operator= (bird && orig)
{
   if (this == & orig)
      return *this;

   animal::operator=(orig);

   // swap what is to swap

   return *this;
}

std::string bird::get_species() const
{
    return {"bird"};
}


/** Implemetation of the prototype design pattern. This method is responsible for creation of a new object that is a copy of an existing object. Please mind the return type!
@return a pointer to a class at the top of class hierarchy.
 */
animal * bird::clone() const
{
    return new bird(*this);  // copy me and return the address of my copy as an address to an animal
}


