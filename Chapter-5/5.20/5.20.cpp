#include <iostream>

using namespace std;

int main() {

	// Pattern A
	cout << "Pattern A" << endl;

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Pattern B
	cout << "Pattern B" << endl;

	for (int i = 6; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Pattern C
	cout << "Pattern C" << endl;

	for (int i = 1; i <= 6; i++) {
		for (int j = i; j >= 1; j--) {
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Pattern D
	cout << "Pattern D" << endl;

	for (int i = 1; i <= 6; i++) {
		for (int j = 6; j >= i; j--) {
			cout << i << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Pattern E
	cout << "Pattern E" << endl;

	for (int i = 6; i >= 1; i--) {
		for (int j = 6; j >= i; j--) {
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Pattern F
	cout << "Pattern F" << endl;

	for (int i = 1; i <= 6; i++) {
		for (int j = 6; j >= i; j--) {
			cout << j << " ";
		}
		cout << endl;
	}

	// Pattern G
	cout << "Pattern G" << endl;

	for (int i = 1; i <= 6; i++) {
		for (int j = 6 - i; j > 0; j--)
			cout << " ";
		for (int k = 1; k <= i; k++)
			cout << k;
		cout << endl;
	}

	return 0;
}