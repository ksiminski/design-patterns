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


/** Now we add a factory of devices. We use a CREATIONAL design pattern: abstract factory.
The abstract factory design pattern has the same class diagram as the bridge design pattern.
In the abstract factory we have two hierarchies: hierarchy of products (in our example it is hierarchy of devices) and a hierarchy of factories. Please notice that in our example the hierarchy of devices is simultaneously a part of the abstract factory and a part of the bridge design patterns! 

We do not produce object directly with new operator. We just use factories. In is common in creational pattern to hermitise (to hide) creation of objects. 

*/

int main ()
{
   radio_factory unitra_radio;  
   tv_set_factory unitra_tv;

   std::cout << "radio Daisy" << std::endl;
   simple_remote simple_remote_for_Daisy (unitra_radio.produce()); // abstract factory 
   
   std::cout << simple_remote_for_Daisy.test_device () << std::endl;
   
   simple_remote_for_Daisy.channel_up();
   simple_remote_for_Daisy.channel_up();
   simple_remote_for_Daisy.channel_up();
   
   std::cout << simple_remote_for_Daisy.test_device () << std::endl;
   
   
   std::cout << "TV set Sapphire" << std::endl;
   muting_remote remote_for_Sapphire (unitra_tv.produce());   // abstract factory 
   
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



