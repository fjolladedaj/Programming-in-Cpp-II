/*
 CH08-320142
 a4 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

# ifndef _CREATURE_H
# define _CREATURE_H

#include <iostream>

class Creature {
public:
    Creature();
    ~Creature();//add destructor
    void run() const;
    
protected:
    int distance;
};


class Wizard : public Creature {
public:
    Wizard();
    Wizard(int); //add constructor
    ~Wizard();//add destructor
    void hover() const;
    
private:
    int distFactor;
};


//New class for Alicorn
class Alicorn: public Creature {
private:
    int distFactor;
public:
    Alicorn();
    ~Alicorn();
    Alicorn(int); //add constructor
    Alicorn(int &ptr); //add constructor
    void fly() const; //add method
};


//New class for Dragon
class Dragon: public Creature {
private:
    int distFactor;
public:
    Dragon();
    ~Dragon();
    //New methods
    void breathFire() const;
    void walk(int) const;
    void hunt(int) const;
    
};

#endif
