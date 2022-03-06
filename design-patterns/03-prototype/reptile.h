/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef REPTILE_H
#define REPTILE_H


#include <string>

#include "animal.h"

class reptile : public animal
{
 public:
   reptile ();
   reptile (const reptile & orig);
   reptile (reptile && orig);
   reptile & operator= (const reptile & orig);
   reptile & operator= (reptile && orig);
   virtual ~reptile ();
   
   virtual std::string get_species () const;
   virtual animal * clone () const;   ///< propotype desing pattern
};


#endif
