//
//  sizeofdatatype.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 2/26/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    // c++ allows to implicitly transform data from int to broader data types like double
    // this does not lead to compilation erros but generate warnings as you lose data
    int a = 20.8; // generates Warning as this leads to truncation of floating number bits
    cout << "a " << a << "\n";
    
    // int b {12.5}; // this results in compilation error as it does not allow narrow conversions
    
    // sizeof() different C++ data types in bytes
    cout << "Size of int: " << sizeof(int) << "\n";
    cout << "size of bool = " << sizeof(bool) << "\n";
}
