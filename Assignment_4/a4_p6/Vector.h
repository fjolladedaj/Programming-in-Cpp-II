/*
 CH08-320142
 a4_p6.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int size;
    double *ptr;
    
public:
    //empty constructor
    Vector();
    //destructor
    ~Vector();
    //parametric constructor
    Vector(int, double*);
    //copy constructor
    Vector(const Vector&);
    
    //setters:
    void setSize(double newsize);
    void setPtr(double *newptr);
    
    //getters
    int getSize();
    double getPtr();
    
    //service methods:
    double norm();
    double scalar(const Vector) const;
    Vector add(const Vector) const;
    Vector subtract(const Vector) const;
    void print() const;
    
};

#endif // VECTOR_H
