#include <iostream>
using namespace std;

struct person {
  string name;
  int age;
};

int main() {
  person foo;
  person * p_foo;

  p_foo = &foo;

  foo.name = "Max Joe";
  p_foo -> age = 30;

  cout << "Name: " << p_foo -> name << "\n";
  cout << "Age: " << p_foo -> age << "\n";
  return 0;
}


