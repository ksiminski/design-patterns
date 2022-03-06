/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>

#include "animal.h"
#include "amphibian.h"

amphibian::amphibian ()
{
}

amphibian::~amphibian ()
{
   // delete what is to delete

}

amphibian::amphibian (const amphibian & orig) : animal(orig)
{
   // copy what is to copy

}

amphibian & amphibian::operator= (const amphibian & orig)
{
   if (this == & orig)
      return *this;

   animal::operator=(orig);

   // remove what is to remove

   // allocate what is to allocate

   return *this;
}

amphibian::amphibian (amphibian && orig) : animal(orig)
{
   // swap what is to swap

}

amphibian & amphibian::operator= (amphibian && orig)
{
   if (this == & orig)
      return *this;

   animal::operator=(orig);

   // swap what is to swap

   return *this;
}


std::string amphibian::get_species() const
{
    return {"amphibian"};
}

animal * amphibian::clone() const
{
    return new amphibian(*this);
}
