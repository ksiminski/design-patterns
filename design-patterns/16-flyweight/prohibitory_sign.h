/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef PROHIBITORY_SIGN_H
#define PROHIBITORY_SIGN_H

 
#include <string>


class prohibitory_sign : public sign
{
    //     
public:
    prohibitory_sign (const std::string & symbol);
    virtual std::string to_string () const;
    virtual ~prohibitory_sign();
};
	

#endif 
