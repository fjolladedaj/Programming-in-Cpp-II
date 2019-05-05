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

//define the location
string TournamentMember::location = "Spain";

//empty constructor
TournamentMember::TournamentMember() {
    cout << "Empty constructor is being called!" << endl;
    strcpy(firstName, "unknown");
    strcpy(lastName, "unknown");
    strcpy(birth, "unknown");
    height = 0;
    age = 0;
}

//destructor
TournamentMember::~TournamentMember() {
    cout << "Destructor is being called!" << endl;
}

//parametric constructor
TournamentMember::TournamentMember(const char* newfirst, const char* newlast,
                                   const char* newbirth, double newheight, int newage) {
    cout << "Parametric constructor is being called!" << endl;
    strcpy(firstName, newfirst);
    strcpy(lastName, newlast);
    strcpy(birth, newbirth);
    height = newheight;
    age = newage;
    
}

//copy ocnstructor
TournamentMember::TournamentMember(const TournamentMember& obj) {
    cout << "Copy constructor is being called" << endl;
    strcpy(firstName, obj.firstName);
    strcpy(lastName, obj.lastName);
    strcpy(birth, obj.birth);
    height = obj.height;
    age = obj.age;
    
}

//print method
void TournamentMember::print() {
    cout << "Location: " << location << endl;
    cout << "Name: " << firstName << endl;
    cout << "Surname: " << lastName << endl;
    cout << "Date of  birth: " << birth << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Age: " << age << endl;
}

//method to change location
void TournamentMember::newlocation (string loc) {
    location = loc;
    cout << "New location: " << location << endl;
}




//PLAYER CLASS
//Empty constructor
Player::Player():TournamentMember() {
    cout << "Player Empty constructor is being called!" << endl;
    number = 0;
    position = "unknown";
    goals = 0;
    foot = "unknown";
}

//Destructor
Player::~Player() {
    cout << "Player Destructor is being called!" << endl;
}

//Parametric constructor
Player::Player(const char* newfirst, const char* newlast, const char* newbirth,
               double newheight, int newage, int newnumber, string newposition,
               int newgoals, string newfoot) :
TournamentMember(newfirst, newlast, newbirth, newheight, newage) {
    cout << "Player parametric constructor is being called!" << endl;
    number = newnumber;
    position = newposition;
    goals = newgoals;
    foot = newfoot;
}

//Copy constructor
Player::Player(const Player& obj) : TournamentMember(obj) {
    cout << "Player copy constructor is being called!" << endl;
    number = obj.number;
    position = obj.position;
    goals = obj.goals;
    foot = obj.foot;
}

//Increment number of goals
void Player::increment() {
    goals++;
    cout << "New number of goals:" << goals << endl;
    cout << endl;
}

void Player::print() {
    cout << "Location:       " << location << endl;
    cout << "Name:           " << firstName << endl;
    cout << "Surname:        " << lastName << endl;
    cout << "Date of birth:  " << birth << endl;
    cout << "Height:         " << height << " cm" << endl;
    cout << "Age:            " << age << endl;
    cout << "Number:         " << number << endl;
    cout << "Position:       " << position << endl;
    cout << "Goals scored:   " << goals << endl;
    cout << "Foot:           " << foot << endl;
    cout << endl;
}
