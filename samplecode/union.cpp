#include <iostream>

union {
 int i;
 short s;
 struct str {
   int firstThree;
   int lastThree;

 } empStruct;
 char c;

} u;

int main() {
  u.i = 256123;
  u.empStruct.firstThree = 123; //since union uses same memory location for all it's members; only one member can have value at one time.
  u.empStruct.lastThree = 987;

  std::cout << "empNum: " << u.i << "\n";
  std::cout << "empNum2: " << u.empStruct.firstThree << "-" << u.empStruct.lastThree << "\n";
  
  return 0;

}
