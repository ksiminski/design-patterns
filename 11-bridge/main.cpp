/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <sstream>
#include <string> 

/** Bridge is a STRUCTURAL desing pattern that separated a client class from its dependencies. 
It is an example of dependency inversion principle. A client do not use other class, a client does not depend on a class, but depends on an interface.

In our example a remote control operates on a device. Remote_control is base class for a hierarchy of remote_controls.

Classes implementing a device are gathered into a hierarchy. In our example we have abstract device class implemented by radio, tv_set classes. 

The dependency relation connects base classes of both hierarchies. Abstract device depends on abstract remote_control. In reality objects in the relation are eg. an tv_set object and a muting_remote object. 


*/ 

#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

#include "simple_remote.h"
#include "muting_remote.h"

#include "tv_set.h"
#include "radio.h"

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
   muting_remote muting_remote_for_Sapphire (new tv_set());
   
   muting_remote_for_Sapphire.channel_up();
   std::cout << muting_remote_for_Sapphire.test_device() << std::endl;
   
   muting_remote_for_Sapphire.volume_up();
   muting_remote_for_Sapphire.volume_up();
   muting_remote_for_Sapphire.volume_up();
   muting_remote_for_Sapphire.volume_up();
   
   std::cout << muting_remote_for_Sapphire.test_device() << std::endl;
   
   muting_remote_for_Sapphire.mute();
   std::cout << muting_remote_for_Sapphire.test_device() << std::endl;
   muting_remote_for_Sapphire.unmute();
   std::cout << muting_remote_for_Sapphire.test_device() << std::endl;
   
   return 0; 
}

