#include <iostream>

using namespace std;

int main() {
	// Neet to finish
	/*
	int rows, count1 = 0, count2 = 0, k = 0;

	cout << "Enter an integer from 1 to 15: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int space = 1; space <= rows - i; ++space) {
			cout << "  ";
			++count1;
		}
		while (k != 2 * i - 1) {
			if (count1 <= rows - 1) {
				cout << i + k << " ";
				++count1;
			}
			else {
				++count2;
				cout << i + k - 2 * count2 << " ";
			}
			k++;
		}	
		count2 = count1 = k = 0;
		cout << endl;
	}

	cout << endl;

	// Pattern A
	cout << "Pattern A" << endl;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;
	*/

	int n;
	cout << "Enter the number of rows: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		// Print spaces for alignment
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}

		// Print the first half of the palindrome
		for (int j = 1; j <= i; j++) {
			cout << j;
		}

		//// Print the second half of the palindrome
		//for (int j = i - 1; j >= 1; j--) {
		//	cout << j;
		//}

		cout << endl;
	}


	return 0;
}