/*
 CH08-320142
 a2 p7.cpp
 Fjolla Dedaj
 f.dedaj@acobs-university.de
 */

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int hunger;
    int boredom;
    double height;
    //added properties
    std::string adjective;
    int nrOfSiblings;
    
public: // business logic methods are public
    //constructors
    Critter();
    Critter(std::string);
    Critter(std::string, int, int, double);
    
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setAdjective(std::string& newadjective);
    void setNrOfSiblings(int newsiblings);
    
    // getter method
    int getHunger();
    int getNrOfSiblings();
    
    // service method
    void print();
};
