/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef AMPHIBIAN_H
#define AMPHIBIAN_H

#include <string>
#include "animal.h"

class amphibian : public animal
{
 public:
   amphibian ();
   amphibian (const amphibian & orig);
   amphibian (amphibian && orig);
   amphibian & operator= (const amphibian & orig);
   amphibian & operator= (amphibian && orig);
   virtual ~amphibian ();
   
   virtual std::string get_species () const;
   
   virtual animal * clone () const;
};


#endif
