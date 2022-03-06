/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include "graphical_object.h"
#include "composed_object.h"

composed_object::composed_object ()
{
}

composed_object::~composed_object ()
{
   // delete what is to delete
    for (auto & ob : components)
    {
        delete ob;
        ob = nullptr;   
    }
    
}

composed_object::composed_object (const composed_object & pattern) : graphical_object(pattern)
{
   // copy what is to copy
    for (auto & ob : pattern.components)
    {
        components.push_back(ob->clone());
    }
}

composed_object & composed_object::operator= (const composed_object & pattern)
{
   if (this == & pattern)
      return *this;

   graphical_object::operator=(pattern);

   // remove what is to remove
    for (auto & ob : components)
    {
        delete ob;
        ob = nullptr;   
    }
    components.clear();

   // allocate what is to allocate
    
    for (auto & ob : pattern.components)
    {
        components.push_back(ob->clone());
    }

   return *this;
}

composed_object::composed_object (composed_object && pattern) : graphical_object(pattern)
{
   // swap what is to swap
   std::swap (components, pattern.components);
}

composed_object & composed_object::operator= (composed_object && pattern)
{
   if (this == & pattern)
      return *this;

   graphical_object::operator=(pattern);

   // swap what is to swap
   std::swap (components, pattern.components);

   return *this;
}

graphical_object * composed_object::clone() const
{
    return new composed_object(*this);
}


void composed_object::add(const graphical_object& graph)
{
    components.push_back(graph.clone()); // prototype design pattern
}

void composed_object::transform()
{
    for (auto & ob : components)
        ob->transform();
}

void composed_object::draw() const
{
    for (const auto & ob:components)
        ob->draw();
}



