//
//  smart_pointers_operations.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/12/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include<string>
#include <vector>

using namespace std;

void modify_shared_ptr_content() {
    
    vector<string> vec = {"San Francisco, London", "Sydney"};
    shared_ptr<vector<string>> my_shared_ptr; // default initialized smart pointer holds null pointer
    
    if(my_shared_ptr && my_shared_ptr->empty()) {
        cout << "Shared pointer does not point to NULL" << endl;
    } else {
        cout << "Shared pointer points to NULL" << endl;
    }

    auto my_shared_ptr_int = make_shared<int>(16);
    
    if(my_shared_ptr_int) {
        cout << "Shared pointer does not point to NULL" << endl;
        cout << "Shared pointer holds: " << *my_shared_ptr_int << endl;
    } else {
        cout << "Shared pointer points to NULL" << endl;
    }
}

int main() {
    
    modify_shared_ptr_content();
}
