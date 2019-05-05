/*
 CH08-320142
 a5 p5.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

class Fraction {
    
private:						// internal implementation is hidden
    int num;					// numerator
    int den;					// denominator
    
    int gcd(int a, int b);		// calculates the gcd of a and b
    int lcm(int a, int b);
    
public:
    Fraction();					// empty constructor
    Fraction(int, int = 1); 	// constructor taking values for fractions and
    // integers. Denominator by default is 1
    void print();				// prints it to the screen
    
    //overloaded operators
    friend std::ostream& operator<<(std::ostream&, const Fraction&);
    friend std::istream& operator>>(std::istream&, Fraction&);
    friend const Fraction operator*(Fraction&, Fraction&);
    friend const Fraction operator/(Fraction&, Fraction&);
    

};


#endif /* FRACTION_H_ */
