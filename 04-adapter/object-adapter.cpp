/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <deque>

#include "heap.h"
#include "object-adapter.h"

#include <iostream>
#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 



object_adapter::~object_adapter ()
{
}

void object_adapter::pop()
{
    _queue.remove();
}

void object_adapter::push(double d)
{
    _queue.insert(d);
}

std::size_t object_adapter::size() const
{
    return _queue.size();
}

double object_adapter::top()
{
    return _queue.max();
}

priority_queue * object_adapter::clone() const
{
    return new object_adapter(*this);
}
