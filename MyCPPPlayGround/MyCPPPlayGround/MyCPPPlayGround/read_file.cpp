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

using namespace std;

istream& read_file(istream &input_stream) {
 
    string line;
    while(getline(input_stream, line)) {
        
        cout << line << endl;
    }
    return input_stream;
}

int main() {
    
    ifstream file_stream("some_file.txt");
    if(file_stream.is_open()) {
        
        read_file(file_stream);
        file_stream.close();
    } else {
        cout << "Could not open the file" << endl;
    }
    
}
