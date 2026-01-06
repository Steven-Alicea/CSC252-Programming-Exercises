#include <iostream>
#include <iomanip>

using namespace std;



bool is_prime(int n) {
	if (n < 2)
		return false;
	for (int divisor = 2; divisor <= n / 2; divisor++) {
		if (n % divisor == 0)
			return false;
	}
	return true;
}

bool is_palindrone(int n) {
	int number = n, reversed_number = 0;
	while (n != 0) {
		int remainder = n % 10;
		reversed_number = reversed_number * 10 + remainder;
		n /= 10;
	}
	if (reversed_number == number)
		return true;
	else
		return false;
}


int main() {
	int count = 0, n = 1, width = 8;

	while (count < 100) {
		if (is_prime(n) && is_palindrone(n)) {
			cout << right << setw(width) << n << " ";
			count++;
			if (count % 10 == 0)
				cout << endl;
		}
		n++;
	}
	cout << "Total Palindromic Primes: " << count << endl;


	return 0;
}