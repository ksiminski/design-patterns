/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "matrix.h"
#include "creator_matrix.h"
#include "creator_square.h"
#include "creator_unit.h"


creator_unit::creator_unit(unsigned int number_of_rows) : creator_square (number_of_rows)
{
}

creator_unit::~creator_unit()
{
}


matrix creator_unit::create()
{
    matrix NewMatrix = creator_square::create();
    
    for (int i = 0; i < _rows; i++)
        (NewMatrix)(i, i) = 1;
    
    return NewMatrix;
}


 
