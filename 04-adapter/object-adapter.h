/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef OBJECT_ADAPTER_H
#define OBJECT_ADAPTER_H

#include <deque>

#include "heap.h"
#include "priority-queue.h"

/** Object adapter is a wrapper. It is a composite and a heap is its component. Simultaneously object adapter IS a priority_queue -- this is why we can use in with test class. */
class object_adapter : public priority_queue 
{
    heap _queue;
 public:
  void pop() override;
  void push(double d) override;
  std::size_t size() const override;
  double top() override;
  
  priority_queue * clone() const override;
  
  virtual ~object_adapter();
};


#endif
