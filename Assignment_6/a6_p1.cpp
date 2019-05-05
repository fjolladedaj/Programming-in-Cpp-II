/*
 CH08-320142
 a6 p1.cpp
 Fjolla Dedaj 
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string randomcolor() {

    string random;
    //declare and define the elements of the array of strings
    string word[4] = {"RED", "GREEN", "BLUE", "YELLOW"};
    
    //choose a word between indexes 0 and 3
    random = word[rand() % 4];
    
    //return the chosen word
    return random;
    
}


int main() {
    
    //initialize the seed
    srand(static_cast<unsigned int>(time(0)));

    /* create a loop which calls the
     function 10 times and prints the result */
    for(int i = 0; i < 10; i++) {
        cout << randomcolor() << endl;
    }
    
    return 0;
}


