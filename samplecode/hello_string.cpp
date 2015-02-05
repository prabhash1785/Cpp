#include <iostream>
#include <string>

using namespace std;

int main() {

	string a = "This is my first string.";
	string b("Second part of string.");

	string concatenated_string;

	concatenated_string = a + " " + b;

	cout << concatenated_string << endl;

	cout << "endl manipulator ends the line by printing a new line and flushing the stream!!" << endl;

	return 0;

}
