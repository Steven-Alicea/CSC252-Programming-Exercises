#include <iostream>

using namespace std;



int main() {
	char uppercase_letter, lowercase_letter;

	cout << "Enter an uppercase letter: ";
	cin >> uppercase_letter;

	if (int(uppercase_letter) >= 65 && int(uppercase_letter) <= 90) {

		lowercase_letter = (uppercase_letter + 'a') - 'A';
		cout << lowercase_letter << endl;
	}
	else
		cout << "Error: invalid input." << endl;


	return 0;
}