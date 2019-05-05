/*
 CH08-320142
 a2 p7.cpp
 Fjolla Dedaj
 f.dedaj@acobs-university.de
 */

#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter() {
    name = "critter";
    height = 10;
    hunger = 0;
    boredom = 0;
}

Critter::Critter(std::string newname) {
    name = newname;
    height = 10;
    hunger = 0;
    boredom = 0;
}

Critter::Critter(std::string newname, int newheight, int newhunger, double newboredom) {
    name = newname;
    height = newheight;
    hunger = newhunger;
    boredom = newboredom;
}


void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::setAdjective(string& newadjective) {
    adjective = newadjective;
}

void Critter::setNrOfSiblings(int newsiblings) {
    nrOfSiblings = newsiblings;
}

//adjust the print function according to the new properties
void Critter::print() {
    cout << "I am " << name << ". My hunger level is "
    << hunger << ".";
    /*if and else check whether the adjective
     should have the article 'a' or 'an' */
    if(adjective[0] != 'a' && adjective[0] != 'e' &&
       adjective[0] != 'i' && adjective[0] != 'o') {
        cout << " I am a " << adjective;
    }
    else {
        cout << " I am an " << adjective;
    }
    cout << " Critter and I have "
    << nrOfSiblings << " siblings." << endl;
}

//return the hunger level
int Critter::getHunger() {
    return hunger;
}

//return the nr of siblings
int Critter::getNrOfSiblings() {
    return nrOfSiblings;
}


