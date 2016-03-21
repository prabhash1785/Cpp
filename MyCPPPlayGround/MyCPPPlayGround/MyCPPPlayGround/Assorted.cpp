//
//  Assorted.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/19/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <stdexcept>
using namespace std;

// Function to swap two numbers using pointer dereferencing
void swap_numbers(int *a, int *b) {
    
    if(a == nullptr || b == nullptr) {
        throw invalid_argument("a or b is null");
    }
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

// swap numbers using value by reference
void swap_numbers_using_param_reference(int &a, int &b) {
    
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    
    int p = 100;
    int &address_of_p = p;
    cout << "p " << p << endl;
    cout << "value of p using reference: " << address_of_p << endl;
    cout << "address of int p using reference " << &address_of_p << endl;
    
    int i = 10;
    cout << "i = " << i << endl;
    
    const int j = i;
    // j = 20; // this is error, cannot change const
    cout << "j = " << j << endl;
    
    // swap two numbers
    int a = 10;
    int b = 20;

    //swap_numbers(&a, &b);
    swap_numbers_using_param_reference(a, b);
    cout << "a  = " << a << " b = " << b << endl;
    
    // const references
    const int num = 100;
    // int &num_ref = num; // this is compilation error, cannot assign const object to non-const ref
    const int &num_ref = num;
    
    // const pointers
    const char c = 'x';
    // char *c_pointer = &c; // compilation error, cannot assign const to non-const pointer
    const char *c_pointer = &c;
    
    char ch = 4;
    c_pointer = &ch; // Able to move const pointer to new address. Also non const object can be assigned to const pointer
    // *c_pointer = 100; // compilation error, cannot change object value through const pointer
    
}
