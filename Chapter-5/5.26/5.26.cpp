#include <iostream>

using namespace std;

int main() {

	double sum = 0;

	for (int i = 1; i <= 97; i += 2) {
		sum = sum + (i / (i + 2.0));
		cout << i << "/" << i+2 << " = " << sum << endl;
		if (i < 97)
			cout << "+" << endl;
	}

	cout << "Sum = " << sum << endl;

	return 0;
}