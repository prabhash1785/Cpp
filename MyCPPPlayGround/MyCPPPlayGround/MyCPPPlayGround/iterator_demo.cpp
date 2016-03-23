//
//  iterator_demo.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/22/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

// iterate a vector
void iterate_vector_of_strings() {
    
    vector<string> names {"apple", "mango", "orange"};
    
    auto iter_start = names.cbegin(); // const_iterator
    auto iter_end = names.cend();
    
    cout << "Size of vector: " << distance(iter_start, iter_end) << endl; // find size using distance(iter1, iter2) function
    
    while(iter_start != iter_end) {
        cout << iter_start->data() << " ";
        iter_start++;
    }
    cout << endl;
}

// mutate vector elements using iterator
void mutate_vector_element_using_iter() {
    
    vector<int> nums {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    auto iter_start = nums.begin();
    auto iter_end = nums.end();
    
    while(iter_start != iter_end) {
        
        *iter_start = (*iter_start) * 5;
        iter_start++;
    }
    
    iter_start = nums.begin(); // reset iterator back to first object
    while(iter_start != iter_end) {
        cout << *iter_start << " ";
        iter_start++;
    }
    cout << endl;
}

int main() {
    
    iterate_vector_of_strings();
    
    mutate_vector_element_using_iter();
}
