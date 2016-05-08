//
//  forward_list_operations.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/7/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

template <typename F>
void print_linked_list(const forward_list<F> &f_list);

// find and remove odd elements from forward list
void find_and_removed_odd_values() {
    
    forward_list<int> list = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    
    auto prev = list.before_begin();
    auto current = list.begin();
    
    cout << "Original Singly Linked List: " << endl;
    print_linked_list(list);
    
    while(current != list.end()) {
        
        if(*current % 2) { // if number is odd
            current = list.erase_after(prev);
        } else {
            prev = current;
            current++;
        }
    }
    
    cout << "Mutated Singly Linked List after removing odd numbers: " << endl;
    print_linked_list(list);
}

// print elements from forward list containing generic elements
template <typename F>
void print_linked_list(const forward_list<F> &f_list) {
    
    auto iter = f_list.cbegin();
    
    while(iter != f_list.cend()) {
        cout << *iter << " -> ";
        iter++;
    }
    cout << endl;
}

// Function that takes a forward_list<string> and two additional string arguments. The function should find the first string
// and insert the second immediately following the first. If the first string is not found, then insert the second string at the end of the list.
void insert_string_to_forward_list(forward_list<string> &name_list, string first, string second) {
    
    cout << "Original Singly Linked List: " << endl;
    print_linked_list(name_list);
    
    auto prev = name_list.before_begin(); // keep this pointer for cases where there is no match and current goes beyond end but prev will point to end
    auto current = name_list.begin();
    
    while(current != name_list.end() && *current != first) {
        
        prev = current;
        current++;
    }
    
    if(current == name_list.end()) { // if first was not found and current has gone beyond end of list
        name_list.insert_after(prev, second);
    } else {
        name_list.insert_after(current, second);
    }
    
    cout << "Mutated Singly Linked List: " << endl;
    print_linked_list(name_list);
}

int main() {
    
    find_and_removed_odd_values();
    
    forward_list<string> my_list = {"Unix", "Linux", "Windows"};
    insert_string_to_forward_list(my_list, "Linux", "MacOS");
}
