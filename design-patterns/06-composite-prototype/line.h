/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef LINE_H
#define LINE_H

#include "graphical_object.h"
#include "primitive.h"

class line : public primitive
{
 public:
   line ();
   line (const line & pattern);
   line (line && pattern);
   line & operator= (const line & pattern);
   line & operator= (line && pattern);
   virtual ~line ();
   
   /** The method draws an object. */
   virtual void draw () const;
   
   /** The method transforms an object. */
   virtual void transform ();
   
   /** design pattern prototype */
   virtual graphical_object * clone() const;
};


#endif
