#include <iostream>

using namespace std;



int main() {
	char letter;

	cout << "Enter a letter: ";
	cin >> letter;

	if (int(letter) < 65 || (int(letter) > 90 && int(letter) < 97) || int(letter) > 122)
		cout << letter << " is an invalid input" << endl;

	else if (int(letter) >= 65 && int(letter) <= 90
		&& (letter == 'A' || letter == 'E'
			|| letter == 'I' || letter == 'O'
			|| letter == 'U'))
		cout << letter << " is a vowel" << endl;

	else if (int(letter) >= 97 && int(letter) <= 122
		&& (letter == 'a' || letter == 'e'
			|| letter == 'i' || letter == 'o'
			|| letter == 'u'))
		cout << letter << " is a vowel" << endl;
	else
		cout << letter << " is a consonant" << endl;


	return 0;
}