//Program to read from a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  
  ifstream myFile("example.txt"); //open file while instantiating the stream object

  if(myFile.is_open()) {
    string line;
    while(getline(myFile, line)) {
      cout << line << "\n";
    }
    myFile.close();
  } else {
    cout << "Unable to open a file!!\n";
  }
  
  return 0;

}
