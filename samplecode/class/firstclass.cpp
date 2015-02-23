#include <iostream>
using namespace std;

class Person {

  private:
    string firstName;
    string lastName;

  public:
    Person();
    Person(string fName, string lName) {
      firstName = fName;
      lastName = lName;
    }

    void printFullName() {
      cout << "Full Name: " << firstName << " " << lastName << "\n";
    }

};

//showing two different ways to access object members in C++
Person::Person() {
  this->firstName = "No";
  this->lastName = "Name";
  //Person("Mango", "Apple"); //call overloaded constructor
}

int main() {
  
  Person person1("Foo", "Bar");
  Person person2;
  
  person1.printFullName();
  person2.printFullName();

  return 0;

}
