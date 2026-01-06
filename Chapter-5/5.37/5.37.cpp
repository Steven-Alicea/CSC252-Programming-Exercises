#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double sum = 0;

	for (int i = 1; i <= 624; i++) {
		sum +=  1 / (i + sqrt(i + 1));
		cout << "Sum = " << sum << endl;
	}

	return 0;
}