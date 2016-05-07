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
    
    list<string> list;
    list.push_back("Apple");
    list.push_back("Mango");
    list.push_back("Orange");
    list.push_back("Grapes");
    
    auto start_iter = list.begin();
    auto end_iter = list.end();
    
    while(start_iter != end_iter) {
        cout << *start_iter << endl;
        start_iter++;
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
