#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b) {
	T result;
	result = a + b;
	return result;
	
}

int main() {
	
	int i = 5, j = 9, k;
	k = sum(i, j);
	cout << "k: " << k;

	double p = 2.0, q = 9.1, r;
	r = sum<double>(p, q);
	cout << "\nr: " << r << '\n';

	return 0;

}
