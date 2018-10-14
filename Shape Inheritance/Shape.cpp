//
//  Shape.cpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Shape.h"
using namespace std;

//default constructor
Shape::Shape(){
    
    name = "Shape";
    color = "White";
    
}// pure abstract class

//constructor
Shape::Shape(string n, string c){
        color = c;
        name = n;
    }

    
    // set color of shape
void  Shape::setColor(string c){
        color = c;
    }
    
    // get color of shape
string Shape::getColor(){
        return color;
    }
    
    // set name of shape
void Shape::setName(string n){
        name = n;
    }
    
    // get name of shape
string Shape::getName(){
        return name;
    }

void Shape::printDims(){
    cout <<  " Shape: " << name << " Color: " << color;
}

float Shape::getArea(){
    return 0;
}

float Shape::getVolume(){
    return 0;
}
    
    


