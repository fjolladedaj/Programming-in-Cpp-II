/*
 CH08-320142
 a3 p4.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "Critter.h"

using namespace std;

//These are the seperate methods for converting
int Critter::doubleToInt(double &newhng) {
    return newhng*10;
}

double Critter::intToDouble(int &newhng1) {
    return newhng1/10.0;
}

Critter::Critter() {
    //empty constructor
    name = "critter";
    height = 10;
    hunger = 0;
    boredom = 0;
    thirst = 5;
    cout << "Constructor one is being called:" << endl;
    //print the corresponding message
}

Critter::Critter(std:: string newname) {
    //parametric constructor containing name only
    name = newname;
    height = 10;
    hunger = 0;
    boredom = 0;
    thirst = 5;
    cout << "Constructor two is being called:" << endl;
    //print the corresponding message
}

Critter::Critter(std:: string newname,
                 int hng, int brd, double hgh) {
    //parametric constructor containing all properties
    name = newname;
    hunger = intToDouble(hng);
    boredom = brd;
    height = hgh;
    thirst = 5;
    cout << "Constructor three is being called:" << endl;
    //print the corresponding message
}

//Definition of the new constructor
Critter::Critter(std:: string newname,
                 int hng, int brd, double hgh, double thst) {
    name = newname;
    hunger = intToDouble(hng);
    boredom = brd;
    height = hgh;
    thirst = thst;
    cout << "Constructor four is being called:" << endl;
    //print the corresponding message
}

void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = intToDouble(newhunger);
    //convert to double
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(int newheight) {
    height = newheight;
}

//Define a setter for thirst
void Critter::setThirst(double newthirst) {
    thirst = newthirst;
}

string Critter::getName() {
    return name;
}

int Critter::getHunger() {
    return doubleToInt(hunger);
    //convert back to int
}


int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

//define a getter for thirst
double Critter::getThirst() {
    return thirst;
}

void Critter::print() {
    //change the printing method as well
    cout << "I am " << name << endl << "My hunger level: "
    << doubleToInt(hunger) << endl << "My boredom level: "
    << boredom << endl << "My height: " << height << endl
    << "My thirst level: " << thirst << endl; //print thirst
}

