#include <iostream>

using namespace std;



int main() {
	int isbn, isbn10, checksum, d1, d2, d3, d4, d5, d6, d7, d8, d9;

	cout << "Enter the first 9 digits of an ISBN as integer: ";
	cin >> isbn;

	isbn10 = isbn;

	d9 = isbn % 10;
	isbn /= 10;
	d8 = isbn % 10;
	isbn /= 10;
	d7 = isbn % 10;
	isbn /= 10;
	d6 = isbn % 10;
	isbn /= 10;
	d5 = isbn % 10;
	isbn /= 10;
	d4 = isbn % 10;
	isbn /= 10;
	d3 = isbn % 10;
	isbn /= 10;
	d2 = isbn % 10;
	isbn /= 10;
	d1 = isbn % 10;
	isbn /= 10;

	checksum = (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7
		+ d8 * 8 + d9 * 9) % 11;

	if (checksum == 10)
		cout << "The ISBN-10 number is " << isbn10 << 'X' << endl;
	else
		cout << "THe ISBN-10 number is " << isbn10 << checksum << endl;


	return 0;
}