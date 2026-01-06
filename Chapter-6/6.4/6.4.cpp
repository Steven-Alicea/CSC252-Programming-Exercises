#include <iostream>

using namespace std;



void reverse(int number) {
	int reversedNumber = 0, remainder;
	while (number != 0) {
		remainder = number % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		number /= 10;
	}
	cout << reversedNumber << endl;
}


int main() {
	int n;

	cout << "Enter an integer: ";
	cin >> n;

	reverse(n);


	return 0;
}