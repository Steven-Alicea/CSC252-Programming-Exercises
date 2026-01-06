#include <iostream>

using namespace std;



int main() {
	int integer;
	char hex_digit;

	cout << "Enter a decimal value (0 to 15): ";
	cin >> integer;

	if (integer >= 0 && integer <= 9)
		cout << "The hex value is " << integer << endl;
	else if (integer >= 10 && integer <= 15) {
		hex_digit = 55 + integer;
		cout << "The hex value is " << hex_digit << endl;
	}
	else
		cout << integer << " is an invalid input" << endl;


	return 0;
}