//
//  Elipse.cpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include <stdio.h>
#include "Ellipse.h"
#include <iostream>
#include <iomanip>

Ellipse::Ellipse(){
    name = "Elipse";
    radius = 0;
    radius2 = 0;
    area = 0;
    color = "White";
}

Ellipse::Ellipse(float r, float r2, string c){
    name = "Ellipse";
    radius = r;
    radius2 = r2;
    color = c;
    calcArea();
    setprecision(2);
    
}

void Ellipse::calcArea(){
    area = radius * radius2 * 3.141592654;
}

float Ellipse::getArea(){
    return area;
}

void Ellipse::printDims(){
    
    cout << "\n\nShape: " << name << "\nRadius':  " << radius << " , " << radius2 << "\nArea: " << area << "\nColor: " << color;
    
}

float Ellipse::getVolume(){
    return area;
}
