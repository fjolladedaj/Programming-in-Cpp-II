/*
 CH08-320142
 a3 p2.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter() {
    //empty constructor
    name = "critter";
    height = 10;
    hunger = 0;
    boredom = 0;
    cout << "Constructor one is being called:" << endl;
    //print the corresponding message
}

Critter::Critter(std:: string newname) {
    //parametric constructor containing name only
    name = newname;
    height = 10;
    hunger = 0;
    boredom = 0;
    cout << "Constructor two is being called:" << endl;
    //print the corresponding message
}

Critter::Critter(std:: string newname,
                 int hng, int brd, double hgh) {
    //parametric constructor containing all properties
    name = newname;
    hunger = hng;
    boredom = brd;
    height = hgh;
    cout << "Constructor three is being called:" << endl;
    //print the corresponding message
}

void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(int newheight) {
    height = newheight;
}

void Critter::print() {
    cout << "I am " << name << endl << "My hunger level: "
    << hunger << endl << "My boredom level: " << boredom <<
    endl << "My height: " << height << endl;
}

string Critter::getName() {
    return name;
}

int Critter::getHunger() {
    return hunger;
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}
