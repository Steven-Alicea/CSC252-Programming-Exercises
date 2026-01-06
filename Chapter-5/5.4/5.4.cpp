#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	/*
	// While loop
	int i = 1;
	cout << left << setw(10) << "Miles" << "Kilometers" << endl;
	while (i <= 10) {
		cout << left << fixed << setw(10) << setprecision(3) << i << i * 1.609 << endl;
		i++;
	}
	*/

	// For loop
	cout << left << setw(10) << "Miles" << "Kilometers" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << left << fixed << setw(10) << setprecision(3) << i << i * 1.609 << endl;
	}

	return 0;
}