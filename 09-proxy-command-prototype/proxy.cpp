/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>

#include "command.h"
#include "proxy.h"

proxy::proxy(const command& com)
{
    pCommand = com.clone();  // prototype design pattern
}

proxy::~proxy ()
{
   // delete what is to delete
   delete pCommand;
   pCommand = nullptr;
}

proxy::proxy (const proxy & wzor) : command(wzor)
{
   // copy what is to copy
   pCommand = wzor.pCommand ? wzor.pCommand->clone() : nullptr;
}

proxy & proxy::operator= (const proxy & wzor)
{
   if (this == & wzor)
      return *this;

   command::operator=(wzor);

   // remove what is to remove
   delete pCommand;

   // allocate what is to allocate
   pCommand = wzor.pCommand ? wzor.pCommand->clone() : nullptr;

   return *this;
}

proxy::proxy (proxy && wzor) : command(wzor)
{
   // swap what is to swap
   std::swap(pCommand, wzor.pCommand);

}

proxy & proxy::operator= (proxy && wzor)
{
   if (this == & wzor)
      return *this;

   command::operator=(wzor);

   // swap what is to swap
   std::swap(pCommand, wzor.pCommand);

   return *this;
}


command * proxy::clone() const
{
    return new proxy(*this);
}


void proxy::do_command(std::vector<double>& numbers) const
{
    std::cerr << "before executing the command: " << std::endl;
    print(std::cerr, numbers);
    if (pCommand)
        pCommand->do_command(numbers);
    std::cerr << "after executing the command: " << std::endl;
    print(std::cerr, numbers);    
}

void proxy::undo_command(std::vector<double>& numbers) const
{
    std::cerr << "before reverting the command: " << std::endl;
    print(std::cerr, numbers);
    if (pCommand)
        pCommand->undo_command(numbers);
    std::cerr << "after reverting the command: " << std::endl;
    print(std::cerr, numbers);   
}


void proxy::print(std::ostream& s, std::vector<double>& numbers) const 
{
    for (const auto & d : numbers)
        s << d << " ";
    s << std::endl;
}

