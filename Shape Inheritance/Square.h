//
//  Square.h
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#ifndef Square_h
#define Square_h
#include "Shape.h"

class Square : public Shape {
    
protected:
    float length, area;
    
public:
    
    Square();
    Square(float l);
    
    void calcArea();
    float getArea();
    float getVolume();
    void printDims();
};


#endif /* Square_h */
