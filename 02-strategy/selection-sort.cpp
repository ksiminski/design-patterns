/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include <array>
#include "sorter.h"
#include "selection-sort.h"

 
selection_sort::~selection_sort()
{
}

void selection_sort::sort(int* tab, int begin, int end)
{
    for (int i = 0; i <= end; i++)
    {
        int iMin = i;
        
        for (int j = i + 1; j <= end; j++)
        {
            if (tab[j] < tab[iMin])
                iMin = j;
        }
        std::swap(tab[i], tab[iMin]);
    }
}

 
