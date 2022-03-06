/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "matrix.h"
#include "creator_matrix.h"
#include "creator_square.h"


creator_square::creator_square(unsigned int number_of_rows) : creator_matrix (number_of_rows, number_of_rows)
{
}

creator_square::~creator_square()
{
}

matrix creator_square::create()
{
    return creator_matrix::create();
}

