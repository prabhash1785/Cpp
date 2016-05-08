//
//  sequential_container.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/4/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <list>
#include <deque>
#include <string>
#include <vector>

using namespace std;

void print_data(const list<deque<int>> list);

void list_with_queue() {
    
    list<deque<int>> list;

    deque<int> queue;
    queue.push_back(4);
    queue.push_back(10);
    queue.push_back(20);
    queue.push_back(100);
    queue.pop_front();
    
    deque<int> queue2;
    queue2.push_back(20);
    queue2.push_back(50);
    queue2.push_back(60);
    
    list.push_back(queue);
    list.push_back(queue2);
    
    print_data(list);
}

void iterator_range() {
    
    list<string> list1;
    list1.push_back("Apple");
    list1.push_back("Mango");
    list1.push_back("Orange");
    list1.push_back("Grapes");
    
    // If not modifying container then use const iterator
    auto start_iter = list1.cbegin(); // iteraor declaration using auto
    list<string>::const_iterator end_iter = list1.cend(); // explicit iterator declaration
    
    while(start_iter != end_iter) {
        cout << *start_iter << endl;
        start_iter++;
    }
    
    // vector
    vector<string> cities = {"Chicago", "New York", "San Francisco", "Las Vegas"};
    auto cities_copy = cities; // copy cities elements to new vector
    
    vector<string>::const_reverse_iterator cities_iterator = cities_copy.crbegin(); // use const reverse iterator to access elements from the back
    while(cities_iterator != cities_copy.crend()) {
        cout << *cities_iterator << endl; // access element by dereferencing the pointer
        cout << cities_iterator->data() << endl; // access element using arrow operator
        cities_iterator += 1; // or simply do an increment operaror
    }
}

void print_data(const list<deque<int>> list) {
    
    if(list.empty()) {
        cout << "Empty list" << endl;
    }
    
    for(deque<int> d : list) {
        
        for(int i : d) {
            
            cout << i << " ";
        }
        cout << endl;
    }
    
}

int main() {
    
    list_with_queue();
    iterator_range();
}
