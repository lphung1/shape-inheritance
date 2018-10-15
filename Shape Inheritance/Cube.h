//
//  Cube.h
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//
#include "Square.h"
#include <iostream>
#ifndef Cube_h
#define Cube_h

class Cube : public Square{
public:
    Cube();
    Cube(float l);
    Cube(float l, string c);
    
    void calcVolume();
    float getArea();
    float getVolume();
    void printDims();
    
protected:
    float volume;
    
    
};


#endif /* Cube_h */
