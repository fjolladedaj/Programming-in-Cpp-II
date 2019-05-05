/*
 CH08-320142
 a6 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#ifndef Square_hpp
#define Square_hpp

#include <iostream>
#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;
public:
    Square(const char*, double);
    ~Square();
    double calcArea() const;
    double calcPerimeter() const;

};


#endif /* Square_hpp */
