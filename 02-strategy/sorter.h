/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SORTER_H
#define SORTER_H


/** Sorter is an abstract class. It declares an interface for a sorting algorithm. 
In stategy design pattern this class is not necessary an abstract class. In this example it is, but it is not a rule.
 */
class sorter 
{
public:
    virtual void sort (int * tab, int begin, int end) = 0;
};


#endif 
