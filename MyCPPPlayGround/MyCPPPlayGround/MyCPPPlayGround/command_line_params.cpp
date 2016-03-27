//
//  command_line_params.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/26/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>

using namespace std;

char to_upper(char &c) {
    
    if(c >= 97 && c <= 122) {
        c = c - 32;
    } else {
        cout << c << " is already upper case." << endl;
    }
    
    return c;
}

int main(int argc, char **argv) {
    
    cout << "Executable name is name: " << *argv << endl;
    
    if(argc < 2) {
        cout << "No command line parameter provided" << endl;
    } else {
        
        for(int i = 1; i != argc; i++) {
            cout << "Parameter " << i << " : " << *(argv + i) << endl;
        }
    }
    
    char ch;
    cout << "Enter a character in lower case: ";
    cin >> ch;
    cout << "Char in upper case " << to_upper(ch) << endl;
}
