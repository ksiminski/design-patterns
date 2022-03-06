/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef CREATOR_ROW
#define CREATOR_ROW

#include "matrix.h"
#include "creator_matrix.h"

/** Creator of row matrices  (with only one row) */
class creator_row : public creator_matrix
{
public:
    creator_row (unsigned int number_of_columns); 
    
    virtual ~creator_row ();
};


#endif 
