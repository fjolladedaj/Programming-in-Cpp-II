/*
 CH08-320142
 a1 p5.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>

using namespace std;

int main () {
    char c;
    bool a = true;
    string str;
    
    cout << "Enter characters! Press 'q' to stop." << endl;
    
    while(a) { //while a is true
        cin >> c;
        
        if (c == 'q') {
            a = false;
            break; //if c == 'q' break the loop
        }
        
        str += c; //add char after char to form a string
    }
    //print the characters entered
    cout << "All entered characters: " << str << endl;
    
    return 0;
}
