/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef TEST_H
#define TEST_H

#include "priority-queue.h"

/** Test class uses a priority queue. We would like to use heap class as a priority queue. Unfortunately their interfaces do not match. */
class test
{
protected:
    priority_queue * _pHeap = nullptr;
 public:
   test ();
   test (const priority_queue &);  // dependency injection
   test (const test & original);
   test (test && orig);
   test & operator= (const test & orig);
   test & operator= (test && orig);
   virtual ~test ();
   
   /** The method prints all values from the top of a heap. */
   void priority_print();
};


#endif
