/*
 CH08-320142
 a4_p6.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    int n;
    cout << "What's the size of the vectors?" << endl;
    cin >> n;
    
    double *ptr1 = new double[n];
    double *ptr2 = new double[n];
    //allocate dynamically
    
    //Get values for the first vector
    cout << "Enter " << n << " values of the 1st vector:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> ptr1[i];
    }
    
    //Get values for the second vector
    cout << "Enter " << n << " values of the 2nd vector:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> ptr2[i];
    }
    
    Vector v1(n, ptr1);
    Vector v2(n, ptr2);
    
    //find vector norm
    cout << "Vector norm: " << v1.norm();
    cout << endl;
    
    //find scalar product
    cout << "Scalar product: ";
    cout << v1.scalar(v2) << endl;
    
    //find addition
    cout << "Addition: ";
    (v1.add(v2)).print();
    
    //find subtraction
    cout << "Subtraction: ";
    (v1.subtract(v2)).print();
    
    delete []ptr1;
    delete []ptr2;
    
    return 0;
}
