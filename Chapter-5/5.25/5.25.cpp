#include <iostream>

using namespace std;

int main() {

	int n = 50000;
	double ltr = 0, rtl = 0;

	for (int i = 1; i <= n; i++) {
		ltr = ltr + (1.0 / i);
	}
	cout << ltr << endl;

	for (int i = n; i >= 1; i--) {
		rtl = rtl + (1.0 / i);
	}
	cout << rtl << endl;
	return 0;
}