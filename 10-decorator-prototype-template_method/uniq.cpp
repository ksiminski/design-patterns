/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <vector>
#include <string>

#include "modifier.h"
#include "uniq.h"

uniq::~uniq()
{
}

modifier * uniq::clone() const
{  
    return new uniq(*this);
}


std::vector<std::string> uniq::operation (std::vector<std::string> ss) const
{
    std::vector<std::string> result;
    if (ss.size() > 0)
    {
        result.push_back(ss[0]);
        
        for (std::size_t i = 1 ; i < ss.size(); i++)
        {
            if (ss[i - 1] != ss[i])
                result.push_back(ss[i]);
        }
    }
    return result;
}
