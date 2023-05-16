/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SORT_H
#define SORT_H

#include <vector>
#include <string>
#include "split.h"

/** The class sorts a vector of strings with a string in a given column being the sort key. */
class sort : public split
{
protected:
    int _column;
    virtual std::vector<std::string> operation (std::vector<std::string> ss) const;   
    
public:
    sort ();
    sort (const int column);
    sort (const sort & orig);
    sort (sort && orig);
    sort & operator= (const sort & orig);
    sort & operator= (sort && orig);
    
    virtual modifier * clone () const;
    virtual ~sort();
};

#endif
