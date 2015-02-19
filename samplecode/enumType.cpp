#include <iostream>
using namespace std;

enum color {red, green, blue, black, white, orange};

int main() {
  color mycolor;
  mycolor = white; //this value if defined as enum type above
  
  cout << "MyColor Value: " << mycolor << "\n";
  
  if(mycolor == 4) {
    cout << "comparison is successful!\n";
  } else {
    cout << "There is something wrong with comparison!!\n";
  }

  return 0;
}
