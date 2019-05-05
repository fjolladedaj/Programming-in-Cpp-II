/*
 CH08-320142
 a4 p4.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();
    
    char ch = '\0';
    
    while(1) {
        cout << "Enter character!" << endl;
        cin >> ch;
        
        if(ch == 'q') {
            //use break to stop the loop
            break;
        }
        
        else if(ch == 'w') {
            //Create 2 objects for Wizard
            cout << "\nCreating a Wizard.\n";
            Wizard *w1 = new Wizard;
            w1 -> run();
            w1 -> hover();
            Wizard *w2 = new Wizard(7);
            w2->hover();
            delete w1;
            delete w2;
        }
        else if(ch == '1') {
            /*Create objects for Alicorn
             by allocating dynamically*/
            cout << "\nCreating an Alicorn.\n";
            Alicorn *a1 = new Alicorn;
            a1 -> run();
            a1 -> fly();
            
            Alicorn *a2 = new Alicorn(3);
            a2 -> fly();
            
            Alicorn *a3 = new Alicorn(6);
            a3 -> fly();
            
            //deallocate
            delete a1;
            delete a2;
            delete a3;
            
        }
        
        
        else if(ch == '2') {
            /*Create objects for Dragon
             by allocating dynamically*/
            cout << "\nCreating a Dragon. \n";
            Dragon *d1 = new Dragon;
            d1->run();
            d1->breathFire();
            
            Dragon *d2= new Dragon;
            d2->run();
            d2->breathFire();
            d2->hunt(9);
            
            Dragon *d3 = new Dragon;
            d3->run();
            d3->breathFire();
            d3->walk(20);
            d3->hunt(6);
            
            //deallocate
            delete d1;
            delete d2;
            delete d3;
        }
    }
    cout << endl;
    
    return 0;
}
