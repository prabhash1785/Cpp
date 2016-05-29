//
//  find_max_bitwiseand_value.cpp
//  MyCPPPlayGround
//
//  Given set S = {1,2,3,..,N}. Find two integers,  and  (where ), from set  such that the value of is the maximum possible and also less than a given integer, . In this case,  represents the bitwise AND operator.
//
//  Created by Rathore, Prabhash on 5/27/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>

using namespace std;

// Time Comeplexity: O(n ^ 2)
int find_max(const int &n, const int &k) {
    
    int max = 0;
    for(int i = 1; i < n; i++) {
        for(int j = i + 1; j <= n; j++) {
            
            int tempAndResult = i & j;
            if(tempAndResult > max && tempAndResult < k) {
                max = tempAndResult;
            }
        }
    }
    return max;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        
        int max = find_max(n, k);
        cout << max << endl;
    }
    return 0;
}
