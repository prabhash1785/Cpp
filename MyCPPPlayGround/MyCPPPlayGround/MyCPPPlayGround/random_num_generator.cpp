//
//  random_num_generator.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/26/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <random>

using namespace std;

int main() {
    
    default_random_engine rand;
    
    cout << "Min random number which could be generated: " << rand.min() << endl;
    cout << "Max random number which could be generated: " << rand.max() << endl;
    cout << "Here are 10 random numbers:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << rand() << endl;
    }
}
