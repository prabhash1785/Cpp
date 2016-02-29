//
//  VirtualFunctionDemo.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 2/24/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include "VirtualFunctionDemo.h"

class Shape {

    public:
    virtual void printShapeName() {
        std::cout << "This is generic shape class" << "\n";
    }
    
};

class Triangle: public Shape {
    
    public:
    void printShapeName() {
        std::cout << "Triangle" << "\n";
    }
    
};

int main(int argc, const char * argv[]) {
    
    Shape *a = new Shape();
    a -> printShapeName();
    
    Shape * x = new Triangle();
    x -> printShapeName();
    
    // free memory
    delete a;
    delete x;
    
    return 0;
}


