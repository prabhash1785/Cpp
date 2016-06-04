//
//  find_diagonal_diff.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 6/3/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_nested_vector_elements(vector<vector<int>> &a, const int &n) {
    
    auto i1 = a.cbegin();
    
    for(int i = 0; i < n; i++) {
        
        vector<int> v = *(i1 + i);
        auto i2 = v.cbegin();
        
        for(int j = 0; j < n; j++) {
            cout << *(i2 + j) << " ";
        }
        cout << endl;
        
    }
}

void print_diagonal_difference(vector<vector<int>> &a, const int &n) {
    
    int d1_sum = 0, d2_sum = 0;
    auto top_iterator = a.cbegin();
    for(int i = 0; i < n; i++) {
        vector<int> v = *(top_iterator + i);
        auto inner_iterator = v.cbegin();
        d1_sum += *(inner_iterator + i);
    }
    
    for(int i = n - 1, j = 0; i >= 0 && j < n; i--, j++) {
        auto inner_iterator = (*(top_iterator + i)).cbegin();
        d2_sum += *(inner_iterator + j);
    }
    
    cout << "Absolute diagonal diff = " << abs(d1_sum - d2_sum) << endl;
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
        for(int a_j = 0;a_j < n;a_j++){
            cin >> a[a_i][a_j];
        }
    }
    
    print_nested_vector_elements(a, n);
    print_diagonal_difference(a, n);
    return 0;
}
