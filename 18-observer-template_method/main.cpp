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

#include "radio.h"
#include "newspaper.h"
#include "rss_reader.h"
#include "analog_receiver.h"

/** Observer is a BEHAVIOURAL design pattern. 
 An observer is an object that responds to changes of state of other objects.
 
 */

int main ()
{
   // let's define some senders  
   radio local_radio ("Local Radio");
   radio music_4U ("Muzzik4U");
   radio news_24h ("News 24h");
   
   newspaper The_Gliwice_Times ("The Gliwice Times");
   newspaper news_monitor ("News monitor");
   newspaper The_Gliwice_Post ("The Gliwice Post");
   
   
   // The senders are observed by observers:
   rss_reader phone_reader, laptop;
   analog_receiver kitchen_radio;
   
   // Senders accept subscriptions of observers:
   local_radio.accept_subscription (& kitchen_radio);
   local_radio.accept_subscription (& phone_reader);
   local_radio.accept_subscription (& laptop);
   
   The_Gliwice_Times.accept_subscription (& kitchen_radio);
   news_24h.accept_subscription (& phone_reader);
   news_24h.accept_subscription (& laptop);
   The_Gliwice_Post.accept_subscription (& phone_reader);
   
   // And how seders send some news and observers respond:
   local_radio.send("Vulcano explosion"); // local_radio has three observers
   music_4U.send("Tsunami in Macaronesia"); // no observer!
   news_24h.send("New Sunspots"); // two observers
   The_Gliwice_Times.send("Member of Parliament drunken at the wheel!"); // one observer
   news_monitor.send("Highway closed"); // no observer 
   The_Gliwice_Post.send("Is it going to be better?"); // one observer
    
   return 0; 
}

