/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <vector>
#include <algorithm>

#include "command.h"
#include "shift.h"

void shift::do_command(std::vector<double>& numbers) const
{
    std::rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
}

void shift::undo_command(std::vector<double>& numbers) const
{
    std::rotate(numbers.begin(), numbers.begin() + numbers.size() - 1, numbers.end());
}

shift::~shift()
{
}

command * shift::clone() const
{
    return new shift (*this);
}
