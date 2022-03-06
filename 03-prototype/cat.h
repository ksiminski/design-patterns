/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef CAT_H
#define CAT_H


#include <string>

#include "animal.h"
#include "mammal.h"

class cat : public mammal
{
 public:
   cat ();
   cat (const cat & orig);
   cat (cat && orig);
   cat & operator= (const cat & orig);
   cat & operator= (cat && orig);
   virtual ~cat ();
   
   virtual std::string get_species () const;
   virtual animal * clone () const;  ///< propotype desing pattern
   
};


#endif
