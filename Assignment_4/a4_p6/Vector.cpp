/*
 CH08-320142
 a4_p6.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include "Vector.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

Vector::Vector() {
    size = 0;
    ptr = 0;
}

Vector::Vector(int length, double* pt) {
    size = length;
    ptr = new double[length];
    
    for(int i = 0; i < length; i++) {
        ptr[i] = pt[i];
    }
}


//copy constructor
Vector::Vector(const Vector& obj) {
    size = obj.size;
    double* p = new double[size];
    for (int i = 0; i < obj.size; i++)
        p[i] = obj.ptr[i];
    std::swap(ptr, p);
}

Vector::~Vector() {
    delete []ptr;
}

//setters
void Vector::setSize(double newsize) {
    size = newsize;
}
void Vector::setPtr(double *newptr) {
    ptr = newptr;
}

//getters
int Vector:: getSize() {
    return size;
}
double Vector::getPtr() {
    return *ptr;
}


//Scalar product
double Vector::scalar(const Vector obj) const {
    double scal = 0;
    for(int i = 0; i < size; i++) {
        scal += obj.ptr[i] * ptr[i];
    }
    return scal;
}

//vector norm
double Vector::norm() {
    double sum = 0;
    for(int i=0; i<size; i++) {
        sum += ptr[i] * ptr[i];
    }
    
    return sqrt(sum);
}

//subtraction
Vector Vector::subtract(const Vector obj) const {
    for(int i = 0; i < size; i++) {
        ptr[i] -= obj.ptr[i];
    }
    return Vector(size, ptr);
}

//addition
Vector Vector::add(const Vector obj) const {
    for(int i = 0; i < size; i++) {
        ptr[i] +=  obj.ptr[i];
    }
    return Vector(size, ptr);
}

//print service
void Vector::print() const {
    for(int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

