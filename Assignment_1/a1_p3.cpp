/*
 CH08-320142
 a1 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>

using namespace std;

int sign(int x) {
    //check if the number is negative and assign x to -1
    if (x < 0) {
        x = -1;
    }
    //check if the number is positive and assign x to 1
    else if (x > 0) {
        x = 1;
    }
    //check if the number is 0 and assign x to 0
    else if (x == 0){
        x = 0;
    }
    return x;
}

int main() {
    int x;
    //information regarding the outputs
    cout << "Output for negative numbers: -1" << endl;
    cout << "Output for positive numbers: 1" << endl;
    cout << "Output for 0: 0" << endl << endl;
    cout << "Enter a number and check its output!" << endl;
    
    cin >> x; //get user input
    
    cout << sign(x) << endl; //call the function and print the result
    
    return 0;
}
