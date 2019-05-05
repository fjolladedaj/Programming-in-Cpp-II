/*
 CH08-320142
 a3 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    double hunger;
    int boredom;
    double height;
    int doubleToInt(double &hng);
    double intToDouble(int &hng1);
 
public:
    Critter(); //the empty constructor
    Critter(std::string); //1 parameter only(name)
    Critter(std:: string, int, int, double=15.0);
    //all properties as parameters
    //if height is not provided, it defaults to 15
    
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(int newheight);
    // getter method
    std::string getName();
    int getHunger();
    int getBoredom();
    double getHeight();
    // service method
    void print();
    double convert();
};
