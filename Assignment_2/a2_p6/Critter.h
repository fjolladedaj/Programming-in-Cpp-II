/*
 CH08-320142
 a2 p6.cpp
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

public: // business logic methods are public
	// setter methods
    void setName(std::string& newname){
        name = newname;
        //alternative solution to b)
    }
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};
