/*
 CH08-320142
 a4 p5.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Instance for regular polygon
    RegularPolygon r("Pentagon", 1, 1, 5);
    r.printName();
    cout << endl;
    
    //Instance for circle
    Circle c("Circle", 3, 4, 7);
    c.printName();
    cout << "Perimeter: " << c.perimeter() << endl;
    cout << "Area: " << c.area() << endl;
    cout << endl;
    
    //Instance for rectangle
    Rectangle rect("Rectangle", 3, 5, 8, 9);
    rect.printName();
    cout << "Perimeter: " << rect.perimeter() << endl;
    cout << "Area: " << rect.area() << endl;
    cout << endl;
    
    //Instance for square
    Square sq("Square", 3, 5, 6);
    sq.printName();
    cout << "Perimeter: " << sq.perimeter() << endl;
    cout << "Area: " << sq.area() << endl;
    cout << endl;
    
    return 0;
    
}
