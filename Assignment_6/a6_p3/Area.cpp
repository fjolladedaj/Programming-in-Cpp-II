/*
 CH08-320142
 a6 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

Area::~Area() {
}

void Area::getColor() const {
	cout << "\n" << color << ": ";
}
