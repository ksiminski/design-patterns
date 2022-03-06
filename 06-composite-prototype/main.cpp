/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#include <iostream>
#include <string>

#include "line.h"
#include "triangle.h"
#include "point.h"
#include "circle.h"
#include "graphical_object.h"
#include "composed_object.h"


#define debug(x)   std::cerr << __FILE__ << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl 



int main()
{
    composed_object drawing;
    
    composed_object house;
    composed_object tree;
    
    triangle roof;
    line  wall;
    line  floor;
    
    house.add(roof);
    house.add(wall);
    house.add(floor);
    
    line trunk;
    triangle crown;
    
    tree.add(trunk);
    tree.add(crown);
    
    circle sun;
    
    drawing.add(tree);
    drawing.add(house);
    drawing.add(sun);
    
    drawing.transform();
    
    drawing.draw();
    
    
    return 0;
}
