/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <deque>

#include "heap.h"
#include "class-adapter.h"

#include <iostream>
#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 



class_adapter::~class_adapter ()
{

   // delete what is to delete

}


void class_adapter::pop()
{
    this->remove();
}

void class_adapter::push(double d)
{
    insert(d);
}

double class_adapter::top()
{
    return max();
}

std::size_t class_adapter::size() const
{
    return heap::size();
}

priority_queue * class_adapter::clone() const
{
    return new class_adapter(*this);
}
