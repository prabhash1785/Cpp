#include <iostream>
using namespace std;

int main() {

  int array[5];
  int * p;

  p = array;
  *p = 10;

  p++;
  *p = 20;

  p = &array[2];  
  *p = 30;

  p = array + 3;  
  *p = 40;

  p = array;  
  *(p+4) = 50;

  cout << "Here are array elements:\n";

  for(int i = 0; i < 5; i++) { 
    cout << array[i] << " ";
  }

  cout << "\n";
  return 0;
}
