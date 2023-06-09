/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SINGLETON_H
#define SINGLETON_H

#include <string>

/** The class has only one object. It is impossible to instantiaze more objects. */
class singleton
{
    int _value;
    singleton(); ///< Private constructor prohibits simple declaration of a new object.
    
  public:
      
    /** Static method is accessible even if no object exists. If there is no object the method creates one. If there is an object, a new one is not created -- just a reference to the existing object is returned. */  
    static singleton & getInstance ();
    
    singleton (const singleton & original) = delete; ///< It is impossible to copy the object.
    singleton & operator= (const singleton & orig) = delete;  ///< It is impossible to copy the object.
    ///-------------------
    
    
    std::string to_string () const ;
    
    int getValue () const;
    void setValue (const int value);
};


#endif
