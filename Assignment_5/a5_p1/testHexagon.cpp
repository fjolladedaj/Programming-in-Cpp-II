/*
 CH08-320142
 a5 p1.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
    //create instances based on the requirements
    Hexagon red("Hexagon1", 2, 1, 2, "red");
    Hexagon yellow("Hexagon2", 10, 1, 10, "yellow");
    Hexagon copy(yellow);
    
    
    //print using the getters
    
    //red hexagon
    cout << "Area of the Red Hexagon: " << red.perimeter() << endl;
    cout << "Area of the Red Hexagon: " << red.area() << endl;
    //yellow hexagon
    cout << "Area of the Yellow Hexagon: " << yellow.perimeter() << endl;
    cout << "Area of the Yellow Hexagon: " << yellow.area() << endl;
    //use the copy constructor
    cout << "Perimeter (from copy constructor): " << copy.perimeter() << endl;
    cout << "Perimeter (from copy constructor): " << copy.area() << endl;
    
    return 0;
}

