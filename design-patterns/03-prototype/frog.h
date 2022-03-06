/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef FROG_H
#define FROG_H


#include <string>

#include "animal.h"
#include "amphibian.h"

class frog : public amphibian
{
 public:
   frog ();
   frog (const frog & orig);
   frog (frog && orig);
   frog & operator= (const frog & orig);
   frog & operator= (frog && orig);
   virtual ~frog ();
   
   virtual std::string get_species () const;
   virtual animal * clone () const;  ///< propotype desing pattern
};


#endif
