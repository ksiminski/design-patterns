/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef ZOO_H
#define ZOO_H


#include <string>

#include <vector>

#include "animal.h"


/** Zoo class holds addresses of all animals. We use polymorphism here to make this solution robust and open for extension (open-closed principle). */
class zoo
{
    std::vector<animal*> animals;
    
 public:
   zoo ();
   zoo (const zoo & orig);
   zoo (zoo && orig);
   zoo & operator= (const zoo & orig);
   zoo & operator= (zoo && orig);
   virtual ~zoo ();
   
   void print ();
   void add (const animal & a);
   
};


#endif
