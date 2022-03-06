/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>

#include "graphical_object.h"
#include "primitive.h"
#include "triangle.h"

triangle::triangle ()
{
}

triangle::~triangle ()
{
   // delete what is to delete

}

triangle::triangle (const triangle & pattern) : primitive(pattern)
{
   // copy what is to copy

}

triangle & triangle::operator= (const triangle & pattern)
{
   if (this == & pattern)
      return *this;

   primitive::operator=(pattern);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

triangle::triangle (triangle && pattern) : primitive(pattern)
{
   // swap what is to swap

}

triangle & triangle::operator= (triangle && pattern)
{
   if (this == & pattern)
      return *this;

   primitive::operator=(pattern);

   // swap what is to swap

   return *this;
}

graphical_object * triangle::clone() const
{
    return new triangle(*this);
}

void triangle::transform()
{
    std::cout << "transform the triangle" << std::endl;
}

void triangle::draw() const
{
    std::cout << "draw the triangle" << std::endl;
}


