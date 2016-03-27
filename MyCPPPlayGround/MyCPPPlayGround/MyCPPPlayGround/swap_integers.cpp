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
void swap_using_pointers(int *a, int *b) {
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

// sway two numbers using reference
void swap_using_reference(int &p, int &q) {
    
    int temp = p;
    p = q;
    q = temp;
}

int main() {
    
    int m, n;
    cout << "Enter two numbers which you want to swap: " << endl;
    cin >> m >> n;
    
    cout << "You entered: m = " << m << " n = " << n << endl;
    
//    swap_using_pointers(&m, &n);
//    cout << "Values swapped: m = " << m << " and n = " << n << endl;
    
    swap_using_reference(m, n);
    cout << "Values swapped: m = " << m << " and n = " << n << endl;
}
