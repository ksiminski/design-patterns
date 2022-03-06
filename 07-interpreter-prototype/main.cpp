/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <string>

#include "symbol.h"
#include "terminal.h"
#include "nonterminal.h"
#include "integer.h"
#include "character.h"
#include "identifier.h"
#include "function.h"
#include "parameter.h"
#include "parameters.h"


#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 

/** Interpreter is a BEHAVIORAL design pattern. It is used to build derivation trees. This design pattern in commonly used in compilers. A compiler reads an input and builds a derivation tree according to a grammar (eg. C++, Java, or something else's grammar). The class diagram of the interpreter is exactly the same as the class diagram of the composite design pattern.
It has abstract class "symbol" that is implemented by terminals and nonterminals. Nonterminals are composites and are composed of components -- symbols. Nonterminals are internal nodes in a derivation tree. Terminals do not have any components -- they are leaves in a derivation tree. Each symbol has to implement method "emit". The method is responsible for interpretation of a symbol.
In compilers each symbol in a grammar has a separate representing class. 


TASK: Modify emits in classes to get a C++/Java/Pascal/Python/... function declarations.
 */ 

int main()
{
    // Identifiers are terminals.   
    identifier id1 ("wide_character");
    identifier id3 ("index");
    identifier id2 ("counter");
    identifier id4 ("multi_parameter_function");
    identifier id5 ("no_parameter_function");
    identifier id6 ("one_parameter_function");
    
    // Parameters are nonterminals.
    parameter par1;
    // So we have to add some components.
    par1.symbols.push_back(new character());
    par1.symbols.push_back(new identifier (id1));
    
    parameter par2;
    par2.symbols.push_back(new integer());
    par2.symbols.push_back(new identifier (id2));
    
    parameter par3;
    par3.symbols.push_back(new integer());
    par3.symbols.push_back(new identifier (id3));
    
    // "Parameters" class holds a sequence of parameters: one, ... 
    parameters params1;
    params1.symbols.push_back (new parameter (par1));
    
    parameters params2;
    // ... two, ...
    params2.symbols.push_back (new parameter (par2));
    params2.symbols.push_back (new parameters (params1));
    
    parameters params3;
    // ... two, ...
    params3.symbols.push_back (new parameter (par3));
    params3.symbols.push_back (new parameters (params2));
    
    // Function is a nonterminal -- it has components: ...
    function fun0;
    fun0.symbols.push_back (new character());           // ... return type: ...
    fun0.symbols.push_back (new identifier (id5));      // ... name, ...
    fun0.symbols.push_back (new parameters ());         // ... and a list of parameters. 

    function fun1;
    fun1.symbols.push_back (new integer());
    fun1.symbols.push_back (new identifier (id6));
    fun1.symbols.push_back (new parameters(params1));
    

    function fun3;
    fun3.symbols.push_back (new integer());
    fun3.symbols.push_back (new identifier (id4));
    fun3.symbols.push_back (new parameters(params3));
    
    
    
    std::cout << fun0.emit() << std::endl;    
    std::cout << fun1.emit() << std::endl;    
    std::cout << fun3.emit() << std::endl;    
    
    
    
    return 0;
}
