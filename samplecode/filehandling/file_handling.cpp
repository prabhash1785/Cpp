#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ofstream myFile;
  myFile.open("example.txt");
  myFile << "This is my first CPP generated file..\n";
  myFile.close();

 return 0;

}

