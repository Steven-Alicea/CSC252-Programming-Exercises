#include <iostream>

using namespace std;

int main() {

	int n, max, count = 0;

	cout << "Enter numbers: ";

	do {
		cin >> n;
		if (count == 0) {
			max = n;
			count = 1;
		}
		if (n > max) {
			max = n;
			count = 1;
		}
		else if (n == max)
			count++;
	} while (n != 0);

	cout << "The largest number is " << max << endl;
	cout << "The occurrence count of the largest number is " << count << endl;

	return 0;
}