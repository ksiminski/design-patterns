/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <string>

#include "heap.h"
#include "test.h"

#include "class-adapter.h"
#include "object-adapter.h"

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

 

/** Adapter is a STRUCTURAL design pattern. Is is used when two classes have different interfaces but they have to cooperate.
There are two types of this pattern: class adapter (based on generalisation) and object adapter (based on composition). */

int main()
{
    // class adapter
    { 
        std::cout << "class adapter" << std::endl;
        
        class_adapter ak;
        
        for (double d : { 4.9, 5.5, 7.1, -1.5, 3.4, 10.4 })
            ak.push(d);
        
        test tester (ak);
        tester.priority_print();
    }
    
    // object adapter
    { 
        std::cout << "object adapter" << std::endl;
        
        object_adapter ak;
        
        for (double d : { 4.9, 5.5, 7.1, -1.5, 3.4, 10.4 })
            ak.push(d);
        
        test tester (ak);
        tester.priority_print();
    }
    
    return 0;
}
