/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <iostream>
#include <sstream>
#include "device.h"
#include "radio.h"

std::string radio::test() const
{
    std::stringstream ss;
    ss << "radio" << std::endl;
    ss << device::test();    
    return ss.str();
}

radio::~radio()
{
} 
