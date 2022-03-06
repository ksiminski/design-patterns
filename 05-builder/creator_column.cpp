/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "matrix.h"
#include "creator_matrix.h"
#include "creator_column.h"

creator_column::creator_column(unsigned int number_of_rows) : creator_matrix (number_of_rows, 1)
{
}

creator_column::~creator_column()
{
}




 

 
