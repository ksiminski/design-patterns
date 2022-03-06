/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "sorter.h"

/** The class implements interface sorter.  */
class selection_sort : public sorter
{
public: 
    virtual void sort (int * tab, int begin, int end);
    virtual ~selection_sort ();
};


#endif 
