/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef CUT_H
#define CUT_H


#include <vector>
#include <string>
#include "split.h"

/** The class cuts an item from a given column from each string. */
class cut : public split
{
protected:
    int _column;
    
    virtual std::vector<std::string> operation (std::vector<std::string> ss) const;
    
public: 
    cut (const int kolumna);
    cut (const cut & orig);
    cut (cut && orig);
    cut & operator= (const cut & orig);
    cut & operator= (cut && orig);
    virtual ~cut();
    virtual modifier * clone () const;
    
};

#endif 
