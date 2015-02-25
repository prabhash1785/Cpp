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
  
  Dummy a; //it creates an object reference
  Dummy b[5];
  Dummy *c = new Dummy; //when object is created using new, it creates a pointer to an object

  cout << "1) Object count: " << Dummy::counter << " " << c->counter << "\n";
  
  delete c;

  cout << "2) Object count: " << a.counter << "\n";

  return 0;
}
