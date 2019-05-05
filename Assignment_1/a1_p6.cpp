/*
 CH08-320142
 a1 p6.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int theNumber, guess, randomNumber;
    string name;
    
    cout << "What is your name?" << endl;
    cin >> name;
    
    // init random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    randomNumber = rand();
    theNumber = [(randomNumber % 100)+1]; //between 0 and 100
    
    cout << "Guess a number!" << endl;
    cin >> guess;
    
    /*
     while loop with if clauses which check whether
     the entered number is too low or too high
     */
    while (guess != theNumber) {
        if (guess < theNumber) {
            cout << "Too low" << endl;
        }
        else if (guess > theNumber) {
            cout << "Too high" << endl;
        }
        cin >> guess;
    }
    
    //Congratulate the player for guessing the number
    if (guess == theNumber) {
        cout << "Congratulations " << name << "!" << endl;
    }
    
    return 0;
}
