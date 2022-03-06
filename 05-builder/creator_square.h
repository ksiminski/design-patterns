/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef CREATOR_SQUARE_H
#define CREATOR_SQUARE_H

#include "matrix.h"
#include "creator_matrix.h"

/** Creator of square matrices */
class creator_square : public creator_matrix
{
public:
    creator_square (unsigned int number_of_rows);
    virtual matrix create ();
    
    virtual ~creator_square ();
};


#endif 
