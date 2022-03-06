/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <algorithm>
#include <iostream>

#include "test.h"
#include "priority-queue.h"

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 


test::test ()
{
    _pHeap = nullptr;
}

test::test(const priority_queue & k)
{
    _pHeap = k.clone();
}


test::test (const test & original)
{
    if (original._pHeap)
        _pHeap = original._pHeap->clone();
    else
        _pHeap = nullptr;
}

test::test (test && original)
{
    std::swap(_pHeap, original._pHeap);
}

test::~test ()
{
    delete _pHeap;
}

test & test::operator= (const test & original)
{
   if (this == & original)
      return *this;

   delete _pHeap;

   if (original._pHeap)
        _pHeap = original._pHeap->clone();
    else
        _pHeap = nullptr;

   return *this;
}

test & test::operator= (test && original)
{
   if (this == & original)
      return *this;

   std::swap(_pHeap, original._pHeap);

   return *this;
}


void test::priority_print()
{
    if (_pHeap)
    {
        while (_pHeap->size() > 0)
        {
            double value = _pHeap->top();
            _pHeap->pop();
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}


