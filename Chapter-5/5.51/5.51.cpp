#include <iostream>
#include <string>

using namespace std;


int main() {
	string isbn;
	int checksum = 0;

	cout << "Enter the first 12 digits of an ISBN-13 as a string: ";
	cin >> isbn;

	if (isbn.size() != 12)
		cout << isbn << " is an invalid input" << endl;
	else {
		for (int i = 0; i < isbn.size(); i++) {
			if (i % 2 == 0)
				checksum += 3 * int(isbn[i] - '0');
			else
				checksum += int(isbn[i] - '0');
		}
		checksum = 10 - checksum % 10;
		if (checksum == 10)
			checksum = 0;
		isbn += char(checksum + '0');
		
		cout << "The ISBN-13 number is " << isbn << endl;
	}


	return 0;
}