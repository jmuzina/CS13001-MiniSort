// Sorts three numbers in ascending order
// Project #2 Mini Sort
// CS 13011
// Joseph Muzina
// 08/31/2018

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	// inputs the numbers
	cout << "Enter three numbers: ";
	int x, y, z;
	cin >> x >> y >> z;

	int tmp;

	// orders x and y
	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	// orders y and z
	if (y > z) {
		tmp = y;
		y = z;
		z = tmp;
	}

	// re-orders x and y since y was re-assigned to z in the previous if statement
	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	// outputs the sorted numbers
	cout << "The sorted numbers are: ";
	cout << x << " " << y << " " << z << endl;
	
	//pauses to display successful output
	system("pause");
}