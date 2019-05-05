/*
 CH08-320142
 a4 p5.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

/*
	Classic shape examples: an inheritance tree in a geometric context
 */
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {
private:
    std::string name;
public:
    Shape(const std::string&);
    Shape();
    Shape(const Shape&);
    ~Shape(); //destructor
    void printName() const;
    //Setter
    void setName(std::string newname);
    //Getter
    std::string getName();
};


class CenteredShape : public Shape {
private:
    double x,y;
public:
    CenteredShape(const std::string&, double, double);
    CenteredShape();
    CenteredShape(const CenteredShape&);
    ~CenteredShape(); //destructor
    //Setters
    void setX(double newx);
    void setY(double newY);
    //Getteres
    double getX();
    double getY();
};



class RegularPolygon : public CenteredShape {
    // a regular polygon is a centered_shape with a number of edges
private:
    int EdgesNumber;
public:
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);
    ~RegularPolygon(); //destructor
    //Setter
    void setEdgesNumber(int newEdgesNumber);
    //Getter
    int getEdgesNumber();
};


class Circle : public CenteredShape {
    // a Circle is a shape with a center and a radius
private:
    double radius;
public:
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);
    ~Circle(); //destructor
    
    //Setter
    void setRadius(double newradius);
    //Getter
    double getRadius();
    
    //Methods
    double perimeter();
    double area();
};


class Rectangle : public RegularPolygon {
private:
    double width, height;
public:
    Rectangle(const std::string&, double, double, double, double);
    Rectangle();
    Rectangle(const Rectangle&);
    ~Rectangle(); //destructor
    //Setters
    void setWidth(double newwidth);
    void setHeight(double newheight);
    //Getters
    double getWidth();
    double getHeight();
    //Methods
    double perimeter();
    double area();
};


class Square : public Rectangle {
private:
    double side;
public:
    Square(const std::string&, double, double, double);
    Square();
    Square(const Square&);
    ~Square(); //destructor
    //Setter
    void setSide(double newside);
    //Getter
    double getSide();
    //Methods
    double perimeter();
    double area();
};

#endif
