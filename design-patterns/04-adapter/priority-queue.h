/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <cstddef>

class priority_queue
{
 public:
     
   virtual ~priority_queue ();
   
   /** The method add a value to the heap. */
   virtual void push (double d) = 0;

   /** The method pops a value from the heap. */
   virtual void pop () = 0;
   
   /** The method reads a value at the top of a heap. */
   virtual double top () = 0;
   
   /** @return number of values in a heap. */
   virtual std::size_t size() const = 0;
    
   /** The method clones a priority queue -- prototype desing pattern. */
   virtual priority_queue * clone () const = 0;
};


#endif
