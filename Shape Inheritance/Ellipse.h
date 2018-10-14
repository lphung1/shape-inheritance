//
//  Elipse.h
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include "Circle.h"
#ifndef Ellipse_h
#define Ellipse_h

class Ellipse : public Circle{
public:
    Ellipse();
    Ellipse(float r, float r2, string c);
    
    void calcArea();
    void printDims();      // prints the shape's  name, area, volume and color
    float  getArea();
    float  getVolume();
    
protected:
    float radius2;
    
};


#endif /* Ellipse_h */
