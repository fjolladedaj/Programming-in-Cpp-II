/*
 CH08-320142
 a4 p1.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <cstdlib>
#include <iostream>
#include "Box.h"

using namespace std;

int main () {
    double totalVolume = 0;
    int n;
    cout <<"Enter number of boxes: " << endl;
    cin >> n;
    
    Boxes *list;
    
    list = new Boxes[n]; //Dynamically allocation
    
    double height, width, depth;
    
    //Go through the loop to enter the properties for each box
    //Use setters
    for (int i = 0; i < n; i++) {
        cout << "\nBox: #" << i + 1 << endl;
        cout << "Height: ";
        cin >> height;
        list[i].setHeight(height);
        cout << "Width: ";
        cin >> width;
        list[i].setWidth(width);
        cout << "Depth: ";
        cin >> depth;
        list[i].setDepth(depth);
    }
    
    /*Go through the loop to calculate the volume of 
     each box and then add them to find the total volume */
    for (int i = 0; i < n; i++) {
        double v = list[i].volume();
        /*use the defined method for calculating volume */
        cout << "Volume of Box #" << i+1
        << " is " << v << endl;
        totalVolume += v;
    }
    
    cout << "Total Volume of all boxes: " << totalVolume << endl;
    //Print the total volume
    
    delete []list;
    
    return 0;
}
