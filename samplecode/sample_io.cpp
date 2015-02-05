// basic i/o example

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int i;
  cout << "Please enter an integer value: ";
  cin >> i;
  cout << "The value you entered is " << i;
  cout << " and its double is " << i*2 << ".\n";
 
  cin.ignore(); //used to flush '/n' from stream before or after calling getling function
 
  //get string as input from stdin by using getline
  string mystr;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";

  return 0;
}
