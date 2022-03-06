/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include "animal.h"

animal::animal ()
{
}

animal::~animal ()
{
   // delete what is to delete

}

animal::animal (const animal & orig)
{
   // copy what is to copy

}

animal & animal::operator= (const animal & orig)
{
   if (this == & orig)
      return *this;


   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

animal::animal (animal && orig)
{
   // swap what is to swap

}

animal & animal::operator= (animal && orig)
{
   if (this == & orig)
      return *this;


   // swap what is to swap

   return *this;
}

std::string animal::get_species() const
{
    return {"unknown animal"};
}


