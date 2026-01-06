#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

	int input;
	int positiveNumbers = 0, negativeNumbers = 0, totalNumbers = 0, sum = 0;

	cout << "Enter an integer, the input ends if it is 0: ";
	do {
		cin >> input;

		sum += input;

		if (input > 0) {
			positiveNumbers++;
			totalNumbers++;
		}
		else if (input < 0) {
			negativeNumbers++;
			totalNumbers++;
		}
	} while (input != 0);

	if (totalNumbers == 0)
		cout << "No numbers are entered except " << input << endl;
	else {
		cout << "The number of positives is " << positiveNumbers << endl;
		cout << "The number of negatives is " << negativeNumbers << endl;
		cout << "The total is " << sum << endl;
		cout << "The average is " << (double)sum / totalNumbers << endl;
	}

	return 0;
}