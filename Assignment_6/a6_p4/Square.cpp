/*
 CH08-320142
 a6 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "Square.h"

Square::Square(const char *c, double s)
: Rectangle(c, s, s) {
    side = s;
}

Square::~Square() {
}

double Square::calcArea() const {
    std::cout << "calcArea of Square...";
    return side * side;
}

double Square::calcPerimeter() const {
    std::cout << "calcPerimeter of Square...";
    return 4 * side;
}
