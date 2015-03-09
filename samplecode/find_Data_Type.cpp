#include <iostream>
#include <typeinfo>
#include <exception>
using namespace std;

int main() {
  
  int * a = 0, b = 20;
  float f = 6.45;
  double d = 2.985634;
  bool boo = false;

  try {
    cout << "\nType of int * a: " << typeid(a).name();
    cout << "\nType of int b: " << typeid(b).name();
    cout << "\nType of float f: " << typeid(f).name();
    cout << "\nType of double d: " << typeid(d).name();
    cout << "\nType of bool boo: " << typeid(boo).name();
  } catch(exception& e) {
    cout << "\nException Occurred: " << e.what() << "\n";
  }
  
  return 0;

}
