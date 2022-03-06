/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef CREATOR_COLUMN
#define CREATOR_COLUMN

#include "matrix.h"
#include "creator_matrix.h"

/** Creator of column matrices (with only one column) */
class creator_column : public creator_matrix
{
public:
    creator_column (unsigned int number_of_rows); 
    
    virtual ~creator_column ();
};


#endif 
