/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef CREATOR_MATRIX
#define CREATOR_MATRIX

#include "matrix.h"

/** Creator of matrices */
class creator_matrix 
{
protected:
    unsigned int _rows, _columns;
public:
    creator_matrix (unsigned int number_of_rows, unsigned int number_of_columns);
    virtual matrix create ();
    
    virtual ~creator_matrix ();
};


#endif 
