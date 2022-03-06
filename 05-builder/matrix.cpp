/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <vector>
#include <string>
#include <sstream>

#include "matrix.h"


unsigned int matrix::getNumberOfColumns() const
{
    if (_data.size() == 0)
        return 0;
    else 
        return _data[0].size();
}

unsigned int matrix::getNumberOfRows() const
{
    return _data.size();
}

matrix::matrix(unsigned int number_of_rows, unsigned int number_of_columns)
{
    _data = std::vector<std::vector<double>> (number_of_rows);
    for (auto & wiersz : _data)
        wiersz = std::vector<double> (number_of_columns);
}

std::ostream & operator << (std::ostream & s, const matrix & m)
{
    for (const auto & row : m._data)
    {
        for (const auto & cell : row)
            s << cell << " ";
        s << std::endl;
    }
    return s;
}

double & matrix::operator()(unsigned int row, unsigned int column)
{
    return _data[row][column];
}
 
