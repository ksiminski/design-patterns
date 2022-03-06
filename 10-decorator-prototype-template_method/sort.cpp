/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <vector>
#include <map>
#include <algorithm>

#include "modifier.h"
#include "sort.h"

modifier * sort::clone() const
{
     return new sort (*this);
}


sort::sort(const sort& orig) : split (orig)
{
    _column = orig._column;
}

sort::sort(sort && orig) : split (orig)
{
    std::swap (_column, orig._column);
}

sort & sort::operator=(const sort& orig)
{
    if (this == & orig)
        return *this;
    
    split::operator = (orig);
    _column = orig._column;
    
    return *this;
}

sort & sort::operator=(sort && orig)
{
    if (this == & orig)
        return *this;
    
    split::operator = (orig);
    std::swap (_column, orig._column);
    
    return *this;
}

sort::~sort()
{
}

sort::sort()
{
    _column = -1;
}

sort::sort(const int column)
{
    _column = column;
}

std::vector<std::string> sort::operation(std::vector<std::string> ss) const
{
    if (_column < 0)
    {
        std::sort (ss.begin(), ss.end());
        return ss;
    }
    else
    {
        std::multimap <std::string, std::string> rows;
        for (auto & line : ss)
        {
            // trzeba podzelic kazda linie na slowa
            auto words = split_string(line);
            if (_column < words.size())
                rows.insert(std::make_pair(words[_column], line));
            else 
                rows.insert(std::make_pair(std::string(""), line));
        }
        std::vector<std::string> result;
        for (auto pair : rows)
            result.push_back(pair.second);
        return result;
    }
}
