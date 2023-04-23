/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef HEAP_H
#define HEAP_H

#include <deque>

/** Just a binary heap. */
class heap
{
   std::deque<double> data;
   
 public:
     
   virtual ~heap ();
   
   virtual void insert (double d);
   virtual void remove ();
   virtual double max ();
    
   virtual std::size_t size() const;
   
protected:
    void sift_up();
    void sift_down();
};


#endif
