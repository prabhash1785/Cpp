//This is a test to see if we can modify state of an object if it is declared as const. 
// As per documentation, we should not be able to modify state of an object if it is declared as const.

#include <iostream>
using namespace std;

class Sample {

  public:
   int a;
   Sample(int val) : a(val) { };
   int getValue() const;
   void setValue(int); //this function can only be called from non-const object
    
};

int Sample::getValue() const {
  return a;
}

void Sample::setValue(int b) {
  a = b;
}

int main() {
  
  Sample sample(10);
  sample.a = 20; //lets change the value of a, this should be allowed because it's on a non-const object 
  cout << "Value of a for non-const object: " << sample.a << "\n";
  
  sample.setValue(30);
  cout << "Updated value of a in non-const object: " << sample.getValue() << "\n";


  //For Const object, you can only have const functions and functions can't be used to modify data member values
  const Sample sample2(6);
  
  //below statement fails compilation error as sample2 is const object and it's members are read only
  //sample2.a = 12; //lets change the value of a, this will fail because sample2 is const object and doesn't allow write to it's members
 
  cout << "Value of a for const object: " << sample2.getValue() << "\n";
  
  return 0;

}
