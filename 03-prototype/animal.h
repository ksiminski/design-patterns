/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

/** The class declares an interface for an animal. */
class animal
{
 public:
   animal ();
   animal (const animal & orig);
   animal (animal && orig);
   animal & operator= (const animal & orig);
   animal & operator= (animal && orig);
   virtual ~animal ();
   
   virtual std::string get_species () const;
   
   virtual animal * clone () const = 0;  ///< propotype desing pattern
};


#endif
