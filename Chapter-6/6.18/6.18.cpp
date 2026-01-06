#include <iostream>

using namespace std;



bool isPrime(int number) {
	if (number == 1)
		return false;
	for (int divisor = 2; divisor <= number / 2; divisor++) {
		if (number % divisor == 0)
			return false;
	}
	return true;
}


int main() {
	int count = 0;

	for (int i = 1; i <= 10000; i++) {
		if (isPrime(i))
			count++;
	}

	cout << "The number of prime numbers less than 10000 is " << count << endl;


	return 0;
}