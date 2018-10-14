//
//  Square.cpp
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

#include <stdio.h>
#include "Shape.h"
#include "Square.h"
#include <iostream>

Square::Square(){
        length = 0;
        area = 0;
        name = "Square";
    }
    
Square::Square(float l){
        length = l;
        calcArea();
        name = "Square";
        
    }
    
void Square::calcArea(){
        area = length * length;
    }
    
float Square::getArea(){
        return area;
    }

void Square::printDims(){
    
    cout << "\n\nShape: " << name << "\nLength: " << length <<  "\nArea: " << area << "\nColor: " << color;
    
}

float Square::getVolume(){
    return area;
}




    
