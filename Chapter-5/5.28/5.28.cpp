#include <iostream>

using namespace std;

int main() {

	double e = 1.0;

	for (int i = 1; i <= 100000; i++) {

		double denominator = 1.0;

		for (int j = 1; j <= i; j++)
			denominator *= j;

		e += 1.0 / denominator;

		if (i % 10000 == 0)
			cout << "i = " << i << "\te = " << e << endl;
	}

	return 0;
}