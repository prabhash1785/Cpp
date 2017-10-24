#include <iostream>
#include <string.h>

using namespace std;

int main() {
    const char a[] = "Hello memcpy..";
    const int n = strlen(a);
    cout << "Original string = " << a << endl;
    char b[n + 1];

    memcpy(b, a, n);
    cout << "Original string = " << a << " and size= " << n << endl;
    cout << "Copied string = " << b << " and size= " << strlen(b) <<endl;
}

