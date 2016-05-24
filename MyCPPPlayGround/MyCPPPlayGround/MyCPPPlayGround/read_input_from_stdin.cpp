//
//  read_input_from_stdin.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/24/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// simple program to accept input from stdin
// accept input as two separate lines and then tokenized that input as integers
int main() {
    
    string line1, line2;
    
    getline(cin, line1);
    getline(cin, line2);
    cout << "This is what you entered::" << endl;
    cout << line1 << endl;
    cout << line2 << endl;
    
    // split lines into tokens
    int a, b, c;
    istringstream stream(line1);
    stream >> a >> b >> c;
    
    cout << "Tokenized integers:" << endl;
    cout << a << " " << b << " " << c << endl;
}
