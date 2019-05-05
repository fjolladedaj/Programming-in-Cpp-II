/*
 CH08-320142
 a2 p2.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>

using namespace std;

// swap ints
void swapping(int &a, int &b) {
    //apply & for reference
    int help; //use a third variable
    help = a;
    a = b;
    b = help;
}

// swap floats
void swapping(float &x, float &y) {
    //apply & for reference
    float help; //use a third variable
    help = x;
    x = y;
    y = help;
    
}

// swap char pointers
void swapping(const char * &str1, const char * &str2) {
    //apply & for reference
    const char *help; //use a third variable
    help = str1;
    str1 = str2;
    str2 = help;

}

int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    return 0;

}


