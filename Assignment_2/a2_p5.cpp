/*
 CH08-320142
 a2 p5.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include<iostream>

using namespace std;

bool isPalindrome(string s) {
    bool palindrome = true;
    int length = s.length();
    for (int i = 0; i < length; i++) {
        if (s[i] != s[(length - 1) - i]) {
            /* condition checks if the 1st and the last
             letters are different, if they are the same,
             then the 2nd and the 2nd last are checked and so on */
            palindrome = false;
            break;
        }
    }
    
    if (palindrome == true) {
        return true;
    }
    else {
        return false;
    }
    
}

int main()
{
    string s;
    cout << "Enter a word: ";
    
    //loop to repeat the game
    while(1) {
        getline(cin, s);
        if(s == "stop") {
            break;
        }
        //stop loop when "stop" is entered
        
        if(isPalindrome(s) == true) {
            // call the function and see if it returns true
            cout << "\"" << s << "\" is a palindrome." << endl;
        }
        else {//otherwise, print the corresponding message
            cout << "\"" << s << "\" is not a palindrome." << endl;
        }
        
        cout << "Enter another word: ";
        
    }
    
    return 0;
    
}

