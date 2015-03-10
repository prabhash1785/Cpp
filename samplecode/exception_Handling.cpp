#include <iostream>
using namespace std;

int main() {
  
  try {
    throw "excep";
  } catch(char c) {
    cout << "Char Exception: " << c;
  } catch(int a) {
    cout << "Int Exception thrown: " << a;
  } catch(...) {
    cout << "I can catch any kind of exception!!\n";
  }

  return 0;

}
