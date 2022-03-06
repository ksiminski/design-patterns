/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef DOG_H
#define DOG_H


#include <string>

#include "animal.h"
#include "mammal.h"

class dog : public mammal
{
 public:
   dog ();
   dog (const dog & orig);
   dog (dog && orig);
   dog & operator= (const dog & orig);
   dog & operator= (dog && orig);
   virtual ~dog ();
   
   virtual std::string get_species () const;
   virtual animal * clone () const;  ///< propotype desing pattern
};


#endif
