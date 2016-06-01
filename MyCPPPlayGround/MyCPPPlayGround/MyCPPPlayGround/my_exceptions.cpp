//
//  my_exceptions.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/29/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <string>
#include <exception>

using namespace std;

class myexception: public exception
{
    virtual const char* what() const throw() {
        return "My exception happened";
    }
} myex;

int main(int argc, char **argv) {
    
    try {
        cout << "Going to throw an exception" << endl;
        throw 20; // throw an integer value exception
    } catch(int n) {
        cout << "Exception caught of value: " << n << endl;
        cout << "Program continues to execute" << endl;
    }
    
    try {
        throw string("string exception"); // throwing a string is not a good idea instead embed this in a custom class of type exception
    } catch(string e) {
        cout << "string type exception thrown: " << e << endl;
    }
    
    try {
        throw "this is a const char exception";
    } catch(string s) {
        cout << s << endl;
    } catch(const char *c) {
        cout << "exception is: " << string(c) << endl;
    } catch(...) {
        cout << "No idea what this exception is" << endl;
    }
    
    try {
        throw myex;
    } catch(exception &e) {
        cout << e.what() << endl;
    }
}


