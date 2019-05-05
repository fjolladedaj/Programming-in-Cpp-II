/*
 CH08-320142
 a6 p2.cpp
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
    
    cout << endl;
    
    /*use overloaded operator cout << and print
     the results from the other operators*/
    cout << "Product(*):" << endl;
    cout << a * b << endl; //use the overloaded operator (*)
    
    cout << endl;
    
    cout << "Quotient(/):" << endl;
    cout << a/b << endl; //use the overloaded operator (/)
    
    cout << endl;
    
    //new operators
    cout << "Addition:" << endl;
    cout << a + b << endl;
    
    cout << endl;
    
    cout <<"Difference:" << endl;
    cout << a - b << endl;
    
    cout << endl;
    
    // < and >
    if(a > b) {
        cout << a << " is greater than " << b << endl;
    }
    else if(a < b) {
        cout << b << " is greater than a " << a << endl;
    }
    else {
        cout << a << " and " <<b << " are equal" << endl;
    }
    
    cout << endl;
    
    // Assignment (a = b)
    
    a = b;
    cout<< "Assignment:" << endl;
    cout << a << " and " << b << " are equal!" << endl;
    
    
    return 0;
}
