#include <iostream>

using namespace std;



int main() {
	int number, sum_of_digits = 0;

	cout << "Enter a number between 0 and 1000: ";
	cin >> number;

	// cannot use a loop
	while (number != 0) {
		int last_digit = number % 10;
		sum_of_digits += last_digit;
		number /= 10;
	}

	cout << "The sum of the digit is " << sum_of_digits;


	return 0;
}