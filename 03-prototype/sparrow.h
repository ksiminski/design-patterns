/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef SPARROW_H
#define SPARROW_H


#include <string>

#include "animal.h"
#include "bird.h"

class sparrow : public bird
{
 public:
   sparrow ();
   sparrow (const sparrow & orig);
   sparrow (sparrow && orig);
   sparrow & operator= (const sparrow & orig);
   sparrow & operator= (sparrow && orig);
   virtual ~sparrow ();
   
   virtual std::string get_species () const;
   virtual animal * clone () const;  ///< propotype desing pattern
};


#endif
