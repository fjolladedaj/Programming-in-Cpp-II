/*
CH08-320142
a5 p5.cpp
Fjolla Dedaj
f.dedaj@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    //declare the instances
    Fraction a;
    Fraction b;
    
    //use overloaded operator cin >>
    cout << "Enter fraction a: " << endl;
    cin >> a;
    cout << "Enter fraction b: " << endl;
    cin >> b;
    
    /*use overloaded operator cout << and print 
     the results from the other operators*/
    cout << "Product(*): ";
    cout << a * b << endl; //use the overloaded operator (*)
    cout << "Quotient(/): ";
    cout << a/b << endl; //use the overloaded operator (/)
    
    
    return 0;
}
