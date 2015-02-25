//This class will use a static variable to keep track of instantiated objects

#include <iostream>
using namespace std;

class Dummy {

 public:
   static int counter;
   Dummy() { counter++; };
   ~Dummy() { counter--; };
};

int Dummy::counter = 0;

int main() {
  
  Dummy a; //Object is created locally on stack and automatically cleaned when local scope is done
  Dummy b[5];
  Dummy *c = new Dummy; //this object is created on heap and needs to be manually deleted

  cout << "1) Object count: " << Dummy::counter << " " << c->counter << "\n";
  
  delete c;

  cout << "2) Object count: " << a.counter << "\n";

  return 0;
}
