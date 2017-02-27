// Given any internet sub-domain address, extract the TLD.
// Compile command: g++ -std=c++11 -I /path/to/boost_1_63_0/ extract_tld.cpp -o extract_tld.o
// @athor Prabhash Rathore

#include<iostream>
#include<boost/tokenizer.hpp>
#include<string>
#include<vector>
#include <sstream>

using namespace std;
using namespace boost;

bool getTLD(const string &input, string &output) {
   vector<string> vec;
   tokenizer<> tok(input);
   for(tokenizer<>::iterator beg=tok.begin(); beg!=tok.end();++beg) {
       vec.push_back(*beg);
   }
   
   if(vec.size() < 2) {
       cout << "Domain size is too small" << endl;
       return false;
   }
   
   auto iter = vec.crbegin();
   stringstream ss;
   ss << *(iter + 1) << "." << *iter;
   output= ss.str();
   return true;
}

int main(){
   string s = "foo.bar.baz.mail.msn.com";
   string output;
   
   if(getTLD(s, output)) {
       cout << "TLD is: " << output << endl;
   } else {
       cout << "TLD does not exist" << endl;
   }
}
