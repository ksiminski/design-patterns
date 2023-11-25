/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SINGLETON_H
#define SINGLETON_H

#include <string>

/** The class has only one object. It is impossible to instantiaze more objects. */
template <class T>
class singleton
{
  protected:
    singleton() ///< Private constructor prohibits simple declaration of a new object.
    {}
    
  public:
      
    /** Static method is accessible even if no object exists. If there is no object the method creates one. If there is an object, a new one is not created -- just a reference to the existing object is returned. */  
    static T & getInstance ()
    {
       static T the_only_object;
       return the_only_object;
    }
    
    singleton (const singleton &  original) = delete; ///< It is impossible to copy the object.
    singleton (const singleton && original) = delete; ///< It is impossible to copy the object.
    singleton & operator= (const singleton &  orig) = delete;  ///< It is impossible to copy the object.
    singleton & operator= (const singleton && orig) = delete;  ///< It is impossible to copy the object.
    ///-------------------
   
};


#endif
