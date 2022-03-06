/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <iostream>
#include <sstream>
#include "device.h"
#include "tv_set.h"


std::string tv_set::test() const
{
    std::stringstream ss;
    ss << "tv_set" << std::endl;
    ss << device::test();    
    return ss.str();
}

tv_set::~tv_set()
{
}
 
device * tv_set::clone () const
{
    return new tv_set (*this);
}
