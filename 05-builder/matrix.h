/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>


class matrix 
{
protected: 
    std::vector<std::vector<double>> _data;
    
public:
    matrix (unsigned int number_of_rows, unsigned int number_of_columns);
    
    unsigned int getNumberOfRows () const;
    unsigned int getNumberOfColumns () const;
    
    double & operator () (unsigned int row, unsigned int column);
    
    friend std::ostream & operator << (std::ostream & s, const matrix & m);
};



#endif 
