/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef GRAPHICAL_OBJECT_H
#define GRAPHICAL_OBJECT_H


class graphical_object
{
 public:
   graphical_object ();
   graphical_object (const graphical_object & pattern);
   graphical_object (graphical_object && pattern);
   graphical_object & operator= (const graphical_object & pattern);
   graphical_object & operator= (graphical_object && pattern);
   virtual ~graphical_object ();
   
   /** The method draws an object. */
   virtual void draw () const = 0;
   
   /** The method transforms an object. */
   virtual void transform () = 0;
   
   /** design pattern prototype */
   virtual graphical_object * clone() const = 0;
};


#endif
