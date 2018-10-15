//
//  Ellipsoid.cpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include "Ellipsoid.h"
#include <iostream>
#include <iomanip>

Ellipsoid::Ellipsoid(){
    name = "Elipsoid";
    radius = 0;
    radius2 = 0;
    radius3 = 0;
    area = 0;
    volume = 0;
    color = "White";
}

Ellipsoid::Ellipsoid(float r, float r2, float r3, string c){
    name = "Ellipsoid";
    radius = r;
    radius2 = r2;
    radius3 = r3;
    color = c;
    calcVolume();
    
    
}

void Ellipsoid::calcVolume(){
    volume = 3.1415926 * radius * radius2 * radius3;
}


float Ellipsoid::getArea(){
    return 0;
}

void Ellipsoid::printDims(){
    
    cout << "\n\nShape: " << name << "\nRadius':  " << radius << " , " << radius2 << " , " << radius3 << " , " << radius2 << "\nVolume: " << volume << "\nColor: " << color << "\n\n";
    
}

float Ellipsoid::getVolume(){
    return volume;
}
