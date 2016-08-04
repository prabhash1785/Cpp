//
//  caesar_cipher.cpp
//  MyCPPPlayGround

//  Encrypt given string by rotating each character by given number of steps. It should only encrypt alphabets, do not encrypt
//  numbers and special characters.
//
//  For eg, rotating hello by 1 should become = ifmmn
//
//
//  Created by Rathore, Prabhash on 8/4/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string encrypt(string, int , int);

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    
    string encrypted_string = encrypt(s, n, k);
    cout << "Caesar Encrypted String: " << encrypted_string << endl;
    return 0;
}

string encrypt(string s, int n, int k) {
    if(k == 0) {
        return s;
    }
    
    char encrypted_char[n];
    cout << "n = " << n << endl;
    
    int i = 0;
    auto it = s.begin();
    for(; it < s.end(); it++, i++) {
        char c = *it;
        cout << "c = " << c << endl;
        
        if(c >= 'a' && c <= 'z') {
            int diff = c - 'a';
            diff = (diff + k) % 26;
            c = diff + 'a';
            cout << "c == " << c << endl;
        } else if(c >= 'A' && c <= 'Z') {
            int diff = c - 'A';
            diff = (diff + k) % 26;
            c = diff + 'A';
            cout << "c == " << c << endl;
        }
        
        cout << "encrypted c = " << c << endl;
        encrypted_char[i] = c;
    }
    
    // convert char array to string
    string output;
    for(int x = 0; x < i; x++) {
        cout << "encrypted_char[x] = " << encrypted_char[x] << endl;
        output += encrypted_char[x];
    }
    cout << "output string = " << output << endl;
    
    return output;
}
