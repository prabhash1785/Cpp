#include <iostream>
using namespace std;

int main() {

 short a = 20;
 int b = a; //implicit conversion of short to int

 cout << "Value of Short a: " << a;
 cout << "Value of int b: " << b << "\n";

 //convert float to int. This will result in the truncation of floating parts and in case of large floating point numbers, there will be undefined behaviors
 float f = 3.9865;
 b = f;

 cout << "Flat f: " << f;
 cout << "Int b: " << b << "\n";

 return 0;

}
