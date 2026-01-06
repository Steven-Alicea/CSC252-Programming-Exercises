#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// While loop
	/*
	int m = 1, k = 20;
	cout << left << setw(8) << "Miles" << setw(14) << "Kilometers" << setw(4) << "|" 
		<< setw(14) << "Kilometers" << "Miles" << endl;
	while (m <= 10) {
		cout << left << fixed << setw(8) << setprecision(3) << m << setw(14) << m * 1.609 << setw(4) << "|"
			<< setprecision(3) << setw(14) << k << k * (1 / 1.609) << endl;
		k += 5;
		m++;
	}
	*/

	// For loop
	int k = 20;
	cout << left << setw(8) << "Miles" << setw(14) << "Kilometers" << setw(4) << "|"
		<< setw(14) << "Kilometers" << "Miles" << endl;
	for (int m = 1; m <= 10; m++) {
		cout << left << fixed << setw(8) << setprecision(3) << m << setw(14) << m * 1.609 << setw(4) << "|"
			<< setprecision(3) << setw(14) << k << k * (1 / 1.609) << endl;
		k += 5;
	}
	return 0;
}