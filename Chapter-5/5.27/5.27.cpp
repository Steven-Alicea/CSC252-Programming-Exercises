#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double pi = 0;

	for (int i = 1; i <= 100000; i++) {
		
		pi += pow(-1, i + 1) / (2 * i - 1);

		if (i % 10000 == 0)
			cout << "i = " << i << "\tPI = " << pi * 4 << endl;
	}
	
	pi *= 4;
	cout << "PI = " << pi << endl;
	return 0;
}