/*
 CH08-320142
 a6 p2.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include "fraction.h"

#include <iostream>

using namespace std;


Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
    
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;
    
    /*find gcd using a loop*/
    for(int c=1; c<=abs(a) && c<=abs(b); c++) {
        if(a % c == 0 && b % c == 0) {
            tmp_gcd = c;
        }
    }
    
    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
    
}

void Fraction::print()
{
    cout << num << "/" << den << std::endl;
}

//cout << overloaded operator
ostream& operator<<(ostream& os, const Fraction& frc) {
    os << frc.num << "/" << frc.den;
    return os;
}

//cin >> overloaded operator
istream& operator>>(istream& is, Fraction& frc) {
    is >> frc.num >> frc.den;
    while(frc.den == 0) { //enter another value if denominator is zero
        cout << "Cannot divide by zero. ";
        cout << "Enter another value for the denominator!" << endl;
        is >> frc.den;
    }
    return is;
}

//Product (*) overloaded operator
const Fraction operator*(Fraction& first, Fraction& second)
{
    return Fraction(first.num * second.num, first.den * second.den);
}

//Division (/) overloaded operator
const Fraction operator/(Fraction& first, Fraction& second)
{
    return Fraction(first.num * second.den, first.den * second.num);
}


//New overloaded operators

//use the formula given for addition
const Fraction operator+(Fraction& f, Fraction& s) {

    return Fraction(((f.num*Fraction::lcm(f.den,s.den)/f.den)
                     + (s.num*Fraction::lcm(f.den,s.den)/s.den)),
                    Fraction::lcm(f.den,s.den));
}

//use the formula given for difference
const Fraction operator-(Fraction& f, Fraction& s) {
    
    return Fraction(((f.num*Fraction::lcm(f.den,s.den)/f.den)
                     - (s.num*Fraction::lcm(f.den,s.den)/s.den)),
                    Fraction::lcm(f.den,s.den));
}


bool operator>(Fraction& f, Fraction& s) {
    return (((double)f.num / f.den) > ((double) s.num / s.den));
}

bool operator<(Fraction& f, Fraction& s) {
    return (((double)f.num / f.den) < ((double) s.num / s.den));
}

Fraction& Fraction::operator=(Fraction& obj) {
    this->num = obj.num;
    this->den = obj.den;
    return *this;
    
}
