/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef CREATOR_UNIT_H
#define CREATOR_UNIT_H

#include "matrix.h"
#include "creator_matrix.h"
#include "creator_square.h"

/** Creatro of unit matrices. */
class creator_unit : public creator_square
{
public:
    creator_unit (unsigned int number_of_rows);
    virtual matrix create ();
    
    virtual ~creator_unit ();
};


#endif 
