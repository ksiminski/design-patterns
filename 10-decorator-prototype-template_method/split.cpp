/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/



#include <vector>
#include <string>
#include <sstream>

#include "split.h"


split::~split()
{
}

std::vector<std::string> split::split_string(const std::string & ss) const
{
    std::stringstream stream;
    stream << ss;
    
    std::vector<std::string> words;
    std::string word;
    while (stream >> word)
        words.push_back(word);
    
    return words;
}
