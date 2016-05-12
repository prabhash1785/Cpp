//
//  map_operations.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/11/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    
    map<string, int> my_map{{"Bob", 2}, {"Rob", 5}, {"Rita", 1}}; // list style initialization of map
    auto iter = my_map.cbegin();

    while(iter != my_map.cend()) {
        
        cout << iter->first << " :: " << iter->second << endl;
        ++iter;
    }
    
}
