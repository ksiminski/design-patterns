/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <iostream> 

#include "analog_receiver.h"


void analog_receiver::receive(const std::string& news)
{
    std::cout << "analog transmission: " << news << std::endl;
}

 
