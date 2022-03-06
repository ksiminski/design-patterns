/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#include "sorter.h"
#include "mergesort.h"

 

void mergesort::sort(int* tab, int begin, int end)
{
    if (end - begin < 1)
      return;
   
   // first recursive split
   int split = (begin + end) / 2;
   sort (tab, begin, split);
   sort (tab, split + 1, end);
   
   // then merge
   
   int * t = new int[end - begin + 1];
   int left = begin;
   int right = split + 1;
   for (int i = 0; i < end - begin + 1; i++)
   {
      if (left > split)
         t[i] = tab[right++];
      else if (right > end)
         t[i] = tab[left++];
      else if (tab[left] < tab[right])
         t[i] = tab[left++];
      else
         t[i] = tab[right++];
   }
   
   // and copy the result
   for (int i = 0; i < end - begin + 1; i++)
      tab[begin + i] = t[i];
   
   delete [] t;
}

mergesort::~mergesort()
{
}

 
