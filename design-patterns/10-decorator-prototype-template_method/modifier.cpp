/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <string>
#include <vector>
#include "modifier.h"


std::vector<std::string> modifier::modify(std::vector<std::string> text) const     // This method is a template design pattern.
{   
    auto result = operation (text);  // Operation method is NOT implemented in this class! It is implemented in derived classes.
    if (pNext)
        return pNext->modify(result);
    else
        return result;
}


void modifier::addModifier(const modifier& mod)
{
    if (not pNext)
        pNext = mod.clone();
    else 
        pNext->addModifier(mod);
}

modifier::modifier()
{
    pNext = nullptr;
}

modifier::modifier(const modifier& mod)
{
    if (mod.pNext) 
        pNext = mod.pNext->clone();
    else
        pNext = nullptr;
}


modifier::~modifier()
{
    if (pNext)
        delete pNext;
}

modifier::modifier(modifier && mod)
{
    std::swap (pNext, mod.pNext);
}

modifier & modifier::operator=(const modifier& mod)
{
    if (this == & mod)
        return *this;
    
    if (pNext)
        delete pNext;
    
    pNext = mod.clone();
    
    return *this;
}

modifier & modifier::operator=(modifier&& mod)
{
    if (this == & mod)
        return *this;
    
    std::swap (pNext, mod.pNext);
    
    pNext = mod.clone();
    
    return *this;
}
