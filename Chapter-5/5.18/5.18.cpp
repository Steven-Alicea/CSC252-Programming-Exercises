#include <iostream>

using namespace std;

int main() {

	int n, factor = 2;

	cout << "Enter a positive integer: ";
	cin >> n;

	cout << "The factors for " << n << " is/are: ";

	while (factor <= n) {
		if (n % factor == 0) {
			n /= factor;
			cout << factor << " ";
		}
		else
			factor++;
	}
	cout << endl;

	return 0;
}