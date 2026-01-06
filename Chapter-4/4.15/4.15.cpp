#include <iostream>
#include <cctype>

using namespace std;



int main() {
	char letter;

	cout << "Enter a letter: ";
	cin >> letter;

	if ((letter >= 65 && letter <= 67) || (letter >= 97 && letter <= 99))
		cout << "The corresponding number is 2" << endl;
	else if ((letter >= 68 && letter <= 70) || (letter >= 100 && letter <= 102))
		cout << "The corresponding number is 3" << endl;
	else if ((letter >= 71 && letter <= 73) || (letter >= 103 && letter <= 105))
		cout << "The corresponding number is 4" << endl;
	else if ((letter >= 74 && letter <= 76) || (letter >= 106 && letter <= 108))
		cout << "The corresponding number is 5" << endl;
	else if ((letter >= 77 && letter <= 79) || (letter >= 109 && letter <= 111))
		cout << "The corresponding number is 6" << endl;
	else if ((letter >= 80 && letter <= 83) || (letter >= 112 && letter <= 115))
		cout << "The corresponding number is 7" << endl;
	else if ((letter >= 84 && letter <= 86) || (letter >= 116 && letter <= 118))
		cout << "The corresponding number is 8" << endl;
	else if ((letter >= 87 && letter <= 90) || (letter >= 119 && letter <= 122))
		cout << "The corresponding number is 9" << endl;
	else
		cout << letter << " is an invalid input" << endl;


	return 0;
}