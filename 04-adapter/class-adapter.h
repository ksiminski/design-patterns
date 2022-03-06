/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef ADAPTER_KLASOWY_H
#define ADAPTER_KLASOWY_H

#include <deque>

#include "heap.h"
#include "priority-queue.h"

/** Class adapter is bases on multiple inheritance. Class_adapter class IS a heap and IS a priority_queue. */
class class_adapter : public heap, public priority_queue
{
 public:
     void pop() override;
     
     void push(double d) override;
     
     std::size_t size() const override;
     
     double top() override;
     
     virtual ~class_adapter();
     
     priority_queue * clone() const override;

};


#endif
