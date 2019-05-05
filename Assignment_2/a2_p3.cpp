/*
 CH08-320142
 a2 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>

using namespace std;

void add_min(int * &x, int &n) {
    /*use the reference operator because
     the changed values need to be printed from main() */
    
    int min = x[0];
    //go through the array to find the min value
    for(int i = 0; i < n; i++) {
        if(x[i] < min) {
            min = x[i];
        }
    }
    
    /* go through the array to add the min
     value to each element */
    for(int i = 0; i < n; i++) {
        x[i] = x[i] + min;
    }
    
}

void deallocate(int * &x, int &n) {
    
    delete[] x; //deallocate
}

int main() {
    int n;
    cout << "How many integers do you want to enter?" << endl;
    cin >> n;
    
    int *x = new int[n]; //allocate
    
    cout << "Enter " << n << " integers!" << endl;
    for(int i = 0; i < n; i++) {
        cin >> x[i]; //store the integers in an array
    }
    
    
    cout << "Original numbers entered:" << endl;
    cout << "A = {";
    for(int i = 0; i < n; i++) {
        if(i == n - 1) {
            cout << x[i];
            //no comma after the last element
        }
        else {
            cout << x[i] << ", ";
            //commas after the other elements
        }
    }
    cout << "}" << endl;
    
    // function call
    add_min(x, n);
    
    cout << "Each element plus the minimum value:" << endl;
    cout << "B = {";
    for(int j = 0; j < n; j++) {
        if(j == n-1) {
            cout << x[j];
            //no comma after the last element
        }
        else {
            cout << x[j] << ", ";
            //commas after the other elements
        }
    }
    cout <<  "}" << endl;
    
    // function call to deallocate
    deallocate(x, n);
    
    return 0;
    
}



