//
//  Rectangle.cpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include <stdio.h>
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
    length = 0;
    width = 0;
    area = 0;
    calcArea();
    name = "Rectangle";
    color = "White";
}

Rectangle::Rectangle(float l, float w){
    length = l;
    width = w;
    name = "Rectangle";
    color = "White";
    calcArea();
}

void Rectangle::calcArea(){
    area = length * width;
}

float Rectangle::getArea(){
    return area;
}

void Rectangle::printDims(){
    
    cout << "\n\nShape: " << name << "\nLength and Width:  " << length << " , " << width << "\nArea: " << area << "\nColor: " << color;
    
}

float Rectangle::getVolume(){
    return area;
}
