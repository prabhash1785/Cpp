//
//  vector_demo.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/21/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

// Change string to upper case
void change_to_upper_case(string &input) {
    
    for(auto &a : input) {
        a = toupper(a);
    }
}

// Print elements of vector recursively
void print_vector_elements_recursively(vector<int> &v) {
    
    if(v.empty()) {
        cout << "Finally vector is empty.." << endl;
        return;
    }
    
    cout << v.back() << " ";
    v.pop_back();
    print_vector_elements_recursively(v); // recurse
}

int main() {
    
    vector<int> v {2, 19, 4};
    v.push_back(20);
    
    for(auto a : v) {
        cout << a << endl;
        
        // this should have result in error as we are modifying vector structure while iterating over this structure
        // Did not see any compilation or runtime error but this element is not added to vector
        // v.push_back(100);
    }
    
    // size of empty vector
    vector<vector<int>> v2;
    cout << "Size of v2 : " << v2.size() << endl;
    
    cout << "Enter 2 numbers:" << endl;
    int count = 0;
    int num;
    
    while(count != 2 && cin >> num) {
        count++;
        v.push_back(num);
    }
    
    cout << "Modified vector is: " << endl;
    for(auto a : v) {
        cout << a << endl;
    }
    
    // vector of strings
    cout << "Now enter 3 names: " << endl;
    count = 0;
    string name;
    vector<string> name_list;
    
    while(count < 3 && cin >> name) {
        count++;
        name_list.push_back(name);
    }
    
    cout << "Following names were added at Standard Input:" << endl;
    for(auto &n : name_list) {
        change_to_upper_case(n);
        cout << n << endl;
    }
    
    // Print elments of vector of int
    cout << "Printing elements of vector: " << endl;
    vector<int> vec {20, 40, 10, 50, 90};
    print_vector_elements_recursively(vec);
}
