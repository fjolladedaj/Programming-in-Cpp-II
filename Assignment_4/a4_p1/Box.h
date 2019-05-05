/*
 CH08-320142
 a4 p1.cpp
 Fjolla Dedaj 
 f.dedaj@jacobs-university.de
 */

#include <string>

class Boxes {
private:
    //Properties
    double height;
    double width;
    double depth;
    
public:
    //empty constructor
    Boxes();
    //parametric constructor
    Boxes(double, double, double);
    //Destructor
    ~Boxes();
    
    //The setters
    void setHeight(double newheight);
    void setWidth(double newwidth);
    void setDepth(double newdepth);
    
    //The getters
    double volume();
    double getHeight();
    double getWidth();
    double getDepth();

};

