//
//  read_file.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 4/13/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void read_file(istream &input_stream) {
 
    string line;
    while(!input_stream.eof()) {
        getline(input_stream, line);
        cout << line << endl;
    }
}

void read_file_line_to_vector() {
    
    ifstream in("some_file.txt");
    vector<string> v1;
    
    string line;
    if(in) {
        while(getline(in, line)) {
            v1.push_back(line);
        }
        in.close();
    } else {
        cout << "Error opening the file" << endl;
        return;
    }
    
    for(string s : v1) {
        cout << s << endl;
    }
}

int main() {
    
    ifstream file_stream("some_file.txt");
    if(file_stream.is_open()) {
        
        read_file(file_stream);
        file_stream.close();
    } else {
        cout << "Could not open the file" << endl;
    }
    
    read_file_line_to_vector();
    
}
