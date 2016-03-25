//
//  multi_dim_array.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/24/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    constexpr size_t row_size = 2, col_size = 3;
    const int a[row_size][col_size] = {{4, 5, 10}, {2, 9, 15}};
    
    cout << "Array elements using regular for loop: " << endl;
    // simple nested for loop iteration
    for(size_t i = 0; i < row_size; i++) {
        
        for(size_t j = 0; j < col_size; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Array elements using range for loop: " << endl;
    // use range for loop
    //for(auto i : a) { // Without reference on "auto i", this will result in compilation error because i is a pointer and you cannot iterate over pointer
    for(auto &i : a) {
        
        for(auto j : i) {
            
            cout << j << " ";
        }
        cout << endl;
    }
    
    cout << "Array elements using pointers: " << endl;
    // print elements using pointers
    for(auto p = a; p != a + 2; p++) {
        
        for(auto q = *p; q != *p + 3; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }
    
}




