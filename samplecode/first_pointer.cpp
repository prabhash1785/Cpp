#include <iostream>
using namespace std;

int main() {
  int * mypointer;
  int a = 10;

  mypointer = &a;

  cout << "value of a: " << *mypointer;
  cout << "\naddress of a: " << mypointer << "\n";
  cout << "Increment the value of a using pointer: " << (*mypointer + 1) << "\n";

  return 0;

}
