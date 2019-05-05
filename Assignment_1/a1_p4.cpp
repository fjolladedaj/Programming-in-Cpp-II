/*
 CH08-320142
 a1 p4.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>

using namespace std;

int mycount(int a, int b) {
    return a - b; //return the difference
}

int mycount(string s, char c) {
    int counter = 0;
    int length = s.length();
    
    //iterate through the loop to search for the character
    for (int i = 0; i < length; i++) {
        if(s[i] == c) {
            counter++; //increment after each occurrence
        }
    }
    
    //for no occurrence
    if (counter == 0) {
        return -1;
    }
    
    return counter;
}

int main () {
    cout << "Difference: " << mycount(7, 3) << endl;
    //returns 4
    
    cout << "Number of occurrences: " <<
    mycount("this is a string", 'i') << endl;
    //returns 3
    
    cout << mycount("this is a string", 'b') << endl;
    //returns -1 because 'b' doesn't occur in the string
    
    return 0;
    
}
