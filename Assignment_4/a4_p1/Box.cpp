/*
 CH08-320142
 a4 p1.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <cstdlib>
#include <iostream>
#include "Box.h"

using namespace std;

//set default values to 1 using the empty constructor
Boxes::Boxes(){
    height = 1;
    width = 1;
    depth = 1;
}

/*property gets the value of the
parameter in parametric constructor*/
Boxes::Boxes(double newheight,
             double newwidth, double newdepth) {
    height = newheight;
    width = newwidth;
    depth = newdepth;
}

//Destructor can be empty
Boxes::~Boxes() {
    
}

//Define the body of the setters
void Boxes::setHeight(double newheight) {
    height = newheight;
}

void Boxes::setWidth(double newwidth) {
    width = newwidth;
}

void Boxes::setDepth(double newdepth) {
    depth = newdepth;
}

//Define the body of the getters
double Boxes:: getHeight() {
    return height;
}

double Boxes::getWidth() {
    return width;
}

double Boxes::getDepth() {
    return depth;
}

//Define the formula for volume calculation
double Boxes::volume() {
    return height * width * depth;
}

