//
//  PointerArithmetic.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 2/27/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>

void pointerPlayGround() {
    
    int a = 3;
    std::cout << "Value of a is = " << a << "\n";
    
    int *b = &a;
    std::cout << "Value of a through pointer dereferencing is " << *b << "\n";
    
    char *c = nullptr; // Pointing to null pointer
    
    if(c == nullptr) {
        std::cout << "This is Null Pointer";
    } else {
        std::cout << "Expecting a Null Pointer Exceptions :: " << *c; // EVIL - this results in Segmentation Fault. Pointing to a memory which does not exist
    }
}

void printArrayElements(int *array, int length) {
    
    if(array == nullptr || length <= 0) {
        std::cout<< "Array points to a Null Pointer";
        return;
    }
    
    for(int i=0; i < length; i++) {
        //std::cout << array[i] << "\n";
        std::cout << *array++ << "\n"; //Dereference the pointer and then increment the pointer
    }
    
}

int main() {
    
    //pointerPlayGround();
    
    int a[] = {2, 5, 7, 9, 10};
    int *b = a;
    
    int size = 5;
    
    printArrayElements(b, size);
}