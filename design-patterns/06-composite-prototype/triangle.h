/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef TRIANGLE_H
#define TRIANGLE_H


 

#include "graphical_object.h"
#include "primitive.h"

class triangle : public primitive
{
 public:
   triangle ();
   triangle (const triangle & wzor);
   triangle (triangle && wzor);
   triangle & operator= (const triangle & wzor);
   triangle & operator= (triangle && wzor);
   virtual ~triangle ();
   
   /** The method draws an object. */
   virtual void draw () const;
   
   /** The method transforms an object. */
   virtual void transform ();
   
   /** design pattern prototype */
   virtual graphical_object * clone() const;
};


#endif
