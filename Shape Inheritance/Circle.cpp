//
//  Circle.cpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include <stdio.h>
#include "Circle.h"
#include <iostream>
#include <iomanip>
using namespace std;

Circle::Circle(){
    name = "Circle";
    radius = 0;
    area = 0;
    color = "White";
}

Circle::Circle(float r, string c){
    name = "Circle";
    radius = r;
    color = c;
    calcArea();
    setprecision(2);
    
}

void Circle::calcArea(){
    area = radius * radius * 3.141592654;
}

float Circle::getArea(){
    return area;
}

void Circle::printDims(){
    
    cout << "\n\nShape: " << name << "\nRadius:  " << radius << "\nArea: " << area << "\nColor: " << color;
    
}

float Circle::getVolume(){
    return area;
}

