/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <string>

#include "matrix.h"
#include "creator_matrix.h"
#include "creator_unit.h"
#include "creator_column.h"
#include "creator_square.h"
#include "creator_row.h"

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

/** Builder is a CREATIONAL design pattern. It is used in a case when we would like to produce different object of ONE CLASS.
In this example we always produce matrix object. But we use sereval creator classes (a special creator for unit matrices, special one for square matrices etc.). We have here a hierarchy of creator (builder) classes that create different object of ONE CLASS. */

int main()
{
    
   creator_matrix     cmat (3, 4);
   creator_square     csqu (3);
   creator_unit       cuni (4);
   creator_column     ccol (3);
   creator_row        crow (6);
    
   std::vector<matrix> m;
   
   m.push_back(cmat.create());
   m.push_back(csqu.create());
   m.push_back(cuni.create());
   m.push_back(ccol.create());
   m.push_back(crow.create());
   
   for (const auto & p : m)
       std::cout << p << std::endl << std::endl;
   
   return 0;
}
