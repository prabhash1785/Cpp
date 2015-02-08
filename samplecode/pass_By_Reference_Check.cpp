#include <iostream>
using namespace std;

void increment_Array_Elements(int array[], int size) {
	
  //increment all elements by 2 in array
  for(int i = 0; i < size; i++) {
    array[i] += 2;
  }

}

int main() {

  int list[5] = {5, 11, 6, 9, 15};

  //print array elements before calling function
  for(int i = 0; i < 5; i++) {
	cout << list[i] << " ";
  }

  //call function increment Array Elements to modify array
  increment_Array_Elements(list, 5); //pass Array by reference. Array and Objects are always passed by reference, no need to use &. 

  cout << "\n\n"; //line breaks for clear console output

  //print array elements after calling function
  for(int i = 0; i < 5; i++) {
        cout << list[i] << " ";
  }

  cout << "\n";

}
