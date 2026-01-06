#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	/*
	// While loop
	int k = 1, p = 20;
	cout << left << setw(14) << "Kilograms" << setw(10) << "Pounds" << setw(8) << "|" 
		<< setw(12) << "Pounds" << "Kilograms" << endl;
	while (k < 200) {
		if (k % 2 != 0) {
			cout << left << fixed << setw(14) << setprecision(1) << k << setw(10) << k * 2.2 << setw(8) << "|"
				<< setprecision(2) << setw(12) << p << p * (1 / 2.2) << endl;
			p += 5;
		}
		k++;
	}
	*/

	// Shorter While loop
	int k = 1, p = 20;
	cout << left << setw(14) << "Kilograms" << setw(10) << "Pounds" << setw(8) << "|"
		<< setw(12) << "Pounds" << "Kilograms" << endl;
	while (k < 200) {
		cout << left << fixed << setw(14) << setprecision(1) << k << setw(10) << k * 2.2 << setw(8) << "|"
			<< setprecision(2) << setw(12) << p << p * (1 / 2.2) << endl;
		p += 5;
		k += 2;
	}
	

	/*
	// For loop
	int p = 20;
	cout << left << setw(14) << "Kilograms" << setw(10) << "Pounds" << setw(8) << "|"
		<< setw(12) << "Pounds" << "Kilograms" << endl;
	for (int k = 1; k < 200; k++) {
		if (k % 2 != 0) {
			cout << left << fixed << setw(14) << setprecision(1) << k << setw(10) << k * 2.2 << setw(8) << "|"
			<< setprecision(2) << setw(12) << p << p * (1 / 2.2) << endl;
			p += 5;
		}
	}
	*/

	/*
	//Shorter For loop
	int p = 20;
	cout << left << setw(14) << "Kilograms" << setw(10) << "Pounds" << setw(8) << "|"
		<< setw(12) << "Pounds" << "Kilograms" << endl;
	for (int k = 1; k < 200; k += 2) {
		cout << left << fixed << setw(14) << setprecision(1) << k << setw(10) << k * 2.2 << setw(8) << "|"
			<< setprecision(2) << setw(12) << p << p * (1 / 2.2) << endl;
		p += 5;
	}
	*/

	return 0;
}