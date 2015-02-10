#include <iostream>
using namespace std;

int main() {
  int * mypointer;
  int a = 10;

  mypointer = &a;

  cout << "value of a: " << *mypointer;
  cout << "\naddress of a: " << mypointer << "\n";

  return 0;

}
