/*
 CH08-320142
 a3 p6.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "Complex.h"
using namespace std;


int main()
{
    //create instances
    Complex c1, c2, c3;

    
    ifstream f1;
    
    f1.open("in1.txt", ios::in);
    if(f1.fail()) {
        cout << "Error" << endl;
        f1.clear();
    }
    
    f1 >> c1;
    cout << c1;
    f1.close();
    
    cout << endl;
    
    ifstream f2;
    f2.open("in2.txt", ios::in);
    if(f1.fail()) {
        cout << "Error" << endl;
        f2.clear();
    }
    
    f2 >> c2;
    cout << c1;
    f2.close();
    
    ofstream f3;
    f3.open("output.txt", ios::in);
    if(f3.fail()) {
        cout << "Error" << endl;
        f3.clear();
    }
    
    f3 << c1 * c2 << endl;
    f3 << c1 + c2 << endl;
    f3 << c1 - c2 << endl;
    

    f3.close();
    
    return 0;
}
