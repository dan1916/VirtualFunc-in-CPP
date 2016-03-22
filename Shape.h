/* 
 * File:   Shape.h
 * Author: Dhavalkumar Suthar
 *
 * Created on November 21, 2015, 4:19 PM
 */

#ifndef SHAPE_H
#define	SHAPE_H

/*
 * Defines the most basic shape class with a virtual function of calculating circumference.
 *
 */
class Shape
{
    
     //Declare protected variables...    
protected:
    int lengthOfAnEdge; //This will hold our length value.

public:
    
    //Calculates the circumference
    virtual int calculateCircumference();
};

#endif	/* SHAPE_H */

