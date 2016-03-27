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

int main() {
    
    string a = "hello";

    echo(a);
    
    cout << "Original value: " << a << endl;
    
    int ia[10] = {2, 4, 12, 8, 34, 23, 9, 1, 7};
    print(ia);
}

void echo(const string &s) {

    cout << "Value: " << s << endl;
}

void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}


