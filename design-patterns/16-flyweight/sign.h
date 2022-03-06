/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef SIGN_H
#define SIGN_H
 
#include <string> 

class sign 
{
protected:
    std::string _symbol; 
public: 
    sign (const std::string & symbol); 
    virtual std::string to_string () const = 0;
    virtual ~sign ();
};
#endif 
