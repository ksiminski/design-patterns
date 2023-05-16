/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef OBIEKT_ZLOZONY_H
#define OBIEKT_ZLOZONY_H

#include <vector>

#include "graphical_object.h"

class composed_object : public graphical_object
{
protected:
   
   std::vector<graphical_object *> components;
   
 public:
   composed_object ();
   composed_object (const composed_object & pattern);
   composed_object (composed_object && pattern);
   composed_object & operator= (const composed_object & pattern);
   composed_object & operator= (composed_object && pattern);
   virtual ~composed_object ();
   
   /** The method draws an object. */
   virtual void draw () const override;
   
   /** The method transforms an object. */
   virtual void transform () override;
   
   /** design pattern prototype */
   virtual graphical_object * clone() const override;

   /** The method adds an object */
   void add (const graphical_object & graph);
    
};


#endif
