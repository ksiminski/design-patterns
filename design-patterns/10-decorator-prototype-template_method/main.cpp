/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <sstream>
#include <string>
#include <chrono>
#include <random>
#include <vector>
#include <algorithm>
#include <map>

 

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

#include "modifier.h"
#include "sort.h"
#include "cut.h"
#include "uniq.h"

void print (const std::vector<std::string> & strings)
{
    for (const auto & s : strings)
        std::cout << s << std::endl;
}


/** Decorator is a STRUCTURAL design pattern. It implements an extra functionality for an object. It is implemented as a list of objects providing functionalities. */
int main ()
{
   std::vector<std::string> grades = { "George New 3.0",
                                       "John Smith  4.5",
                                       "Helene Trottelsteath 4.0",
                                       "Alexander Macmorlaeghdf 2.0",
                                       "Mathew Thymus 3.0",
                                       "Ann New    3.0"
                                    };
   
   std::cout << "ORIGINAL" << std::endl;
   print (grades);
   sort sort_by_names (1);
   
   // first sort by names
   
   auto sorted_by_names = sort_by_names.modify(grades);
   
   std::cout << std::endl;
   std::cout << "SORTED BY NAMES" << std::endl;
   print (sorted_by_names);
   
   // let's print unique grades
   
   std::cout << std::endl;
   std::cout << "UNIQUE GRADES" << std::endl;
   
   // We need tree modifiers:
   cut cut_grade (2);
   sort sort_by_1st_column (0);
   uniq remove_repetitions;
  
   // We compose a list of modifiers:
   cut_grade.addModifier(sort_by_1st_column);
   cut_grade.addModifier(remove_repetitions);
   
   // And finally run a sequence of modifiers:
   auto unique_grades = cut_grade.modify(grades);
   print (unique_grades);
   
   return 0; 
}

