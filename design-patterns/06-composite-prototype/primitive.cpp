/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include "graphical_object.h"
#include "primitive.h"

primitive::primitive ()
{
}

primitive::~primitive ()
{
   // delete what is to delete

}

primitive::primitive (const primitive & pattern) : graphical_object(pattern)
{
   // copy what is to copy

}

primitive & primitive::operator= (const primitive & pattern)
{
   if (this == & pattern)
      return *this;

   graphical_object::operator=(pattern);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

primitive::primitive (primitive && pattern) : graphical_object(pattern)
{
   // swap what is to swap

}

primitive & primitive::operator= (primitive && pattern)
{
   if (this == & pattern)
      return *this;

   graphical_object::operator=(pattern);

   // swap what is to swap

   return *this;
}



