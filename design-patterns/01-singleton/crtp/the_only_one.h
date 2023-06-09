#ifndef THE_ONLY_ONE_H
#define THE_ONLY_ONE_H

#include "singleton.h"


class the_only_one : singleton<the_only_one>  // <-- [PL] dziwna rekursja szablonów | [EN] curiously recurring template pattern CRTP
{
    // [PL] Potrzebujemy dostępu do prywatnego konstruktora singletonu 
    // [EN] We need access to the private constructor of the singleton.
    friend class singleton<the_only_one>; 
    the_only_one(); // [PL] prywatny konstruktor | [EN] prywatny konstruktor
    
    int value; // [PL] wartość przechowywana | [EN] stored value    
public: 
    void setValue (const int v);
    int getValue() const;
    
    // [PL] dostęp do metody klasy bazowej
    // [EN] access to the method of the base class
    using singleton<the_only_one>::getInstance; 
};

#endif
