/*
 CH08-320142
 a4 p5.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */


// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std;

//SHAPE
Shape::Shape(const string& n) : name(n) {
    name = n;
}

Shape::Shape() {
    name = "Unknown";
}

Shape::Shape(const Shape &obj) {
    name = obj.name;
}

Shape::~Shape() {
    
}

void Shape::printName() const{
    cout << name << endl;
}

void Shape::setName(string newname) {
    name = newname;
}

string Shape::getName() {
    return name;
}



//CENTERED SHAPE
CenteredShape::CenteredShape(const string& n,
                             double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() {
    x = 0;
    y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& obj) {
    x = obj.x;
    y = obj.y;
}

CenteredShape::~CenteredShape() {
}


void CenteredShape::setX(double newx) {
    x = newx;
}

void CenteredShape::setY(double newy) {
    y = newy;
}

double CenteredShape::getX() {
    return x;
}

double CenteredShape::getY() {
    return y;
}



//REGULAR POLYGON
RegularPolygon::RegularPolygon(const string& n,
                               double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() {
    EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon& obj) {
    EdgesNumber = obj.EdgesNumber;
}

RegularPolygon::~RegularPolygon() {
    
}

void RegularPolygon::setEdgesNumber(int newEdgesNumber) {
    EdgesNumber = newEdgesNumber;
}

int RegularPolygon::getEdgesNumber() {
    return EdgesNumber;
}



//CIRCLE
Circle::Circle(const string& n, double nx, double ny, double r) :
CenteredShape(n, nx, ny)
{
    radius = r;
}

Circle::Circle() {
    radius = 0;
}

Circle::Circle(const Circle &obj) {
    radius = obj.radius;
}

Circle::~Circle() {
    
}

void Circle::setRadius(double newradius) {
    radius = newradius;
}

double Circle::getRadius() {
    return radius;
}

//Use formula for perimeter
double Circle::perimeter() {
    double perimeter = 2*3.14 * this-> radius;
    return perimeter;
}

//Use formula for area
double Circle::area() {
    double area = 3.14 * this->radius * this->radius;
    return area;
}



//RECTANGLE
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth,
                     double nheight) : RegularPolygon(n, nx, ny, 4)
{
    width = nwidth;
    height = nheight;
}

Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(const Rectangle &obj) {
    width = obj.width;
    height = obj.height;
}

Rectangle::~Rectangle() {
    
}

void Rectangle::setWidth(double newwidth) {
    width = newwidth;
}

void Rectangle::setHeight(double newheight) {
    height = newheight;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::getHeight() {
    return height;
}

//Use formula for perimeter
double Rectangle::perimeter() {
    double perimeter = this->width * 2 + this->height * 2;
    return perimeter;
}

//Use formula for area
double Rectangle::area() {
    double area = this->width * this->height;
    return area;
}


//SQUARE
Square::Square(const string& n, double nx, double ny, double nside) :
Rectangle(n, nx, ny, 4, 4)
{
    side = nside;
}

Square::Square() {
    side = 1;
}

Square::Square(const Square &obj) {
    side = obj.side;
}

Square::~Square() {
    
}

void Square::setSide(double newside) {
    side = newside;
}

double Square::getSide() {
    return side;
}

//Use formula for perimeter
double Square::perimeter() {
    double perimeter = this -> side * 4;
    return perimeter;
}

//Use formula for area
double Square::area() {
    double area = this->side * side ;
    return area;
}
