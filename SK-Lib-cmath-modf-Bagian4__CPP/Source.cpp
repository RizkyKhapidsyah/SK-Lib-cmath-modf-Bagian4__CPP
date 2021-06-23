// CPP program to demonstrate
// modf() function
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	// Taking positive value
	double k = 8, p, fraction;

	// Breaks k into two parts
	fraction = modf(k, &p);

	cout << k << " =>";
	cout << "\tInteger Value = " << p << endl << "\tFraction Value = " << fraction << endl;

	// Taking negative value
	k = -8;
	fraction = modf(k, &p);

	cout << k << " =>";
	cout << "\tInteger Value = " << p << endl << "\tFraction Value = " << fraction << endl;

	_getch();
	return 0;
}
