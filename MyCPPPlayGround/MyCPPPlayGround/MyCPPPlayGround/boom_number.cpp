// Print kth Boom Number
// Boom numbers are numbers consisting only of digits 2 and 3. For eg,
// Input : k = 2
// Output: 3
//
// Input : k = 100
// Output: 322323
//
// Created by Rathore, Prabhash on 8/19/16

#include<iostream>
#include<stack>
using namespace std;

// Time Complexity: O(log k)
void printKthBoomNumber(int k) {
  stack<int> st;
  do {
    if(k%2) // if k is odd push 2 to stack
      st.push(2);
    else
      st.push(3);
	
    k=(k-1)/2;
   } while(k!=0);
		
   while(!st.empty()) {
     cout << st.top();
     st.pop();
   }
   cout << endl;
}


int main()
{
 int k;
 cin >> k;
 printKthBoomNumber(k); 
 return 0;
}
