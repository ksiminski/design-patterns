/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef MERGESORT_H
#define MERGESORT_H

#include "sorter.h"

/** The class implements interface sorter.  */
class mergesort : public sorter
{
public: 
    virtual void sort (int * tab, int begin, int end);
    virtual ~mergesort ();
};


#endif 
