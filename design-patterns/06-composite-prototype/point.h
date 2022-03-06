/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef POINT_H
#define POINT_H




#include "graphical_object.h"
#include "primitive.h"

class point : public primitive
{
 public:
   point ();
   point (const point & pattern);
   point (point && pattern);
   point & operator= (const point & pattern);
   point & operator= (point && pattern);
   virtual ~point ();
   
   /** The method draws an object. */
   virtual void draw () const;
   
   /** The method transforms an object. */
   virtual void transform ();
   
   /** design pattern prototype */
   virtual graphical_object * clone() const;
};


#endif
