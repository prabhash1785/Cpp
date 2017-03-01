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

// tokenize string using boost tokenizer
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

// Extract last two domains from given sub-domain using string::rfind()
void extractLastTwoDomains(const std::string &sub_domain, std::string &tld) {
  if(sub_domain.empty()) {
      cout << "Empty sub-domain" << endl;
      return;
  }
    
  std::string::size_type lastDotPos;
  lastDotPos = sub_domain.rfind('.');
  cout << "lastDotPos = " << lastDotPos << endl;
  
  if(lastDotPos == string::npos) {
    cout << "Not a valid sub-domain" << endl;  
    return;
  }
  
  string lastWord = sub_domain.substr(lastDotPos);
  cout << "lastWord = " << lastWord << endl;
  
  std::string::size_type secondToLastDotPos;
  secondToLastDotPos = sub_domain.rfind('.', lastDotPos - 1);
  cout << "secondToLastDotPos = " << secondToLastDotPos << endl;
  
  if(secondToLastDotPos == string::npos) {
    cout << "Not a valid sub-domain" << endl;  
    return;
  }
  
  string secondToLastWord = sub_domain.substr(secondToLastDotPos + 1, lastDotPos - secondToLastDotPos - 1);
  cout << "secondToLastWord = " << secondToLastWord << endl;
  
    tld = secondToLastWord.append(lastWord);
    cout << "Fallback TLD: " << tld << endl;
}

int main(){
   string s = "foo.bar.baz.mail.msn.com";
   string output;
   
   if(getTLD(s, output)) {
       cout << "TLD is: " << output << endl;
   } else {
       cout << "TLD does not exist" << endl;
   }

  // Method 2 test
   string t = "foo.bar.baz.mail.msn.com";
   string output2;
   extractLastTwoDomains(t, output2);
}
