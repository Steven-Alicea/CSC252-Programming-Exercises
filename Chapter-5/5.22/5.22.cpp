#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	/*
	// 5.17 Start
	const int NUMBERS_OF_PRIMES = 50;
	const int NUMBER_OF_PRIMES_PER_LINE = 10;
	int count = 0;
	int number = 2;

	cout << "The first 50 prime numbers are \n";

	while (count < NUMBERS_OF_PRIMES) {
		bool isPrime = true;

		for (int divisor = 2; divisor <= number / 2; divisor++) {
			if (number % divisor == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			count++;

			if (count % NUMBER_OF_PRIMES_PER_LINE == 0)
				cout << setw(4) << number << endl;
		else
			cout << setw(4) << number;
	}
	number++;
	}
	// 5.17 End
	*/

	const int NUMBERS_OF_PRIMES = 1000;
	const int NUMBER_OF_PRIMES_PER_LINE = 8;
	int count = 0;
	int number = 2;

	cout << "The first 50 prime numbers are \n";

	while (number < NUMBERS_OF_PRIMES) {
		bool isPrime = true;

		for (int divisor = 2; divisor <= number / 2; divisor++) {
			if (number % divisor == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			count++;

			if (count % NUMBER_OF_PRIMES_PER_LINE == 0)
				cout << number << ", " << endl;
			else
				cout << number << ", ";
		}
		number++;
	}

	return 0;
}