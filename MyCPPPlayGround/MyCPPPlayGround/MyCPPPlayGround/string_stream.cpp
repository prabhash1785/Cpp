//
//  string_stream.cpp
//  MyCPPPlayGround
//
//  Assorted methods using sstream
//
//  Created by Rathore, Prabhash on 8/5/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// Split a comma separated string and store that in a vector of ints
vector<int> parseInts(string str) {
    vector<int> v;
    stringstream stream(str);
    string s;
    while(getline(stream, s, ',')) {
        v.push_back(stoi(s));
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

