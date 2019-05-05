/*
 CH08-320142
 a2 p6.cpp
 Fjolla Dedaj
 f.dedaj@acobs-university.de
 */

#include <iostream>
#include "Critter.h"

//using namespace std;

/* setName() misses because the definition of the method is moved
 within the class "Critter" as an alternative solution to b) */

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	std::cout << "I am " << name <<
    ". My hunger level is " << hunger << "." << std::endl;
}

int Critter::getHunger() {
	return hunger;
}
