/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "matrix.h"
#include "creator_matrix.h"

creator_matrix::creator_matrix(unsigned int number_of_rows, unsigned int number_of_columns) : _rows (number_of_rows), _columns (number_of_columns)
{
}

matrix creator_matrix::create()
{
    return matrix (_rows, _columns);
}

creator_matrix::~creator_matrix()
{
}

