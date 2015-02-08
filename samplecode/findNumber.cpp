# include <iostream>
using namespace std;

//This function will find a number from a given array. If number is not found this will return -1.
//Time Complexity: O(n)
int findNum(int n, int array[], int size) {
	
	int loc = -1;
	for(int i = 0; i < size; i++) {
		if(array[i] == n) {
			loc = i;
			break;
		}
	
	}

	return loc;

}

int main() {
	const int ARRAY_SIZE = 11;
	int list[ARRAY_SIZE] = {6, 8, 9, 12, 85, 2, 90, 11, 67, 22, 56};
	int numToBeFound = 11;

	int pos = findNum(numToBeFound, list, ARRAY_SIZE);

	if(pos < 0) {
		cout << "Number is not available in the array \n";
	} else {

		cout << numToBeFound << " is present at index " << pos << '\n';
	}

	return 0;

}
