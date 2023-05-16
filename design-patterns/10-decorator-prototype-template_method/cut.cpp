/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <vector>
#include <string>

#include "modifier.h"
#include "cut.h"

modifier * cut::clone() const
{
    return new cut (*this);
}


cut::cut(const int column)
{
    _column = column;
}

cut::cut(const cut& orig) : split (orig)
{
    _column = orig._column;
}

cut::cut(cut && orig) : split (orig)
{
    std::swap (_column, orig._column);
}

cut & cut::operator=(const cut& orig)
{
    if (this == & orig)
        return *this;
    
    split::operator = (orig);
    _column = orig._column;
    
    return *this;
}

cut & cut::operator=(cut && orig)
{
    if (this == & orig)
        return *this;
    
    split::operator = (orig);
    std::swap (_column, orig._column);
    
    return *this;
}

cut::~cut()
{
}

std::vector<std::string> cut::operation(std::vector<std::string> ss) const
{
    if (_column < 0)
        return ss;
    else
    {
        std::vector<std::string> result;
        for (auto row : ss)
        {
            auto words = split_string(row);
            if (_column < words.size())
                result.push_back(words[_column]);
            else 
                result.push_back(std::string(""));
        }
        return result;
    }
}

