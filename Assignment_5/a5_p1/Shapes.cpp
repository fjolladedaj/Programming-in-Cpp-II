/*
 CH08-320142
 a5 p1.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n,
                             double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n,
                               double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}



//HEXAGON

//parametric constructor
Hexagon::Hexagon(string n, double nx, double ny, double newside,
                 string newcolor) : RegularPolygon(n, nx, ny, 6) {
    side = newside;
    color = newcolor;
    cout << "Parametric constructor is being called!" << endl;
}

//Copy constructor
Hexagon::Hexagon(const Hexagon& obj) :
RegularPolygon(obj.name, obj.x, obj.y, obj.EdgesNumber)
{
    side = obj.side;
    color = obj.color;
    cout << "Copy Constructor is being called!" << endl;
}

//destructor
Hexagon::~Hexagon() {
    cout << "Destructor is being called!" << endl;
}

//Calculate perimeter using the formula
double Hexagon::perimeter() {
    side = x;
    return x * 6;
}

//Calculate the area using the formula
double Hexagon::area() {
    side = x;
    return ((3 * sqrt(3) * (x * x)) / 2);
}


//setters
void Hexagon::setSide(double newside) {
    side = newside;
}

void Hexagon::setColor(string newcolor) {
    color = newcolor;
}

//getters
double Hexagon::getSide() {
    return side;
}

string Hexagon::getColor() {
    return color;
}





