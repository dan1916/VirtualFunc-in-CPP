#include "Triangle.h"
#include "Shape.h"
#include <iostream>

//Calculates the circumference
int Triangle::calculateCircumference() {
    std::cout << "Calculating Circumference of the Triangle Class\n";
    return 3 * this->lengthOfAnEdge;
}
