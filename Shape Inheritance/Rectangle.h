//
//  Rectangle.h
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include "Square.h"
#include "Shape.h"
#ifndef Rectangle_h
#define Rectangle_h

class Rectangle : public Square{
    
protected:
    float width;
    
    
public:
    Rectangle();
    Rectangle(float l, float w);
    
    void calcArea();
    float getArea();
    float getVolume();
    void printDims();
    
    
};


#endif /* Rectangle_h */
