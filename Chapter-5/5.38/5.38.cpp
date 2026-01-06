#include <iostream>

using namespace std;

int main() {

	int isbn, isbn10, digit, checksum = 0;

	cout << "Enter the first 9 digits of an ISBN as integer: ";
	cin >> isbn;

	isbn10 = isbn;

	for (int i = 9; i >= 1; i--) {
		digit = isbn % 10;
		isbn /= 10;
		checksum += digit * i;
	}
	checksum %= 11;

	if (checksum == 10)
		cout << "The ISBN-10 number is " << isbn10 << 'X' << endl;
	else
		cout << "THe ISBN-10 number is " << isbn10 << checksum << endl;

	return 0;
}