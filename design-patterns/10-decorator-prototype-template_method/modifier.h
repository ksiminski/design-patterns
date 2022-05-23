/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef MODIFIER_H
#define MODIFIER_H

#include <vector>
#include <string>

/** Abstract class representing a modifier. Simultaneously it is an item of a singly linked list of modifiers. */
class modifier
{
protected:
    modifier * pNext = nullptr;
    
    /** This method is used in modify method, but is not implemented in this class. 
        It is implemented in derived classes. */
    virtual std::vector<std::string> operation (std::vector<std::string> str) const = 0;
    
public:
    modifier ();
    modifier (const modifier & mod);
    modifier (modifier && mod);
    modifier & operator= (const modifier & mod);
    modifier & operator= (modifier && mod);
    
    /** The method add a modifier to a list of modifiers. */
    void addModifier (const modifier & mod);
    
    /** The method uses all modifiers in a list to modify a vector of strings.
        Template class design pattern. This method is only "partially" implemented in this class,
        because it calls operation method that is NOT implemented in this class. */
    std::vector<std::string> modify (std::vector<std::string> str) const;
        
    virtual modifier * clone () const = 0; ///< prototype design pattern
    virtual ~modifier();
};

#endif
