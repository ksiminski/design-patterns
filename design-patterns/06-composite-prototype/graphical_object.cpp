/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include "graphical_object.h"

graphical_object::graphical_object ()
{
}

graphical_object::~graphical_object ()
{
   // delete what is to delete

}

graphical_object::graphical_object (const graphical_object & pattern)
{
   // copy what is to copy

}

graphical_object & graphical_object::operator= (const graphical_object & pattern)
{
   if (this == & pattern)
      return *this;


   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

graphical_object::graphical_object (graphical_object && pattern)
{
   // swap what is to swap

}

graphical_object & graphical_object::operator= (graphical_object && pattern)
{
   if (this == & pattern)
      return *this;


   // swap what is to swap

   return *this;
}



