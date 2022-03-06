/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>

#include "graphical_object.h"
#include "primitive.h"
#include "line.h"

line::line ()
{
}

line::~line ()
{
   // delete what is to delete

}

line::line (const line & pattern) : primitive(pattern)
{
   // copy what is to copy

}

line & line::operator= (const line & pattern)
{
   if (this == & pattern)
      return *this;

   primitive::operator=(pattern);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

line::line (line && pattern) : primitive(pattern)
{
   // swap what is to swap

}

line & line::operator= (line && pattern)
{
   if (this == & pattern)
      return *this;

   primitive::operator=(pattern);

   // swap what is to swap

   return *this;
}


graphical_object * line::clone() const
{
    return new line(*this);
}

void line::transform()
{
    std::cout << "transform the line" << std::endl;
}

void line::draw() const
{
    std::cout << "draw the line" << std::endl;
}

