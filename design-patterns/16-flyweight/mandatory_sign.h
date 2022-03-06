/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef MANDATORY_SIGN_H
#define MANDATORY_SIGN_H
 
#include <string>



class mandatory_sign : public sign 
{
    // 
public:
    mandatory_sign (const std::string & symbol);
    virtual std::string to_string () const;
    virtual ~mandatory_sign ();
};

#endif 
