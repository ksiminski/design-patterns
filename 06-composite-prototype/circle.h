/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef CIRCLE_H
#define CIRCLE_H


 

#include "graphical_object.h"
#include "primitive.h"

class circle : public primitive
{
 public:
   circle ();
   circle (const circle & orig);
   circle (circle && orig);
   circle & operator= (const circle & orig);
   circle & operator= (circle && orig);
   virtual ~circle ();
   
   /** The method draws an object. */
   virtual void draw () const;
   
   /** The method transforms an object. */
   virtual void transform ();
   
   /** design pattern prototype */
   virtual graphical_object * clone() const;
};


#endif
