/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include "heap.h"



heap::~heap ()
{

   // delete what is to delete

}



void heap::remove()
{
    data.at(0) = data.back();
    data.pop_back();
    sift_down();
}

double heap::max()
{
    return data.at(0);
}

void heap::insert(double d)
{
    data.push_back(d);
    sift_up();
}

void heap::sift_up()
{
    auto child_index = data.size() - 1;
    
    while (child_index > 0)
    {
        auto parent_index = (child_index + 1) / 2 - 1;
        if (data.at(parent_index) < data.at(child_index))
        {
            std::swap (data.at(parent_index), data.at(child_index));
            child_index = parent_index;
        }
        else
            return;
    }
}

void heap::sift_down()
{
    auto parent_index = 0;
    
    while ((parent_index + 1) * 2 < data.size())
    {
        auto child_index_L = (parent_index + 1) * 2 - 1;
        auto child_index_R = (parent_index + 1) * 2;
        
        bool bLeftGreater = data.at(child_index_L) > data.at(child_index_R);
        
        if (bLeftGreater and data.at(child_index_L) > data.at(parent_index))
        {
            std::swap (data.at(child_index_L), data.at(parent_index));
            parent_index = child_index_L;
        }
        else if (not bLeftGreater and data.at(child_index_R) > data.at (parent_index))
        {
            std::swap (data.at(child_index_R), data.at(parent_index));
            parent_index = child_index_R;
        }
        else 
            return;
    }
}



std::size_t heap::size() const
{
    return data.size();
}


