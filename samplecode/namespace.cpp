// namespaces
#include <iostream>
using namespace std;

namespace foo
{
  int value() { return 5; }
}

namespace bar
{
  const double pi = 3.1416;
  double value() { return 2*pi; }
}

namespace animal_Names {
   string dog = "Max";
   string cat = "George";

}

int main () {
  cout << foo::value() << '\n';
  cout << bar::value() << '\n';
  cout << bar::pi << '\n';

  using namespace animal_Names;
  cout << dog << " " << cat << "\n";  

  return 0;
}
