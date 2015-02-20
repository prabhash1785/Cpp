#include <iostream>
using namespace std;

class Person {

  private:
    string firstName;
    string lastName;

  public:
    Person(string fName, string lName) {
      firstName = fName;
      lastName = lName;
    }

    void printFullName() {
      cout << "Full Name: " << firstName << " " << lastName << "\n";
    }

};

int main() {
  
  Person person("Foo", "Bar");
  person.printFullName();

  return 0;

}
