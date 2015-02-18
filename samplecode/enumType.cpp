#include <iostream>
using namespace std;

enum color {red, green, blue, black, white, orange};

enum class Animals {dog, cat, lion, fox, goat, zebra, donkey};

int main() {
  color mycolor;
  mycolor = white; //this value if defined as enum type above
  
  cout << "MyColor Value: " << mycolor << "\n";
  
  if(mycolor == 4) {
    cout << "comparison is successful!\n";
  } else {
    cout << "There is something wrong with comparison!!\n";
  }

  Animals animal;
  animal = Animals::lion;
  cout << "Animal Value: " << animal << "\n";

  return 0;
}
