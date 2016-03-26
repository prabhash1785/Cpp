//
//  swap_integers.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/26/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>

using namespace std;

// swap two numbers using pointers
void swap(int *a, int *b) {
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    int m, n;
    cout << "Enter two numbers which you want to swap: " << endl;
    cin >> m >> n;
    
    cout << "You entered: m = " << m << " n = " << n << endl;
    
    swap(&m, &n);
    cout << "Values swapped: m = " << m << " and n = " << n << endl;
}
