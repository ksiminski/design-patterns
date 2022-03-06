/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <iostream> 

#include "rss_reader.h"


void rss_reader::receive(const std::string& news)
{
    std::cout << "reader RSS: " << news << std::endl;
}


 
