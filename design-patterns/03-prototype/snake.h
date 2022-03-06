/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef SNAKE_H
#define SNAKE_H


#include <string>

#include "animal.h"
#include "reptile.h"

class snake : public reptile
{
 public:
   snake ();
   snake (const snake & orig);
   snake (snake && orig);
   snake & operator= (const snake & orig);
   snake & operator= (snake && orig);
   virtual ~snake ();
   
   virtual std::string get_species () const;
   virtual animal * clone () const;   ///< propotype desing pattern
};


#endif
