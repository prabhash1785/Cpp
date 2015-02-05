#include <iostream>
using namespace std;

int main() {
	int a = 3;
	int b(5);
	//int c{10}; //this type of uniform initialization is failing while compiling with g++
	int c(10);

	int result = a + b + c;

	cout << "result: " << result << '\n';
	
	return 0;
}

