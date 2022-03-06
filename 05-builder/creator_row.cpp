/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "matrix.h"
#include "creator_matrix.h"
#include "creator_row.h"

creator_row::creator_row(unsigned int number_of_columns) : creator_matrix (1, number_of_columns)
{
}
 
creator_row::~creator_row()
{
}
 


 

 
