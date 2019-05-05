/*
 CH08-320142
 a5 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#ifndef TournamentMemeber_hpp
#define TournamentMemeber_hpp

#include <iostream>
#include <cstring>

class TournamentMember {
protected:
    //properties
    char firstName[31];
    char lastName[31];
    char birth[11];
    static std::string location;
    
    //new properties
    double height;
    int age;
    
public:
    //Empty constructor
    TournamentMember();
    //parametric constructor
    TournamentMember(const char*, const char*, const char*, double, int);
    //destructor
    ~TournamentMember();
    //copy constructor
    TournamentMember(const TournamentMember&);
    
    //methods
    static void newlocation(std::string);
    void print();
    
    //inline setters
    void setFirst(const char* newfirst) { strcpy(firstName, newfirst); }
    void setLast(const char* newlast) { strcpy(lastName, newlast); }
    void setBirth(const char* newbirth) { strcpy(birth, newbirth); }
    void setHeight(double newheight) { height = newheight; }
    void setAge(double newage) { age = newage; }
    
    //inline getters
    const char* getFirst() { return firstName; }
    const char* getLast() { return lastName; }
    const char* getBirth() { return birth; }
    double getHeight() { return height; }
    int getAge() { return age; }
    
    
};

//New class
class Player : public TournamentMember{
private:
    //properties
    int number;
    std::string position;
    int goals;
    std::string foot;
    
public:
    //constructors and destructors
    Player();
    ~Player();
    Player(const char*, const char*, const char*, double,
           int, int, std::string, int, std::string);
    Player(const Player&);
    
    //inline setters
    void setNumber(int newnumber) {number = newnumber;}
    void setPosition(std::string newposition) {position = newposition;}
    void setFoot(std::string newfoot) {foot = newfoot;}
    
    //inline getters
    int getNumber() {return number;}
    std::string getPosition() {return position;}
    int getGoals() {return goals;}
    std::string getFoot() {return foot;}
    
    //methods
    void print();
    void increment();
    
    
};



#endif /* TournamentMemeber_hpp */
