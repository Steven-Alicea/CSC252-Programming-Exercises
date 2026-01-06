#include <iostream>

using namespace std;



void displayPattern(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--)
			cout << " ";
		for (int k = n; k > 0; k--)
			if (k <= i)
				cout << k;
		cout << endl;
	}
}


int main() {
	int n;

	cout << "Enter an integer: ";
	cin >> n;

	displayPattern(n);


	return 0;
}