#include <iostream>
#include <string>
using namespace std;

int main() {
  char foo[20] = {'h', 'e', 'l', 'l', 'o', '\0'}; //null character at the end is optional and compiler adds it by default if not added explicitly
  string bar = "Hello";

  cout << foo << '\n';
  cout << bar << '\n';
  cout << bar.c_str() << '\n'; //print string as c-string

}
