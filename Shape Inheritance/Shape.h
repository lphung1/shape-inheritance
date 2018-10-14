//
//  Shape.h
//  Shape Inheritance
//
//  Created by Loi Phung on 10/14/18.
//  Copyright © 2018 Loi Phung. All rights reserved.
//

using namespace std;
#include <iostream>
#ifndef Shape_h
#define Shape_h

class Shape{      // pure abstract class
    
    
public:
    Shape();
    Shape(string n, string c);
    
    void   setColor(string c);    // set color of shape
    string getColor() ;                // get color of shape
    void   setName(string c);  // set name of shape
    string getName() ;               // get name of shape
    virtual void printDims();      // prints the shape's  name, area, volume and color
    virtual float  getArea();
    virtual float  getVolume();
    
protected:
    string color;         // color of shape
    string name;
    
};




#endif // Shape_h 
