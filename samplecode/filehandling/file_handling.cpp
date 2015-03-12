//writing to a text file
#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ofstream myFile;
  myFile.open("example.txt");
  if(myFile.is_open()) {
    myFile << "This is my first CPP generated file..\n";
    myFile << "This is the second line.\n";
    myFile.close();
  } else {
   cout << "File couldn't be opened for writing\n";
  }

 return 0;

}

