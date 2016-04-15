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
#include <iterator>
#include <sstream>

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
    
    // itertaion using for loop
    for(string s : v1) {
        cout << s << endl;
    }
    
    // iterate using standard iterator
    cout << "-- Printing vector elments using an iterator --" << endl;
    auto iter = v1.begin();
    while(iter != v1.end()) {
        cout << iter -> data() << endl;
        iter++;
    }
    
}

// Tokenize string using getline() function
void tokenize_string(string s, const char delimiter) {
    
    vector<string> vector;
    istringstream is_stream(s);
    
    while(!is_stream.eof()) {
        string word;
        getline(is_stream, word, delimiter);
        vector.push_back(word);
    }
    
    cout << "Here are tokenized words:" << "\n";
    auto iter = vector.cbegin();
    while(iter != vector.cend()) {
        cout << iter -> data() << "\n";
        iter++;
    }
    cout << endl; // flush at the end
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
    
    // tokenize string based on given delimiter
    string input("CPP is an awesome programming language. It's fun to work with pointers and low level stuff.");
    tokenize_string(input, ' ');
}
