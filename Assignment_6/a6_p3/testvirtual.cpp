/*
 CH08-320142
 a6 p3.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */


#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

//change number of objects from 7 to 20
const int num_obj = 20;
//define the colors which are going to be randomly chosen
const char* colors[] = {"RED", "GREEN", "BLUE", "YELLOW"};

/*
 
Diagram of how classes are related to each other:
 
            AREA
           *    *
          *      *
         *        *
      CIRCLE   RECTANGLE
        *          *
        *          *
        *          *
      RING      SQUARE



 
 (1)This line creates a pointer of an area list which is composed of 
 the number of objects that are going to be created. Since we are going
 to create another object for the square class, we need to change the 
 number of objects from 6 to 7.
 

 (2)The int variable index represents the index (position) of the 
 objects in the list. We initialize it to 0 which indicates
 the index position of the first object and our starting point.
 
 (3)Initialize the sum of all the areas to 0 so that we can 
 add them later and get the desired result
 
 (4)In this line an instance of the Ring class is created which 
 also defines the properties and calls the parametric constructor 
 where the parameters given include the color, inner and outer radius.
 This is done for the other instances as well.
 
 (5)The instances are assigned to different indexes of the list. (from 0-6)
 
 (7)The loop keeps repeating as long as the index number is less than 7.
 
 (8)The area of each instance is computed, starting from index 0 until index = 6.
 
 (9)This line prints the sum of all the areas after the 
 while loop which computed the results is finished
 
 The initial sum_area which was 0 in the beginning now
 is equal to the sum of all shapes from the list and prints it.
 
 */

int main() {
    double sum_area = 0.0;
    double sum_perimeter = 0.0;
    Area *list[num_obj];
    int index = 0;
    int counter = 0;
    
    srand(static_cast<unsigned int>(time(0)));
    
    while (counter < num_obj) {
        int chooseShape = rand() % 4;
        const char* color = colors[rand() % 4];
        
        //choose sizes of the shapes from 1 to 50
        double size1 = (rand() % 49) + 1;
        double size2 = (rand() % 49) + 1;
        
        //4 shapes in total (create if clauses)
        if(chooseShape == 0) {
            list[counter] = new Circle(color, size1);
        }
        else if(chooseShape == 1) {
            list[counter] = new Ring(color, size1, size2);
        }
        else if(chooseShape == 2) {
            list[counter] = new Rectangle(color, size1, size2);
        }
        else if(chooseShape == 3) {
            list[counter] = new Square(color, size1);
        }
        
        counter++;
    }
    
    //calculate area and perimeter
    while (index < num_obj) {
        (list[index])->getColor();
        double perimeter = list[index]->calcPerimeter();
        cout << perimeter;
        
        (list[index])->getColor();
        double area = list[index++]->calcArea();
        cout << area << endl;
        sum_area += area;
        sum_perimeter += perimeter;
        
    }
    //print the total area and perimeter
    cout << "Total area is " << sum_area << endl;
    cout << "Total perimeter is " << sum_perimeter << endl;
    
    return 0;
}






