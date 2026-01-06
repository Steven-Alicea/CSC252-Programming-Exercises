#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



double estimatePi(int n) {
	double pi = 0;

	for (double i = 1; i <= n; i++)
		pi += pow(-1, i + 1) / (2 * i - 1);
	pi *= 4;

	return pi;
}


int main() {
	cout << left << setw(12) << "i" << "m(i)" << endl;

	for (int i = 1; i <= 901; i += 100)
		cout << left << fixed << setw(12) << i << setprecision(4) << estimatePi(i) << endl;


	return 0;
}