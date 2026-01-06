#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	
	// While loop
	int i = 1;
	cout << left << setw(14) << "Kilograms" << "Pounds" << endl;
	while (i < 200) {
		if (i % 2 != 0)
			cout << left << fixed << setw(14) << setprecision(1) << i << i * 2.2 << endl;
		i++;
	}

	
	/*
	// Shorter While loop
	int i = 1;
	cout << left << setw(14) << "Kilograms" << "Pounds" << endl;
	while (i < 200) {
		cout << left << fixed << setw(14) << setprecision(1) << i << i * 2.2 << endl;
		i += 2;
	}
	*/

	/*
	// For loop
	cout << left << setw(14) << "Kilograms" << "Pounds" << endl;
	for (int i = 1; i < 200; i++) {
		if (i % 2 !=  0 )
		cout << left << fixed << setw(14) << setprecision(1) << i << i * 2.2 << endl;
	}
	*/

	/*
	// Shorter For loop
	cout << left << setw(14) << "Kilograms" << "Pounds" << endl;
	for (int i = 1; i < 200; i += 2)
			cout << left << fixed << setw(14) << setprecision(1) << i << i * 2.2 << endl;
	*/
	return 0;
}