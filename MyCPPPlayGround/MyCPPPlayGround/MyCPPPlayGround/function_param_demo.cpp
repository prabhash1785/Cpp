//
//  function_param_demo.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/26/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void echo(const string&);
void print(const int ia[10]);
void default_param_demo(int a = 10, char c = '*');

// inline function - this function gets expanded inline by compiler hence adding to efficiency of the program
inline int add(const int &a, const int &b) {
    return a + b;
}

// constexpr function - these functions accept const expression
constexpr int get_greater(const int &a, const int &b) {
    return a > b ? a : b;
}

string say_something() {
    string message = "hey there";
    return message; // this is fine because I am returning a copy of local object
}

int main() {
    
    string a = "hello";

    echo(a);
    
    cout << "Original value: " << a << endl;
    
    int ia[10] = {2, 4, 12, 8, 34, 23, 9, 1, 7};
    print(ia);
    
    //default param demo
    default_param_demo(); // valid call as both params have default values
    default_param_demo(20); // override first default param
    default_param_demo(100, '$'); // override both
    default_param_demo('='); // this will override first param and convert char value to int
    
    // inline function
    cout << "sum is = " << add(10, 20) << endl;
    
    // constexpr function
    cout << "Enter 2 numbers for comparison: ";
    int u = 10;
    int v = 20;
    cout << "Which is greater, " << u << " or " << v << ": " << get_greater(u, v) << endl;
    
    cout << "Your message is: " << say_something() << endl;
}

void echo(const string &s) {

    cout << "Value: " << s << endl;
}

void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}

void default_param_demo(int a, char c) {
    cout << a << " " << c << endl;
}


