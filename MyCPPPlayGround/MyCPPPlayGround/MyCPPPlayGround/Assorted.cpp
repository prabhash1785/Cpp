//
//  Assorted.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/19/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <stdexcept>
#include <string>
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

void get_input_from_stdin() {
    
    // string
    string s;
    cin >> s; // just gets the string before white space. Strings after white space are ignored
    cout << "You entered ==> " << s << endl;
    
    cout << "\n How are you feeling today?" << endl;
    string line;
    while(getline(cin, line)) {
        
        if(line == "Quit") {
            break;
        }
        cout << "You entered ==> " << line << endl;
        cout << "Enter Quit to quit" << endl;
    }
}

void mask_string() {
    
    cout << "Enter a String: ";
    string input;
    cin >> input;

    // For Pre-C++11
//    for(int i = 0; i < input.size(); i++) {
//        input[i] = 'X';
//    }

    // Using C++11
    for(auto &c : input) {
        c = 'X';
    }
    
    cout << "Mutated String: " << input << endl;
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
    
    // get_input_from_stdin();
    
    //mask_string();
    
}
