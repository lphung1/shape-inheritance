//
//  Circle.h
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//
#include "Shape.h"
#ifndef Circle_h
#define Circle_h

class Circle : public Shape{
    
public:
    Circle();
    Circle(float r, string c);
    
    void calcArea();
    
    
    void printDims();      // prints the shape's  name, area, volume and color
    float  getArea();
    float  getVolume();
    
protected:
    float radius, area;
};


#endif /* Circle_h */
