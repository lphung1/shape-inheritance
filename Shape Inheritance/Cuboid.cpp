//
//  Cuboid.cpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include "Cuboid.h"

Cuboid::Cuboid(){
    length = 0;
    name = "Cuboid";
    area = 0;
    volume = 0;
}

Cuboid::Cuboid(float l, float w, float h, string c){
    length = l;
    width = w;
    height = h;
    color = c;
    name = "Cuboid";
    area = 0;
    calcVolume();
}



void Cuboid::calcVolume(){
    volume = length * width * height;
}
float Cuboid::getArea(){
    return area;
}
float Cuboid::getVolume(){
    return volume;
}

void Cuboid::printDims(){
    cout << "\n\nShape: " << name << "\nLength, width, height: " << length << width << height << "\nVolume: " << volume << "\nColor: " << color;
}
