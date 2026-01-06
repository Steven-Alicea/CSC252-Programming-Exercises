#include <iostream>

using namespace std;



int main() {
	int n;

	cout << "Enter a three-digit integer: ";
	cin >> n;

	int d1 = n % 10;
	int d3 = (n / 10 / 10);
	if (d1 == d3)
		cout << n << " is a palindrome" << endl;
	else
		cout << n << " is not a palindrome" << endl;


	return 0;
}