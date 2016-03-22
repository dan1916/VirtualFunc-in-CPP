/* 
 * File:   main.cpp
 * Author: Dhavalkumar Suthar
 *
 * Created on November 21, 2015, 4:16 PM
 */

#include <cstdlib>

#include "Shape.h"
#include "Triangle.h"

using namespace std;

/*
 * This program shows how virtual functions work in C++.
 */
int main(int argc, char** argv) {

    //Allocate a new object of shape...
    Shape *dummyShape1 = new Shape();
    dummyShape1->calculateCircumference(); // This will call the Circumference of Base Class.
    
    //Allocate a new object of triangle shape...
    Shape *dummyShape2 = new Triangle();
    dummyShape2->calculateCircumference(); // This will call Circumference of Triangle Class.
    
    return 0;
}

