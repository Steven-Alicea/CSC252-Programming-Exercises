#include <iostream>

using namespace std;



int reverse(int number) {
	int reversedNumber = 0, remainder;
	while (number != 0) {
		remainder = number % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		number /= 10;
	}
	return reversedNumber;
}

bool isPalindrome(int number) {
	if (reverse(number) == number)
		return true;
	else 
		return false;
}


int main() {
	int n;

	cout << "Enter an integer: ";
	cin >> n;

	cout << "Is " << n << " a palindrome: ";
	
	if (isPalindrome(n))
		cout << "True" << endl;
	else
		cout << "False" << endl;


	return 0;
}