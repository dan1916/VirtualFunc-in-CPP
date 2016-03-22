/* 
 * File:   Triangle.h
 * Author: Dhavalkumar Suthar
 *
 * Created on November 21, 2015, 4:25 PM
 */

#ifndef TRIANGLE_H
#define	TRIANGLE_H

#include "Shape.h"

/*
 * Defines the a triangle shape class by inheriting from basic shape class.
 *
 */
class Triangle : public Shape
{
public:
    //Calculates the circumference
    int calculateCircumference();
};


#endif	/* TRIANGLE_H */

