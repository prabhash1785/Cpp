// Convert IP to Binary String
//
// Author: Prabhash Rathore
// Date: Apr 3, 2021

# include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string binaryConverter(string &s) {
 
 string binary;
 
 int num = stoi(s);
 while (num > 0) {
  if (num % 2 == 0) {
      binary = "0" + binary;
  } else {
      binary = "1" + binary;
  }
  
  num = num / 2;
 }
 
 // 0 1 1 0
 int len = binary.size();
  while (len < 8) {
   binary = "0" + binary; 
   len++;
  }
  
 return binary;
}

string convertToBinary(vector<string> &vec) {
    string binary;
    
    
    for (string s : vec) {
     string subVal = binaryConverter(s);
     binary += subVal;
     cout << "Vector element: " << s << ";subVal=" << subVal << ";size=" << subVal.size() << "\n";
    }
    
    return binary;
}

class IP {
 
 private:
    string binary;
    
 public:
    IP(string &ipAddr) {
        
        istringstream ss(ipAddr);

        vector<string> vec;
        string word;       
        
        while(getline(ss, word, '.')) {
            vec.push_back(word);   
        }
        
        this->binary = convertToBinary(vec);
    }
    
    string getBinaryValue() {
        return this->binary;   
    }
    
};

int main() {
 
 cout << "IP utility:\n";
 string ipAddr = "129.255.12.123";
 IP ip(ipAddr);
 string binary = ip.getBinaryValue();
 cout << "Binary value: " << binary << ";size=" << binary.size() << "\n";
    
}
