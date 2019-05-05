/*
 CH08-320142
 a5 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */


#include "TournamentMember.h"

#include <iostream>
#include <cstring>

using namespace std;


int main() {
    
    //PLAYER CLASS INSTANCES
    
    //default constructor
    Player p1;
    p1.print();
    //parametric constructors
    Player p2("Fjolla", "Dedaj", "2000-01-18",
              164, 18, 1, "Center", 54, "Right");
    p2.print();
    Player p3("Lionel", "Messi", "1987-06-24",
              170, 31, 11, "Forward", 100, "Left");
    p3.print();
    Player p4("Cristiano", "Ronaldo", "1985-02-05",
              187, 33, 7, "Forward", 2, "Right");
    p4.print();
    
    //Copy constructor
    Player p5(p4);
    p5.print();
    
    cout << endl;
    
    
    //change location
    TournamentMember::newlocation("Bremen");
    cout << endl;
    
    p1.print();
    cout << endl;
    
    /*print the instances and use the increment method to
     test the functionalities of the Player class*/
    
    p2.print();
    p2.increment(); //increment nr of goals
    p2.print();
    cout << endl;
    
    p3.print();
    cout << endl;
    
    
    p4.print();
    cout << endl;
    
    
    p5.print();
    cout << endl;
    
    return 0;
    
}
