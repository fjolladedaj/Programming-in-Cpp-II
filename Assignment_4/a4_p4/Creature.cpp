/*
 CH08-320142
 a4 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{
    cout << "Creature constructor is being called" << endl;
}

Creature::~Creature() {
    //Add corresponding message
    cout << "Creature destructor is being called!" << endl;
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{
    //Add corresponding message for constructor
    cout << "Wizard constructor is being called:" << endl;
}

Wizard::~Wizard() {
    //Add corresponding message for distructor
    cout << "Wizard destructor is being called" << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << distFactor * distance
    << " meters!\n";
}

//added
Wizard::Wizard(int obj)
{
    distFactor = obj;
    cout<<"New Wizard object:" << endl;
}

Alicorn::Alicorn() : distFactor(5)
{
    //Add corresponding message for constructor
    cout << "Alicorn constructor is being called:" << endl;
}

Alicorn::~Alicorn() {
    //Add corresponding message for distructor
    cout << "Alicorn destructor is being called!" << endl;
}

void Alicorn::fly() const {
    cout << "Flying " << distance * distFactor
    << " meters!" << endl;
}

Alicorn::Alicorn(int obj2)
{
    distFactor = obj2;
    cout<<"New Alicorn object" << endl;
}

Alicorn::Alicorn(int &obj3)
{
    distFactor = obj3;
    cout<<"Third object\n" << endl;
}

Dragon::Dragon(): distFactor(2)
{
    //Add corresponding message for constructor
    cout << "Dragon constructor is being called:" << endl;
}

Dragon::~Dragon() {
    //Add corresponding message for distructor
    cout << "Dragon destructor is being called!" << endl;
}

void Dragon::breathFire() const {
    cout << "Breathing fire for "
    << distance * distFactor << " meters!\n" << endl;
}

void Dragon::walk(int w) const {
    cout << "Walking for "
    << distance * distFactor << " meters!\n" << endl;
}

void Dragon::hunt(int h) const {
    cout << "Hunting for "
    << distance * distFactor << " meters!\n" << endl;
}
