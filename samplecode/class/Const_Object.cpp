//This is a test to see if we can modify state of an object if it is declared as const. 
// As per documentation, we should not be able to modify state of an object if it is declared as const.

#include <iostream>
using namespace std;

class Sample {

  public:
   int a;
   Sample(int val) : a(val) { };
   void setValue(int);
    
};

void Sample::setValue(int val) {
  a = val;
}

int main() {
  
  Sample sample(10);
  sample.a = 20; //lets change the value of a, this should be allowed because it's on a non-const object 
  cout << "Value of a for non-const object: " << sample.a << "\n";

  const Sample sample2(6);
  
  //below statement fails compilation error as sample2 is const object and it's members are read only
  //sample2.a = 12; //lets change the value of a, this will fail because sample2 is const object and doesn't allow write to it's members
  
  //since sample2 is const object, let's try to update member value by call setValue function
  sample2.setValue(19);

  cout << "Value of a for const object: " << sample2.a << "\n";
  
  return 0;

}
