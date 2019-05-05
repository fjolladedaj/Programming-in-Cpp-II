/*
 CH08-320142
 a3 p6.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <fstream>
#include <iostream>

class Complex {
private:
    //properties
    double real, imag;
public:
    //constructors
    Complex();
    Complex(double r, double i = 0);
    //destructor
    ~Complex();
    
    //operators
    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend std::istream& operator>>(std::istream&, Complex&);
    friend const Complex operator+(Complex&, Complex&);
    friend const Complex operator-(Complex&, Complex&);
    friend const Complex operator*(Complex&, Complex&);
    Complex& operator=(Complex&);
    
    //methods for calculation
    Complex conj();
    Complex add(Complex c);
    Complex sub(Complex c);
    Complex mult(Complex c);
    
    //service method
    void print();
    
    //Setters
    void setReal(double re);
    void setImag(double im);
    
    //Getters
    double getReal() const;
    double getImag() const;
    
};
