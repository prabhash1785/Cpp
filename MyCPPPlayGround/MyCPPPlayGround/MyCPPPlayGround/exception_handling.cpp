//
//  exception_handling.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/25/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    
    int a, b;
    cout << "Enter two numbers for division (a/b): " << endl;
    cin >> a >> b;
    
    int division = 0;
    bool allGood = false;
    
    while(!allGood) {
        
        try {
            
            if(b == 0) {
                throw invalid_argument("Cannot divide by zero");
            }
            
            division = a / b;
            allGood = true;
        } catch(invalid_argument ex) {
            
            cout << "Cannot divide by 0, enter a different number: ";
            allGood = false;
            cin >> b;
            
        }
    }
    
    cout << "Division = " << division << endl;
}

