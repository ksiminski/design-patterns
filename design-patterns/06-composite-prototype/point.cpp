/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>

#include "graphical_object.h"
#include "primitive.h"
#include "point.h"

point::point ()
{
}

point::~point ()
{
   // delete what is to delete

}

point::point (const point & pattern) : primitive(pattern)
{
   // copy what is to copy

}

point & point::operator= (const point & pattern)
{
   if (this == & pattern)
      return *this;

   primitive::operator=(pattern);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

point::point (point && pattern) : primitive(pattern)
{
   // swap what is to swap

}

point & point::operator= (point && pattern)
{
   if (this == & pattern)
      return *this;

   primitive::operator=(pattern);

   // swap what is to swap

   return *this;
}


graphical_object * point::clone() const
{
    return new point (*this);
}

void point::transform()
{
    std::cout << "transform the point" << std::endl;
}

void point::draw() const
{
    std::cout << "draw the point" << std::endl;
}

