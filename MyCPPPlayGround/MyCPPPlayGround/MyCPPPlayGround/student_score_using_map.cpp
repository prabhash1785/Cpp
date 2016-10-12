//
//  student_score_using_map.cpp
//  MyCPPPlayGround
//
// Using C++ Map, maintain student name and their scores. Write program to allow queries to be run on this map. Queries would be of form:
// 1 X Y : Add student X and his score Y
// 2 X : Erase student X's score to 0
// 3 X : Print student X's score else print 0
//
//  Created by Rathore, Prabhash on 10/10/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    int count;
    cin >> count;
    
    map<string, int> map;
    std::map<string, int>::iterator iter = map.begin();
    string line;
    while(count >= 0) {
        getline(cin, line);
        
        int op_type;
        istringstream stream(line);
        stream >> op_type;
        
        string name;
        switch(op_type) {
            case 1:
                stream >> name;
                int score;
                stream >> score;
                
                iter = map.find(name);
                if(iter == map.end())   {
                    map.insert(pair<string, int>(name, score));
                } else {
                    int newScore = iter -> second + score;
                    map.erase(name); // first remove old key and value
                    map.insert(pair<string, int>(name, newScore));
                }
                break;
            case 2:
                stream >> name;
                
                iter = map.find(name);
                if(iter != map.end())   {
                    map.erase(name);
                    map.insert(pair<string, int>(name, 0));
                }
                break;
            case 3:
                stream >> name;
                
                iter = map.find(name);
                if(iter != map.end())   {
                    cout << iter -> second << endl;
                } else {
                    cout << 0 << endl;
                }
                break;
        }
        
        --count;
    }
    return 0;
}


