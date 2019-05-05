/*
 CH08-320142
 a1 p2.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
*/

#include <iostream> 
using namespace std;

int main () {
    //declare the variables with the appropriate data type
    int nr;
    float val;
    string s;
    
    //get the input needed from the user
    cout << "Type an integer!" << endl;
    cin >> nr;
    cout << "Type a float!" << endl;
    cin >> val;
    cout << "Type a string!" << endl;
    cin >> s;
    
    for (int i = 0; i < nr; i++) {
        //print the variables in order (as required)
        cout << val << ' ' << s << endl;
    }
    
    return 0;
    
}
