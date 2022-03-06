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

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

#include "simple_remote.h"
#include "muting_remote.h"

#include "tv_set.h"
#include "radio.h"

/** In this example we add clone method im both hierarchies. Now we can easily implement copy constructors etc. */

int main ()
{
   std::cout << "radio Daisy" << std::endl;
   simple_remote simple_remote_for_Daisy (new radio());
   
   std::cout << simple_remote_for_Daisy.test_device () << std::endl;
   
   simple_remote_for_Daisy.channel_up();
   simple_remote_for_Daisy.channel_up();
   simple_remote_for_Daisy.channel_up();
   
   std::cout << simple_remote_for_Daisy.test_device () << std::endl;
   
   
   std::cout << "TV set Sapphire" << std::endl;
   muting_remote remote_for_Sapphire (new tv_set());
   
   remote_for_Sapphire.channel_up();
   std::cout << remote_for_Sapphire.test_device() << std::endl;
   
   remote_for_Sapphire.volume_up();
   remote_for_Sapphire.volume_up();
   remote_for_Sapphire.volume_up();
   remote_for_Sapphire.volume_up();
   
   std::cout << remote_for_Sapphire.test_device() << std::endl;
   
   remote_for_Sapphire.mute();
   std::cout << remote_for_Sapphire.test_device() << std::endl;
   remote_for_Sapphire.unmute();
   std::cout << remote_for_Sapphire.test_device() << std::endl;
   
    
   std::cout << "copy of remote" << std::endl;
   muting_remote remote_for_Nephryte (remote_for_Sapphire);
   
   std::cout << remote_for_Nephryte.test_device() << std::endl;
   
   std::cout << "vector of remotes" << std::endl;
   std::vector<remote_control *> remotes;
   
   remotes.push_back(remote_for_Nephryte.clone());
   remotes.push_back(remote_for_Sapphire.clone());
   remotes.push_back(simple_remote_for_Daisy.clone());
   remotes.push_back(new muting_remote(new radio()));
   
   for (auto & p : remotes)
       std::cout << p->test_device() << std::endl;
   
   for (auto & p : remotes)
       delete p;
   
   
   return 0; 
}

