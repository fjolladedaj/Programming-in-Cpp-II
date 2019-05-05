/*
 CH08-320142
 a2 p6.cpp
 Fjolla Dedaj
 f.dedaj@acobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    Critter c;
    
    string name;
    int hunger;
    string adjective;
    int siblings;
    
    cout << endl << "Please enter data: " << endl;
    
    
    cout << "Name: ";
    getline(cin, name);
    /* cin >> name; will not work if
     name contains spaces */
    c.setName(name);
    
    cout << "An adjective that describes you: ";
    getline(cin, adjective);
    //include the new property
    c.setAdjective(adjective);
    
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    
    cout << "Siblings: ";
    cin >> siblings;
    //include the other new property
    c.setNrOfSiblings(siblings);
    
    cout << "You have created:" << endl;
    c.print();
    return 0;
}
