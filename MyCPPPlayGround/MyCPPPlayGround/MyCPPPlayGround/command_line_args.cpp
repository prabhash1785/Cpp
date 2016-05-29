//
//  my_exceptions.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/29/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <exception>
# include <string>

using namespace std;

int main(int argc, char **argv) {
    cout << "File name is: " << *argv << endl;
    
    if(argc < 2) {
        cout << "No command line params provided" << endl;
        return 1;
    }
    
    cout << "Here is what you entered:" << endl;
    for(int i = 1; i < argc; i++) {
        cout << *(argv + i) << endl;
    }
}