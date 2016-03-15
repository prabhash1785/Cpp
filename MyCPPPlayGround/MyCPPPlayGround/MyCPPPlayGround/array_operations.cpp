//
//  array_operations.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 3/14/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    char letters[] = {'a', 'b', 'g', 'w', 'z',};
    
    // Traverse char array using aray sub-index
    for(int i = 0; letters[i] != '\0'; i++) {
        cout << letters[i] << endl;
    }
    
    // Traverse using a pointer
    for(char* p = letters; *p != '\0'; p++) {
        cout << *p << endl;
    }
}
