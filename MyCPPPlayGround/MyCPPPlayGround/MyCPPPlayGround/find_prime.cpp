//
//  find_prime.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/22/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(const int &num) {
    
    if(num == 1) {
        return false;
    } else {
        
        int startNum = 2;
        double endNum = sqrt(num);
        while(startNum <= endNum) {
            
            if(num % startNum == 0) {
                return false;
            }
            
            startNum++;
        }
    }
    
    return true;
}

int main() {
    
    int numberOfTestCase;
    cin >> numberOfTestCase;
    
    int num;
    vector<int> inputs;
    while(numberOfTestCase-- > 0) {
        
        cin >> num;
        inputs.push_back(num);
    }
    
    auto start_iterator = inputs.cbegin();
    while(start_iterator < inputs.cend()) {
        
        if(isPrime(*start_iterator)) {
            cout << "Prime";
        } else {
            cout << "Not Prime";
        }
        
        ++start_iterator;
        cout << endl;
    }
    return 0;
}
