/*
 CH08-320142
 a3 p6.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include <string>
#include <fstream>
#include "Complex.h"

using namespace std;

//empty constructor - set properties to 0
Complex::Complex(){
    real = imag = 0;
}

Complex::Complex(double r, double i){
    real = r;
    imag = i;
}

//destructor
Complex::~Complex() {
    
}

/*
//Conjugation
Complex Complex::conj(){
    Complex nr;
    nr.real = real;
    //change the imaginary part
    nr.imag = (-1) * imag;
    return nr;
}

//Addition
Complex Complex::add(Complex c){
    Complex Add;
    Add.real = real + c.real;
    Add.imag = imag + c.imag;
    return Add;
}

//Subtraction
Complex Complex::sub(Complex c){
    Complex Sub;
    Sub.real = real - c.real;
    Sub.imag = imag - c.imag;
    return Sub;
}

//Multiplication
Complex Complex::mult(Complex c){
    Complex Mult;
    Mult.real = real * c.real - imag * c.imag;
    Mult.imag = real * c.imag + c.real * imag;
    return Mult;
}
*/





//OVERLOADING OPERATORS

istream& operator>>(istream& is, Complex& c1) {

    is >> c1.real >> c1.imag;
    
    return is;
}

ostream& operator<<(ostream& os, const Complex& c1) {
    if (c1.imag) {
        cout << noshowpos << c1.real << showpos << c1.imag << "i" << endl;
    } else {
        cout << noshowpos << c1.real << showpos << endl;
    }
    return os;
}

const Complex operator+(Complex& c1, Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
                   
const Complex operator-(Complex& c1, Complex& c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);

}
const Complex operator*(Complex& c1, Complex& c2) {
    return Complex(c1.real * c2.real - c1.imag*c2.imag, c1.imag * c2.real + c1.real*c2.imag);
}
                   
Complex& Complex::operator=(Complex& c) {
    this->real = c.real;
    this->imag = c.imag;
    return *this;
}






//Print service
void Complex::print(){
    if (imag) {
        cout << noshowpos << real << showpos << imag << "i" << endl;
    } else {
        cout << noshowpos << real << showpos << endl;
    }
    
}
//Setters
void Complex::setReal(double r){
    real = r;
    
}

void Complex::setImag(double i){
    imag = i;
}

//Getters
double Complex::getReal() const{
    return real;
}

double Complex::getImag() const{
    return imag;
}



