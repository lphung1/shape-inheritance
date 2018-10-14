//
//  Cube.cpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include <stdio.h>
#include "Cube.h"
#include <iostream>
using namespace std;

Cube::Cube(){
    length = 0;
    name = "Cube";
    area = 0;
    volume = 0;
}

Cube::Cube(float l, string c){
    length = l;
    color = c;
    name = "Cube";
    calcArea();
    area = area * 6;
    calcVolume();
}


void Cube::calcVolume(){
    volume = length * length * length;
}
float Cube::getArea(){
    return area;
}
float Cube::getVolume(){
    return volume;
}

void Cube::printDims(){
    cout << "\n\nShape: " << name << "\nLength: " << length << "\nArea: "<< area << "\nVolume: " << volume << "\nColor: " << color;
}
