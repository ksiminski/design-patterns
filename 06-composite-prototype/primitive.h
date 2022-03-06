/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include "graphical_object.h"

class primitive : public graphical_object
{
 public:
   primitive ();
   primitive (const primitive & wzor);
   primitive (primitive && wzor);
   primitive & operator= (const primitive & wzor);
   primitive & operator= (primitive && wzor);
   virtual ~primitive ();
};


#endif
