/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef DEVICE_H    
#define DEVICE_H    

#include <string>

class device 
{
protected: 
    int _channel = 0;
    int _volume = 0;
public: 
    int getChannel () const;
    void setChannel (const int channel);
    
    int getVolume () const;
    void setVolume (const int volume);
    
    virtual std::string test () const = 0; 
    
    virtual ~device();
}; 

#endif 
