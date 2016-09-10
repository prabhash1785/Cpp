//
//  find_substring.cpp
//  MyCPPPlayGround
//
//  find if a given string is a substring of other
//
//  Created by Rathore, Prabhash on 9/10/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>

using namespace std;

const char* get_substring(const char*, const char*); // added const to prevent C++11 warning of pointer assignment to string literal
int size_of(const char*);

int main() {
    char const *s1 = "hellotherehowareyou";
    char const *s2 = "there";
    const char *sub_string;
    try {
       sub_string  = get_substring(s1, s2);
    } catch(invalid_argument ex) {
        cout << "length of b cannot be greater than a" << endl;
        return 1;
    }

    if(sub_string == nullptr) {
        cout << "No substring available" << endl;
    } else {
        cout << "Here is substring: ";
        int count = 0;
        while(*(sub_string + count) != '\0') {
            cout << (*(sub_string + count));
            ++count;
        }
        cout << endl;
    }
}

// find if b is a substring of a
// if b is a substring of a then return that substring from start of substring to end of original string
// else return null
//
// Time Complexity: O(nm) where n = size of a, m = size of b
const char* get_substring(const char *a, const char *b) {
    if(a == nullptr || b == nullptr) {
        return NULL;
    }
    
    int a_length = size_of(a);
    cout << "Size of a: " << a_length << endl;
    int b_length = size_of(b);
    cout << "Size of b: " << b_length << endl;
    
    if(b_length > a_length) {
        throw invalid_argument("Length of string b cannot be greater than a");
    }
    
    while(*a != '\0') {
        int count = 0;
        char const *temp = b;
        while(*temp != '\0' && *(a + count) != '\0') {
            if(*temp != *(a + count)) {
                break;
            }
            ++count;
            temp += 1;
        }
        if(*temp == '\0') {
            return a;
        }
        a += 1;
    }
    return NULL;
}

int size_of(const char *s) {
    if(s == nullptr) {
        return 0;
    }
    
    int size = 0;
    while(*s != '\0') {
        ++size;
        s += 1;
    }
    return size;
}
