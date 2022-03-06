/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>

#include "graphical_object.h"
#include "primitive.h"
#include "circle.h"

circle::circle ()
{
}

circle::~circle ()
{
   // delete what is to delete

}

circle::circle (const circle & orig) : primitive(orig)
{
   // copy what is to copy

}

circle & circle::operator= (const circle & orig)
{
   if (this == & orig)
      return *this;

   primitive::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

circle::circle (circle && orig) : primitive(orig)
{
   // swap what is to swap

}

circle & circle::operator= (circle && orig)
{
   if (this == & orig)
      return *this;

   primitive::operator=(orig);

   // swap what is to swap

   return *this;
}

graphical_object * circle::clone() const
{
    return new circle(*this);
}

void circle::transform()
{
    std::cout << "transform the circle" << std::endl;
}

void circle::draw() const
{
    std::cout << "draw the circle" << std::endl;
}


