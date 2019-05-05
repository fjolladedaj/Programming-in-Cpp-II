/*
 CH08-320142
 a2 p1.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>

using namespace std;

int myfirst(int arr[]) {
    int odd = -1;
    //helps us when the array has no positive odd value
    for(int i = 0; i < 6; i++) {
        if(arr[i] > 0 && arr[i] % 2 != 0) {
            odd = arr[i];
            break;
            // to give the first element with the required characteristics
        }
    }
    return odd;
}

double myfirst(double db[]) {
    double nofrac = -1.1;
    // helps us when the array has no element without fractional part
    for(int i = 0; i < 6; i++) {
        
        if(db[i] > 0 && (int)db[i] == db[i]) {
            nofrac = db[i];
            break;
        }
    }
    return nofrac;
}

char myfirst(char ch[]) {
    char vowel = 'O'; // helps us when the array has no vowels
    for(int i = 0; i < 5; i++) {
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o'
           || ch[i] == 'u' ||ch[i] == 'A' || ch[i] == 'E'
           || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' ) {
            vowel = ch[i];
            break;
        }
    }
    return vowel;
    
}

int main () {
    //Test cases with integer arrays
    int arr[6] = {-3, -2, 2, 3, 4, 5};
    // 3 (first positive odd value)
    int arr2[6] = {-3, -1, 2, 4, 6, 8};
    // -1 (no positive odd values)
    
    //Test cases with double arrays
    double db[6] = {1.39, -2.5, -40.2, 30.0, 21.0, 1.4};
    // 30 (first double without fractional part)
    double db2[6] = {1.39, -2.5, -40.2, 30.6, 21.7, 1.4};
    // -1.1 (all have fractional parts)
    
    //Test cases with char arrays
    char ch[5] = {'b', 'c', 'e', 'd', 'a'};
    // 'e' (first vowel)
    char ch2[5] = {'b', 'c', 'k', 'd', 'm'};
    // 'O' (no vowels)
    
    //Print the results
    cout << myfirst(arr) << endl;
    cout << myfirst(arr2) << endl;
    
    cout << myfirst(db) << endl;
    cout << myfirst(db2) << endl;
    
    cout << myfirst(ch) << endl;
    cout << myfirst(ch2) << endl;
    
    return 0;
    
    
}
