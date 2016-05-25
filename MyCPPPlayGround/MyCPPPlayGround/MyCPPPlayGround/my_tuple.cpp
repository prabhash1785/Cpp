//
//  my_tuple.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/25/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <string>
#include <tuple>
using namespace std;

tuple<int, char, string> get_random_tuple() {
    
    tuple<int, char, string> t(10, 'p', "this is tuple");
    return t;
}

int main() {
 
    tuple<int, char, string> my_tup = get_random_tuple();
    cout << get<0>(my_tup) << endl;
    cout << get<1>(my_tup) << endl;
    cout << get<2>(my_tup) << endl;
}


