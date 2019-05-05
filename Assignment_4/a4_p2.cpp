/*
 CH08-320142
 a4 p2.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>

using namespace std;

class Creature {
public:
    Creature();
    ~Creature();//add destructor
    void run() const;
    
protected:
    int distance;
};

Creature::Creature(): distance(10)
{
    cout << "Creature constructor is being called!" << endl;
}
Creature::~Creature() {
    //Add corresponding message
    cout << "Creature destructor is being called!" << endl;
}

void Creature::run() const
{
    cout << "run() method is being called:" << endl;
    cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature {
public:
    Wizard();
    ~Wizard();//add destructor
    void hover() const;
    
private:
    int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    //Add corresponding message for constructor
    cout << "Wizard constructor is being called!" << endl;
}

Wizard::~Wizard() {
    //Add corresponding message for distructor
    cout << "Wizard destructor is being called!" << endl;
}

void Wizard::hover() const
{
    cout << "hover() method is being called:" << endl;
    cout << "hovering " << (distFactor * distance)
    << " meters!\n";
}

//New class for Alicorn
class Alicorn: public Creature {
private:
    int distFactor2;
public:
    Alicorn();
    ~Alicorn();
    void fly() const;
};

Alicorn::Alicorn() : distFactor2(5)
{
    //Add corresponding message for constructor
    cout << "Alicorn constructor is being called!" << endl;
}

Alicorn::~Alicorn() {
    //Add corresponding message for distructor
    cout << "Alicorn destructor is being called!" << endl;
}

void Alicorn::fly() const {
    cout <<"fly() method is being called:" << endl;
    cout << "Flying " << distance * distFactor2
    << " meters!" << endl;
}

//New class for Dragon
class Dragon: public Creature {
private:
    int distFactor3;
public:
    Dragon();
    ~Dragon();
    void breathFire() const;
    
};

Dragon::Dragon(): distFactor3(2)
{
    //Add corresponding message for constructor
    cout << "Dragon constructor is being called!" << endl;
}

Dragon::~Dragon() {
    //Add corresponding message for distructor
    cout << "Dragon destructor is being called!" << endl;
}

void Dragon::breathFire() const {
    cout << "breathFire() method is being called:" << endl;
    cout << "Breathing fire for " << distance * distFactor3
    << " meters!\n" << endl;
}

int main()
{
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();
    
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    
    //Create object for Alicorn
    cout << "\nCreating an Alicorn.\n";
    Alicorn object1;
    object1.run();
    object1.fly();
    
    //Create object for Dragon
    cout << "\nCreating a Dragon.\n";
    Dragon object2;
    object2.run();
    object2.breathFire();
    
    return 0;
}
