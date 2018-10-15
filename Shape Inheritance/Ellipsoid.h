//
//  Ellipsoid.hpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//


#include <stdio.h>
#include "Ellipse.h"
#include <iostream>
using namespace std;

class Ellipsoid : public Ellipse{
public:
    Ellipsoid();
    Ellipsoid(float r, float r2, float r3, string c);
    
    void calcVolume();
    
    void calcArea();
    void printDims();      // prints the shape's  name, area, volume and color
    float  getArea();
    float  getVolume();
    
protected:
    float radius3, volume;
    
    
    
};

