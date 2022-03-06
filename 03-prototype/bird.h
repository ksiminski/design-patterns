/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef BIRD_H
#define BIRD_H


#include <string>

#include "animal.h"

class bird : public animal
{
 public:
   bird ();
   bird (const bird & orig);
   bird (bird && orig);
   bird & operator= (const bird & orig);
   bird & operator= (bird && orig);
   virtual ~bird ();
   
   virtual std::string get_species() const;

   virtual animal * clone () const; ///< propotype desing pattern
    
};


#endif
