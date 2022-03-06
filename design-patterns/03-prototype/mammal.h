/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef MAMMAL_H
#define MAMMAL_H


#include <string>

#include "animal.h"

class mammal : public animal
{
 public:
   mammal ();
   mammal (const mammal & orig);
   mammal (mammal && orig);
   mammal & operator= (const mammal & orig);
   mammal & operator= (mammal && orig);
   virtual ~mammal ();
   
   virtual std::string get_species () const;
   virtual animal * clone () const;  ///< propotype desing pattern
   
   
};


#endif
