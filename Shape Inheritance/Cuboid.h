//
//  Cuboid.hpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//



#include <stdio.h>
#include "Rectangle.h"

class Cuboid : public Rectangle{
    
public:
    Cuboid();
    Cuboid(float l, float w, float h, string c);
    
    
    void calcVolume();
    float getArea();
    float getVolume();
    void printDims();
    
protected:
    float height, volume;
    
    
    
};
