#include <iostream>

using namespace std;



bool isPrime(int number) {
	if (number < 2)
		return false;
	for (int divisor = 2; divisor <= number / 2; divisor++) {
		if (number % divisor == 0)
			return false;
	}
	return true;
}


int main() {
	int p = -1;

	for (int i = 1; i <= 10000; i++) {
		if (isPrime(i)) {
			if (i - p == 2)
				cout << "(" << p << ", " << i << ")" << endl;
			p = i;
		}
	}


	return 0;
}