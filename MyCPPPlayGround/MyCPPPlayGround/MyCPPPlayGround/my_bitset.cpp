//
//  my_bitset.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/25/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <bitset>

using namespace std;

int main() {
    
    bitset<16> b;
    cout << "Enter a bitset:" << endl;
    cin >> b;
    
    cout << "Number of bits: " << b.size() << endl;
    cout << "Number of set bits: " << b.count() << endl;
}

