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

#include "radio_factory.h"
#include "tv_set_factory.h"


/** Abstract factory is often implemented as singleton. 
And so we have done in this example.  */

int main ()
{
    
   device_factory & unitra_radio = radio_factory::getInstance(); // singleton
   device_factory & unitra_tv = tv_set_factory::getInstance();   // singleton 
   
   
   std::cout << "radio Daisy" << std::endl;
   simple_remote simple_remote_for_Daisy (unitra_radio.produce()); // factory 

   std::cout << simple_remote_for_Daisy.test_device () << std::endl;

   simple_remote_for_Daisy.channel_up();
   simple_remote_for_Daisy.channel_up();
   simple_remote_for_Daisy.channel_up();

   std::cout << simple_remote_for_Daisy.test_device () << std::endl;


   std::cout << "TV set Sapphire" << std::endl;
   muting_remote remote_for_Sapphire (unitra_tv.produce());   // factory 

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
   remotes.push_back(new muting_remote(unitra_radio.produce()));   // factory 

   for (auto & p : remotes)
       std::cout << p->test_device() << std::endl;

   for (auto & p : remotes)
       delete p;

   std::cout << "vector of devices" << std::endl;
   std::vector<device *> devices;
   devices.push_back(unitra_radio.produce());
   devices.push_back(unitra_tv.produce());

   for (auto & d : devices)
       std::cout << d->test() << std::endl;

   for (auto & d : devices)
       delete d;

   return 0; 
}

